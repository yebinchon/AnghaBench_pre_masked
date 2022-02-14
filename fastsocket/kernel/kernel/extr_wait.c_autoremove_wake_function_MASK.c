
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int task_list; } ;
typedef TYPE_1__ wait_queue_t ;


 int FUNC_0 (TYPE_1__*,unsigned int,int,void*) ;
 int FUNC_1 (int *) ;

int FUNC_2(wait_queue_t *VAR_0, unsigned VAR_1, int VAR_2, void *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_4)
  FUNC_1(&VAR_0->task_list);
 return VAR_4;
}
