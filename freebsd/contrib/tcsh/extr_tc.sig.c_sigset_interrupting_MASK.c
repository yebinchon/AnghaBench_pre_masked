
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void (* sa_handler ) (int) ;scalar_t__ sa_flags; int sa_mask; } ;
typedef int sigset_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct sigaction*,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int *) ;

void
FUNC_4(int VAR_1, void (*VAR_2) (int))
{
    struct sigaction VAR_3;

    VAR_3.sa_handler = VAR_2;
    FUNC_2(&VAR_3.sa_mask);
    VAR_3.sa_flags = 0;
    if (FUNC_0(VAR_1, &VAR_3, ((void*)0)) == 0) {
 sigset_t VAR_4;
 FUNC_2(&VAR_4);
 FUNC_1(&VAR_4, VAR_1);
 FUNC_3(VAR_0, &VAR_4, ((void*)0));
    }
}
