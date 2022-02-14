
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* l_data; struct TYPE_4__* l_next; } ;
typedef TYPE_1__ list_t ;



void
FUNC_0(list_t **VAR_0, list_t *VAR_1, int (*VAR_2)(void *, void *))
{
 list_t *VAR_3, *VAR_4;
 list_t *VAR_5 = ((void*)0);

 if (*VAR_0 == ((void*)0)) {
  *VAR_0 = VAR_1;
  return;
 }

 VAR_3 = *VAR_0;
 while (VAR_1 != ((void*)0)) {
  if (VAR_2(VAR_3->l_data, VAR_1->l_data) > 0) {
   VAR_4 = VAR_1->l_next;

   if (VAR_5 == ((void*)0)) {

    *VAR_0 = VAR_5 = VAR_1;
    VAR_1->l_next = VAR_3;
   } else {
    VAR_1->l_next = VAR_3;
    VAR_5->l_next = VAR_1;
    VAR_5 = VAR_1;
   }

   VAR_1 = VAR_4;
  } else {

   VAR_5 = VAR_3;
   VAR_3 = VAR_3->l_next;

   if (VAR_3 == ((void*)0)) {

    VAR_5->l_next = VAR_1;
    VAR_1 = ((void*)0);
   }
  }
 }
}
