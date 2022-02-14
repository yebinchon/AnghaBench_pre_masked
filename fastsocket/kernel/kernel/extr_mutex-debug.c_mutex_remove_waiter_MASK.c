
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {TYPE_1__* task; } ;
struct mutex_waiter {TYPE_1__* task; int list; } ;
struct mutex {int dummy; } ;
struct TYPE_2__ {struct mutex_waiter* blocked_on; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mutex *VAR_0, struct mutex_waiter *VAR_1,
    struct thread_info *VAR_2)
{
 FUNC_0(FUNC_2(&VAR_1->list));
 FUNC_0(VAR_1->task != VAR_2->task);
 FUNC_0(VAR_2->task->blocked_on != VAR_1);
 VAR_2->task->blocked_on = ((void*)0);

 FUNC_1(&VAR_1->list);
 VAR_1->task = ((void*)0);
}
