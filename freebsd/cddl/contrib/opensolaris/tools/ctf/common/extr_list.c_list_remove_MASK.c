
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* l_data; struct TYPE_4__* l_next; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,void*,void*) ;

void *
FUNC_2(list_t **VAR_0, void *VAR_1, int (*VAR_2)(void *, void *, void *),
    void *VAR_3)
{
 list_t *VAR_4, **VAR_5;
 void *VAR_6;

 if (!VAR_2)
  VAR_2 = FUNC_1;

 for (VAR_4 = *VAR_0, VAR_5 = VAR_0; VAR_4; VAR_5 = &VAR_4->l_next, VAR_4 = VAR_4->l_next) {
  if (VAR_2(VAR_4->l_data, VAR_1, VAR_3) == 0) {
   *VAR_5 = VAR_4->l_next;
   VAR_6 = VAR_4->l_data;
   FUNC_0(VAR_4);
   return (VAR_6);
  }
 }

 return (((void*)0));
}
