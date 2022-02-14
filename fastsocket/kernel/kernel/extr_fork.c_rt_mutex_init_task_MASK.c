
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int * pi_blocked_on; int pi_lock; int pi_waiters; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0)
{
 FUNC_1(&VAR_0->pi_lock);




}
