
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hashentry {struct hashentry* next; struct hashentry** prev; void* value; void* key; } ;
typedef int heim_object_t ;
typedef TYPE_1__* heim_dict_t ;
struct TYPE_4__ {unsigned long size; struct hashentry** tab; } ;


 int VAR_0 ;
 struct hashentry* FUNC_0 (TYPE_1__*,int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;
 struct hashentry* FUNC_4 (int) ;

int
FUNC_5(heim_dict_t VAR_1, heim_object_t VAR_2, heim_object_t VAR_3)
{
    struct hashentry **VAR_4, *VAR_5;

    VAR_5 = FUNC_0(VAR_1, VAR_2);
    if (VAR_5) {
 FUNC_2(VAR_5->value);
 VAR_5->value = FUNC_3(VAR_3);
    } else {
 unsigned long VAR_6;

 VAR_5 = FUNC_4(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
     return VAR_0;

 VAR_5->key = FUNC_3(VAR_2);
 VAR_5->value = FUNC_3(VAR_3);

 VAR_6 = FUNC_1(VAR_2);

 VAR_4 = &VAR_1->tab[VAR_6 % VAR_1->size];
 VAR_5->next = *VAR_4;
 *VAR_4 = VAR_5;
 VAR_5->prev = VAR_4;
 if (VAR_5->next)
     VAR_5->next->prev = &VAR_5->next;
    }

    return 0;
}
