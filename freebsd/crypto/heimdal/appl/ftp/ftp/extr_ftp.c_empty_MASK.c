
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *,struct timeval*) ;

int
FUNC_1 (fd_set * VAR_1, int VAR_2)
{
    struct timeval VAR_3;

    VAR_3.tv_sec = VAR_2;
    VAR_3.tv_usec = 0;
    return (FUNC_0 (VAR_0, VAR_1, ((void*)0), ((void*)0), &VAR_3));
}
