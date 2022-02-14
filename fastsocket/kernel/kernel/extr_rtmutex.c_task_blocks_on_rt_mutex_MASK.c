
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pi_lock; struct rt_mutex_waiter* pi_blocked_on; int pi_waiters; int prio; } ;
struct rt_mutex_waiter {int pi_list_entry; int list_entry; struct rt_mutex* lock; struct task_struct* task; } ;
struct rt_mutex {int wait_lock; int wait_list; } ;


 int FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct rt_mutex_waiter*,int) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct task_struct*,int,struct rt_mutex*,struct rt_mutex_waiter*,struct task_struct*) ;
 scalar_t__ FUNC_7 (struct rt_mutex*) ;
 struct task_struct* FUNC_8 (struct rt_mutex*) ;
 struct rt_mutex_waiter* FUNC_9 (struct rt_mutex*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct rt_mutex *VAR_0,
       struct rt_mutex_waiter *VAR_1,
       struct task_struct *VAR_2,
       int VAR_3)
{
 struct task_struct *VAR_4 = FUNC_8(VAR_0);
 struct rt_mutex_waiter *VAR_5 = VAR_1;
 unsigned long VAR_6;
 int VAR_7 = 0, VAR_8;

 FUNC_11(&VAR_2->pi_lock, VAR_6);
 FUNC_0(VAR_2);
 VAR_1->task = VAR_2;
 VAR_1->lock = VAR_0;
 FUNC_5(&VAR_1->list_entry, VAR_2->prio);
 FUNC_5(&VAR_1->pi_list_entry, VAR_2->prio);


 if (FUNC_7(VAR_0))
  VAR_5 = FUNC_9(VAR_0);
 FUNC_3(&VAR_1->list_entry, &VAR_0->wait_list);

 VAR_2->pi_blocked_on = VAR_1;

 FUNC_13(&VAR_2->pi_lock, VAR_6);

 if (VAR_1 == FUNC_9(VAR_0)) {
  FUNC_11(&VAR_4->pi_lock, VAR_6);
  FUNC_4(&VAR_5->pi_list_entry, &VAR_4->pi_waiters);
  FUNC_3(&VAR_1->pi_list_entry, &VAR_4->pi_waiters);

  FUNC_0(VAR_4);
  if (VAR_4->pi_blocked_on)
   VAR_7 = 1;
  FUNC_13(&VAR_4->pi_lock, VAR_6);
 }
 else if (FUNC_1(VAR_1, VAR_3))
  VAR_7 = 1;

 if (!VAR_7)
  return 0;






 FUNC_2(VAR_4);

 FUNC_12(&VAR_0->wait_lock);

 VAR_8 = FUNC_6(VAR_4, VAR_3, VAR_0, VAR_1,
      VAR_2);

 FUNC_10(&VAR_0->wait_lock);

 return VAR_8;
}
