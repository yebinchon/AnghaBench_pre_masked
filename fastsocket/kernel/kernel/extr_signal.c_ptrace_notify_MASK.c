
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int si_signo; int si_code; int si_uid; int si_pid; } ;
typedef TYPE_2__ siginfo_t ;
struct TYPE_9__ {TYPE_1__* sighand; } ;
struct TYPE_7__ {int siglock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int,int,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;

void FUNC_7(int VAR_2)
{
 siginfo_t VAR_3;

 FUNC_0((VAR_2 & (0x7f | ~0xffff)) != VAR_0);

 FUNC_2(&VAR_3, 0, sizeof VAR_3);
 VAR_3.si_signo = VAR_0;
 VAR_3.si_code = VAR_2;
 VAR_3.si_pid = FUNC_6(VAR_1);
 VAR_3.si_uid = FUNC_1();


 FUNC_4(&VAR_1->sighand->siglock);
 FUNC_3(VAR_2, 1, &VAR_3);
 FUNC_5(&VAR_1->sighand->siglock);
}
