
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* l_data; struct TYPE_3__* l_next; } ;
typedef TYPE_1__ list_t ;



void *
FUNC_0(list_t *VAR_0, void *VAR_1, int (*VAR_2)(void *, void *))
{
 for (; VAR_0; VAR_0 = VAR_0->l_next) {
  if (VAR_2(VAR_0->l_data, VAR_1) == 0)
   return (VAR_0->l_data);
 }

 return (((void*)0));
}
