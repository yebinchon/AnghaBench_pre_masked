
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* fn_data; struct TYPE_5__* fn_next; struct TYPE_5__* f_head; } ;
typedef TYPE_1__ fifonode_t ;
typedef TYPE_1__ fifo_t ;


 void FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;
 void FUNC_2 (void*) ;

void
FUNC_3(fifo_t *VAR_0, void (*VAR_1)(void *))
{
 fifonode_t *VAR_2 = VAR_0->f_head;
 fifonode_t *VAR_3;

 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_0;

 while (VAR_2) {
  (*VAR_1)(VAR_2->fn_data);

  VAR_3 = VAR_2;
  VAR_2 = VAR_2->fn_next;
  FUNC_1(VAR_3);
 }

 FUNC_1(VAR_0);
}
