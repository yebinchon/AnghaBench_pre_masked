
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct rt_mutex_waiter {int task; } ;
struct rt_mutex {int wait_lock; } ;


 int FUNC_0 (struct rt_mutex*) ;
 int FUNC_1 (struct rt_mutex_waiter*) ;
 int FUNC_2 (struct rt_mutex*) ;
 int FUNC_3 (struct rt_mutex*,struct task_struct*) ;
 int FUNC_4 (struct rt_mutex*) ;
 int FUNC_5 (struct rt_mutex*,struct task_struct*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct rt_mutex*,struct rt_mutex_waiter*,struct task_struct*,int) ;
 scalar_t__ FUNC_9 (struct rt_mutex*,struct task_struct*) ;

int FUNC_10(struct rt_mutex *VAR_0,
         struct rt_mutex_waiter *VAR_1,
         struct task_struct *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_6(&VAR_0->wait_lock);

 FUNC_2(VAR_0);

 if (!FUNC_4(VAR_0) || FUNC_9(VAR_0, VAR_2)) {

  FUNC_0(VAR_0);
  FUNC_5(VAR_0, VAR_2, 0);
  FUNC_7(&VAR_0->wait_lock);
  FUNC_3(VAR_0, VAR_2);
  return 1;
 }

 VAR_4 = FUNC_8(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4 && !VAR_1->task) {






  VAR_4 = 0;
 }
 FUNC_7(&VAR_0->wait_lock);

 FUNC_1(VAR_1);

 return VAR_4;
}
