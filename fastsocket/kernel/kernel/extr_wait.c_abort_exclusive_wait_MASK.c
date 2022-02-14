
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,unsigned int,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

void FUNC_7(wait_queue_head_t *VAR_1, wait_queue_t *VAR_2,
   unsigned int VAR_3, void *VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(VAR_0);
 FUNC_4(&VAR_1->lock, VAR_5);
 if (!FUNC_3(&VAR_2->task_list))
  FUNC_2(&VAR_2->task_list);
 else if (FUNC_6(VAR_1))
  FUNC_1(VAR_1, VAR_3, VAR_4);
 FUNC_5(&VAR_1->lock, VAR_5);
}
