
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void (* sa_handler ) (int) ;int sa_flags; int sa_mask; } ;


 int VAR_0 ;
 void FUNC_0 (int) ;
 int FUNC_1 (int,struct sigaction*,struct sigaction*) ;
 int FUNC_2 (int *) ;

void (*
FUNC_3(int VAR_1, void (*VAR_2)(int)))(int)
{
    struct sigaction VAR_3, VAR_4;

    VAR_3.sa_handler = VAR_2;
    FUNC_2(&VAR_3.sa_mask);
    VAR_3.sa_flags = VAR_0;

    if (FUNC_1(VAR_1, &VAR_3, &VAR_4) == -1)
 return FUNC_0;
    else
 return VAR_4.sa_handler;
}
