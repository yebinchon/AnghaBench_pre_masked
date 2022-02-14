
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

int
FUNC_4(int VAR_4, pid_t VAR_5)
{
    struct sigaction VAR_6;
    pid_t VAR_7;
    size_t VAR_8;

    for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
 if ((VAR_7 = FUNC_3(VAR_4)) == -1)
     return -1;
 if (VAR_7 == VAR_5)
     return 0;
 (void)FUNC_1(VAR_1, ((void*)0), &VAR_6);
 (void)FUNC_2(VAR_1, VAR_2);
 (void)FUNC_0(0, VAR_1);
 (void)FUNC_1(VAR_1, &VAR_6, ((void*)0));
    }
    VAR_3 = VAR_0;
    return -1;
}
