
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex_waiter {int task; } ;
struct rt_mutex {int wait_lock; } ;
struct hrtimer_sleeper {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt_mutex*,int ,struct hrtimer_sleeper*,struct rt_mutex_waiter*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct rt_mutex*) ;
 int FUNC_2 (struct rt_mutex*,struct rt_mutex_waiter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct rt_mutex *VAR_3,
          struct hrtimer_sleeper *VAR_4,
          struct rt_mutex_waiter *VAR_5,
          int VAR_6)
{
 int VAR_7;

 FUNC_5(&VAR_3->wait_lock);

 FUNC_4(VAR_0);

 VAR_7 = FUNC_0(VAR_3, VAR_0, VAR_4, VAR_5,
      VAR_6);

 FUNC_4(VAR_1);

 if (FUNC_7(VAR_5->task))
  FUNC_2(VAR_3, VAR_5);





 FUNC_1(VAR_3);

 FUNC_6(&VAR_3->wait_lock);






 if (FUNC_7(VAR_7))
  FUNC_3(VAR_2);

 return VAR_7;
}
