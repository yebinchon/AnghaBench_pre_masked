
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* fn_data; struct TYPE_4__* fn_next; } ;
typedef TYPE_1__ fifonode_t ;
struct TYPE_5__ {TYPE_1__* f_head; } ;
typedef TYPE_2__ fifo_t ;



int
FUNC_0(fifo_t *VAR_0, int (*VAR_1)(void *VAR_2, void *VAR_3), void *VAR_4)
{
 fifonode_t *VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 for (VAR_5 = VAR_0->f_head; VAR_5; VAR_5 = VAR_5->fn_next) {
  if ((VAR_6 = VAR_1(VAR_5->fn_data, VAR_4)) < 0)
   return (-1);
  VAR_7 += VAR_6;
 }

 return (VAR_7);
}
