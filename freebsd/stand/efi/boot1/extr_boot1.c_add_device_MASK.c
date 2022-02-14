
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ dev_info_t ;



void
FUNC_0(dev_info_t **VAR_0, dev_info_t *VAR_1)
{
 dev_info_t *VAR_2;

 if (*VAR_0 == ((void*)0)) {
  *VAR_0 = VAR_1;
  return;
 }

 for (VAR_2 = *VAR_0; VAR_2->next != ((void*)0); VAR_2 = VAR_2->next)
  ;

 VAR_2->next = VAR_1;
}
