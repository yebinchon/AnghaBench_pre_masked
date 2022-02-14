
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hashentry {int value; int key; struct hashentry* next; } ;
typedef TYPE_1__* heim_dict_t ;
typedef int (* heim_dict_iterator_f_t ) (int ,int ,void*) ;
struct TYPE_3__ {size_t size; struct hashentry** tab; } ;



void
FUNC_0(heim_dict_t VAR_0, heim_dict_iterator_f_t VAR_1, void *VAR_2)
{
    struct hashentry **VAR_3, *VAR_4;

    for (VAR_3 = VAR_0->tab; VAR_3 < &VAR_0->tab[VAR_0->size]; ++VAR_3)
 for (VAR_4 = *VAR_3; VAR_4; VAR_4 = VAR_4->next)
     VAR_1(VAR_4->key, VAR_4->value, VAR_2);
}
