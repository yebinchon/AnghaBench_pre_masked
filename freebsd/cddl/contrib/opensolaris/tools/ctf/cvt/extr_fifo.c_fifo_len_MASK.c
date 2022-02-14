
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* fn_next; } ;
typedef TYPE_1__ fifonode_t ;
struct TYPE_5__ {TYPE_1__* f_head; } ;
typedef TYPE_2__ fifo_t ;



int
FUNC_0(fifo_t *VAR_0)
{
 fifonode_t *VAR_1;
 int VAR_2;

 for (VAR_2 = 0, VAR_1 = VAR_0->f_head; VAR_1; VAR_1 = VAR_1->fn_next, VAR_2++);

 return (VAR_2);
}
