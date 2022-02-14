
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int task_list; int func; int private; } ;
typedef TYPE_1__ wait_queue_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2(wait_queue_t *VAR_2, int VAR_3)
{

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->flags = VAR_3;
 VAR_2->private = VAR_1;
 VAR_2->func = VAR_0;
 FUNC_0(&VAR_2->task_list);
}
