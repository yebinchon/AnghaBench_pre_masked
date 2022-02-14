
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* l_next; void* l_data; } ;
typedef TYPE_1__ list_t ;


 TYPE_1__* FUNC_0 (int) ;

void
FUNC_1(list_t **VAR_0, void *VAR_1)
{
 list_t *VAR_2;

 VAR_2 = FUNC_0(sizeof (list_t));
 VAR_2->l_data = VAR_1;
 VAR_2->l_next = *VAR_0;
 *VAR_0 = VAR_2;
}
