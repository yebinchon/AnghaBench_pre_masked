
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int task_list; } ;
typedef TYPE_1__ wait_queue_t ;
struct TYPE_8__ {int lock; } ;
typedef TYPE_2__ wait_queue_head_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(wait_queue_head_t *VAR_2, wait_queue_t *VAR_3)
{

 FUNC_4(&VAR_2->lock);
 FUNC_3(VAR_1, VAR_0);
 if (!FUNC_2(&VAR_3->task_list)) {
  FUNC_1(VAR_2, VAR_3);
  FUNC_0(&VAR_3->task_list);
 }
 FUNC_5(&VAR_2->lock);
}
