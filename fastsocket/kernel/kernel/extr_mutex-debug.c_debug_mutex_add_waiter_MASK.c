
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {TYPE_1__* task; } ;
struct mutex_waiter {int dummy; } ;
struct mutex {int wait_lock; } ;
struct TYPE_2__ {struct mutex_waiter* blocked_on; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mutex *VAR_0, struct mutex_waiter *VAR_1,
       struct thread_info *VAR_2)
{
 FUNC_0(!FUNC_1(&VAR_0->wait_lock));


 VAR_2->task->blocked_on = VAR_1;
}
