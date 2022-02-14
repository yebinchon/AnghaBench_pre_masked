
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int task_list; } ;
typedef TYPE_1__ wait_queue_head_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool
FUNC_3(wait_queue_head_t *VAR_0)
{
 bool VAR_1;

 FUNC_1(&VAR_0->lock);
 VAR_1 = !FUNC_0(&VAR_0->task_list);
 FUNC_2(&VAR_0->lock);
 return (VAR_1);
}
