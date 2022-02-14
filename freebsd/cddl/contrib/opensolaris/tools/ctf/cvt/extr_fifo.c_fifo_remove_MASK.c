
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* fn_next; void* fn_data; } ;
typedef TYPE_1__ fifonode_t ;
struct TYPE_6__ {int * f_tail; TYPE_1__* f_head; } ;
typedef TYPE_2__ fifo_t ;


 int FUNC_0 (TYPE_1__*) ;

void *
FUNC_1(fifo_t *VAR_0)
{
 fifonode_t *VAR_1;
 void *VAR_2;

 if ((VAR_1 = VAR_0->f_head) == ((void*)0))
  return (((void*)0));

 VAR_2 = VAR_1->fn_data;
 if ((VAR_0->f_head = VAR_1->fn_next) == ((void*)0))
  VAR_0->f_tail = ((void*)0);

 FUNC_0(VAR_1);

 return (VAR_2);
}
