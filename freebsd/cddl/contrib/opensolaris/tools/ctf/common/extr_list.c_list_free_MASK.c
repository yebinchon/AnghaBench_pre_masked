
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* l_data; struct TYPE_4__* l_next; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(list_t *VAR_0, void (*VAR_1)(void *, void *), void *VAR_2)
{
 list_t *VAR_3;

 while (VAR_0) {
  VAR_3 = VAR_0;
  VAR_0 = VAR_0->l_next;
  if (VAR_3->l_data && VAR_1)
   VAR_1(VAR_3->l_data, VAR_2);
  FUNC_0(VAR_3);
 }
}
