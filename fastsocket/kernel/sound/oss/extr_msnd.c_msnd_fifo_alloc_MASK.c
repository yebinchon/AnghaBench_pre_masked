
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t n; int data; scalar_t__ len; scalar_t__ head; scalar_t__ tail; } ;
typedef TYPE_1__ msnd_fifo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t) ;

int FUNC_2(msnd_fifo *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_1);
 VAR_1->data = FUNC_1(VAR_2);
 VAR_1->n = VAR_2;
 VAR_1->tail = 0;
 VAR_1->head = 0;
 VAR_1->len = 0;

 if (!VAR_1->data)
  return -VAR_0;

 return 0;
}
