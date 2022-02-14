
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int task_list; int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct lock_class_key {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lock_class_key*) ;
 int FUNC_2 (int *) ;

void FUNC_3(wait_queue_head_t *VAR_0, struct lock_class_key *VAR_1)
{
 FUNC_2(&VAR_0->lock);
 FUNC_1(&VAR_0->lock, VAR_1);
 FUNC_0(&VAR_0->task_list);
}
