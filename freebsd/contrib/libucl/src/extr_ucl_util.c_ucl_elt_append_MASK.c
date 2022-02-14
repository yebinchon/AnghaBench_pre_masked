
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ ucl_object_t ;



ucl_object_t *
FUNC_0 (ucl_object_t *VAR_0, ucl_object_t *VAR_1)
{

 if (VAR_0 == ((void*)0)) {
  VAR_1->next = ((void*)0);
  VAR_1->prev = VAR_1;
  VAR_0 = VAR_1;
 }
 else {
  VAR_1->prev = VAR_0->prev;
  VAR_0->prev->next = VAR_1;
  VAR_0->prev = VAR_1;
  VAR_1->next = ((void*)0);
 }

 return VAR_0;
}
