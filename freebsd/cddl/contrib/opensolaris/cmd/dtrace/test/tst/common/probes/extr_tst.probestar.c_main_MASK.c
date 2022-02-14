
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
typedef int sigset_t ;
typedef int siginfo_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,struct timespec*) ;

int
FUNC_3(void)
{

    sigset_t VAR_1;
    siginfo_t VAR_2;
    struct timespec VAR_3;

    (void)FUNC_1(&VAR_1);
    (void)FUNC_0(&VAR_1, VAR_0);
    VAR_3.tv_sec = 1;
    VAR_3.tv_nsec = 0;

    for (;;)
        (void)FUNC_2(&VAR_1, &VAR_2, &VAR_3);

    return (0);
}
