
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hashentry {int key; struct hashentry* next; } ;
typedef int heim_object_t ;
typedef TYPE_1__* heim_dict_t ;
struct TYPE_3__ {unsigned long size; struct hashentry** tab; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static struct hashentry *
FUNC_2(heim_dict_t VAR_0, heim_object_t VAR_1)
{
    unsigned long VAR_2 = FUNC_1(VAR_1);
    struct hashentry *VAR_3;

    for (VAR_3 = VAR_0->tab[VAR_2 % VAR_0->size]; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
 if (FUNC_0(VAR_1, VAR_3->key) == 0)
     return VAR_3;

    return ((void*)0);
}
