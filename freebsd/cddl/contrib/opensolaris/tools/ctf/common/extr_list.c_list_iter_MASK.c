
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* l_data; struct TYPE_3__* l_next; } ;
typedef TYPE_1__ list_t ;



int
FUNC_0(list_t *VAR_0, int (*VAR_1)(void *, void *), void *VAR_2)
{
 list_t *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 while (VAR_0) {
  VAR_3 = VAR_0->l_next;
  if ((VAR_5 = VAR_1(VAR_0->l_data, VAR_2)) < 0)
   return (VAR_5);
  VAR_4 += VAR_5;
  VAR_0 = VAR_3;
 }

 return (VAR_4);
}
