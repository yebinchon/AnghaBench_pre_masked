
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* fn_next; void* fn_data; } ;
typedef TYPE_1__ fifonode_t ;
struct TYPE_6__ {TYPE_1__* f_tail; TYPE_1__* f_head; } ;
typedef TYPE_2__ fifo_t ;


 TYPE_1__* FUNC_0 (int) ;

void
FUNC_1(fifo_t *VAR_0, void *VAR_1)
{
 fifonode_t *VAR_2 = FUNC_0(sizeof (fifonode_t));

 VAR_2->fn_data = VAR_1;
 VAR_2->fn_next = ((void*)0);

 if (VAR_0->f_tail == ((void*)0))
  VAR_0->f_head = VAR_0->f_tail = VAR_2;
 else {
  VAR_0->f_tail->fn_next = VAR_2;
  VAR_0->f_tail = VAR_2;
 }
}
