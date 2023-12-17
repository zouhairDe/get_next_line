/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:30:18 by zouddach          #+#    #+#             */
/*   Updated: 2023/12/02 10:08:09 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*ft_trim(char *buffer);
char	*ft_strchr(char *str, char arg);
char	*ft_strjoin(char *buffer, char *return_val);
char	*ft_strdup(char *str);
char	*get_next_line(int fd);

#endif