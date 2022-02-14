
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pi_lock; int * pi_blocked_on; int pi_waiters; } ;
struct rt_mutex_waiter {int pi_list_entry; int * task; int list_entry; } ;
struct rt_mutex {int wait_lock; int wait_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*) ;
 struct task_struct* VAR_0 ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct task_struct*,int ,struct rt_mutex*,int *,struct task_struct*) ;
 scalar_t__ FUNC_7 (struct rt_mutex*) ;
 struct task_struct* FUNC_8 (struct rt_mutex*) ;
 struct rt_mutex_waiter* FUNC_9 (struct rt_mutex*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_14(struct rt_mutex *VAR_1,
     struct rt_mutex_waiter *VAR_2)
{
 int VAR_3 = (VAR_2 == FUNC_9(VAR_1));
 struct task_struct *VAR_4 = FUNC_8(VAR_1);
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_11(&VAR_0->pi_lock, VAR_5);
 FUNC_4(&VAR_2->list_entry, &VAR_1->wait_list);
 VAR_2->task = ((void*)0);
 VAR_0->pi_blocked_on = ((void*)0);
 FUNC_13(&VAR_0->pi_lock, VAR_5);

 if (VAR_3 && VAR_4 != VAR_0) {

  FUNC_11(&VAR_4->pi_lock, VAR_5);

  FUNC_4(&VAR_2->pi_list_entry, &VAR_4->pi_waiters);

  if (FUNC_7(VAR_1)) {
   struct rt_mutex_waiter *VAR_7;

   VAR_7 = FUNC_9(VAR_1);
   FUNC_3(&VAR_7->pi_list_entry, &VAR_4->pi_waiters);
  }
  FUNC_1(VAR_4);

  if (VAR_4->pi_blocked_on)
   VAR_6 = 1;

  FUNC_13(&VAR_4->pi_lock, VAR_5);
 }

 FUNC_0(!FUNC_5(&VAR_2->pi_list_entry));

 if (!VAR_6)
  return;


 FUNC_2(VAR_4);

 FUNC_12(&VAR_1->wait_lock);

 FUNC_6(VAR_4, 0, VAR_1, ((void*)0), VAR_0);

 FUNC_10(&VAR_1->wait_lock);
}
