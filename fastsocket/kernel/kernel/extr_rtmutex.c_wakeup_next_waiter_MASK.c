
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int pi_lock; int pi_waiters; struct rt_mutex_waiter* pi_blocked_on; } ;
struct rt_mutex_waiter {int pi_list_entry; struct rt_mutex* lock; struct task_struct* task; int list_entry; } ;
struct rt_mutex {int wait_list; } ;
struct TYPE_2__ {int pi_lock; int pi_waiters; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct rt_mutex*) ;
 int FUNC_4 (struct rt_mutex*,struct task_struct*,int ) ;
 struct rt_mutex_waiter* FUNC_5 (struct rt_mutex*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct task_struct*) ;

__attribute__((used)) static void FUNC_9(struct rt_mutex *VAR_2)
{
 struct rt_mutex_waiter *VAR_3;
 struct task_struct *VAR_4;
 unsigned long VAR_5;

 FUNC_6(&VAR_1->pi_lock, VAR_5);

 VAR_3 = FUNC_5(VAR_2);
 FUNC_2(&VAR_3->list_entry, &VAR_2->wait_list);







 FUNC_2(&VAR_3->pi_list_entry, &VAR_1->pi_waiters);
 VAR_4 = VAR_3->task;
 VAR_3->task = ((void*)0);

 FUNC_4(VAR_2, VAR_4, VAR_0);

 FUNC_7(&VAR_1->pi_lock, VAR_5);
 FUNC_6(&VAR_4->pi_lock, VAR_5);

 FUNC_0(!VAR_4->pi_blocked_on);
 FUNC_0(VAR_4->pi_blocked_on != VAR_3);
 FUNC_0(VAR_4->pi_blocked_on->lock != VAR_2);

 VAR_4->pi_blocked_on = ((void*)0);

 if (FUNC_3(VAR_2)) {
  struct rt_mutex_waiter *VAR_6;

  VAR_6 = FUNC_5(VAR_2);
  FUNC_1(&VAR_6->pi_list_entry, &VAR_4->pi_waiters);
 }
 FUNC_7(&VAR_4->pi_lock, VAR_5);

 FUNC_8(VAR_4);
}
