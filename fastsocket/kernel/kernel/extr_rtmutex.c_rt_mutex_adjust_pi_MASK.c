
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {scalar_t__ prio; int pi_lock; struct rt_mutex_waiter* pi_blocked_on; } ;
struct TYPE_2__ {scalar_t__ prio; } ;
struct rt_mutex_waiter {TYPE_1__ list_entry; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*,int ,int *,int *,struct task_struct*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct task_struct *VAR_0)
{
 struct rt_mutex_waiter *VAR_1;
 unsigned long VAR_2;

 FUNC_2(&VAR_0->pi_lock, VAR_2);

 VAR_1 = VAR_0->pi_blocked_on;
 if (!VAR_1 || VAR_1->list_entry.prio == VAR_0->prio) {
  FUNC_3(&VAR_0->pi_lock, VAR_2);
  return;
 }

 FUNC_3(&VAR_0->pi_lock, VAR_2);


 FUNC_0(VAR_0);
 FUNC_1(VAR_0, 0, ((void*)0), ((void*)0), VAR_0);
}
