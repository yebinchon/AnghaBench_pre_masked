
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hashentry {TYPE_1__** prev; TYPE_1__* next; int value; int key; } ;
typedef int heim_object_t ;
typedef int heim_dict_t ;
struct TYPE_2__ {struct TYPE_2__** prev; } ;


 struct hashentry* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hashentry*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(heim_dict_t VAR_0, heim_object_t VAR_1)
{
    struct hashentry *VAR_2 = FUNC_0(VAR_0, VAR_1);

    if (VAR_2 == ((void*)0))
 return;

    FUNC_2(VAR_2->key);
    FUNC_2(VAR_2->value);

    if ((*(VAR_2->prev) = VAR_2->next) != ((void*)0))
 VAR_2->next->prev = VAR_2->prev;

    FUNC_1(VAR_2);
}
