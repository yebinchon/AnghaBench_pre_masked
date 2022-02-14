
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ head; scalar_t__ tail; scalar_t__ len; } ;
typedef TYPE_1__ msnd_fifo ;



void FUNC_0(msnd_fifo *VAR_0)
{
 VAR_0->len = VAR_0->tail = VAR_0->head = 0;
}
