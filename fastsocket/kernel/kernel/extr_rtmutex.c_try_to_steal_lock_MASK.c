
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ prio; int pi_lock; int pi_waiters; } ;
struct rt_mutex_waiter {int pi_list_entry; struct task_struct* task; } ;
struct rt_mutex {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct rt_mutex*) ;
 struct task_struct* FUNC_5 (struct rt_mutex*) ;
 int FUNC_6 (struct rt_mutex*) ;
 struct rt_mutex_waiter* FUNC_7 (struct rt_mutex*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_10(struct rt_mutex *VAR_0,
        struct task_struct *VAR_1)
{
 struct task_struct *VAR_2 = FUNC_5(VAR_0);
 struct rt_mutex_waiter *VAR_3;
 unsigned long VAR_4;

 if (!FUNC_6(VAR_0))
  return 0;

 if (VAR_2 == VAR_1)
  return 1;

 FUNC_8(&VAR_2->pi_lock, VAR_4);
 if (VAR_1->prio >= VAR_2->prio) {
  FUNC_9(&VAR_2->pi_lock, VAR_4);
  return 0;
 }






 if (FUNC_1(!FUNC_4(VAR_0))) {
  FUNC_9(&VAR_2->pi_lock, VAR_4);
  return 1;
 }


 VAR_3 = FUNC_7(VAR_0);
 FUNC_3(&VAR_3->pi_list_entry, &VAR_2->pi_waiters);
 FUNC_0(VAR_2);
 FUNC_9(&VAR_2->pi_lock, VAR_4);
 if (FUNC_1(VAR_3->task != VAR_1)) {
  FUNC_8(&VAR_1->pi_lock, VAR_4);
  FUNC_2(&VAR_3->pi_list_entry, &VAR_1->pi_waiters);
  FUNC_0(VAR_1);
  FUNC_9(&VAR_1->pi_lock, VAR_4);
 }
 return 1;
}
