
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* l_next; } ;
typedef TYPE_1__ list_t ;



void
FUNC_0(list_t **VAR_0, list_t *VAR_1)
{
 list_t *VAR_2, *VAR_3;

 for (VAR_2 = *VAR_0, VAR_3 = ((void*)0); VAR_2; VAR_3 = VAR_2, VAR_2 = VAR_2->l_next)
  continue;

 if (VAR_3 == ((void*)0))
  *VAR_0 = VAR_1;
 else
  VAR_3->l_next = VAR_1;
}
