
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int WAIT_T ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int *,int) ;

void
FUNC_5(void)
{
    int VAR_6;
    WAIT_T VAR_7;




    if (VAR_5 == 0)
 return;

    while ((VAR_6 = FUNC_4((pid_t) -1, &VAR_7, VAR_2 | VAR_3)) > 0) {
 if (FUNC_0(VAR_0)) {
     (void)FUNC_3(VAR_4, "Process %d exited/stopped status %x.\n", VAR_6,
       FUNC_2(VAR_7));
 }
 FUNC_1(VAR_6, VAR_7, VAR_1);
    }
}
