
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex_waiter {int list; struct mutex_waiter* magic; } ;
struct mutex {int wait_list; int wait_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mutex *VAR_0, struct mutex_waiter *VAR_1)
{
 FUNC_1(!FUNC_3(&VAR_0->wait_lock));
 FUNC_0(FUNC_2(&VAR_0->wait_list));
 FUNC_0(VAR_1->magic != VAR_1);
 FUNC_0(FUNC_2(&VAR_1->list));
}
