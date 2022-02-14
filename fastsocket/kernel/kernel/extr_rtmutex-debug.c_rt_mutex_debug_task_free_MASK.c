
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pi_blocked_on; int pi_waiters; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct task_struct *VAR_0)
{
 FUNC_0(!FUNC_1(&VAR_0->pi_waiters));
 FUNC_0(VAR_0->pi_blocked_on);
}
