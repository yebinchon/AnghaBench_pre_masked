
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* heim_dict_t ;
struct TYPE_5__ {scalar_t__ size; int * tab; } ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int * FUNC_1 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_1__*) ;

heim_dict_t
FUNC_4(size_t VAR_1)
{
    heim_dict_t VAR_2;

    VAR_2 = FUNC_0(&VAR_0, sizeof(*VAR_2));

    VAR_2->size = FUNC_2(VAR_1);
    if (VAR_2->size == 0) {
 FUNC_3(VAR_2);
 return ((void*)0);
    }

    VAR_2->tab = FUNC_1(VAR_2->size, sizeof(VAR_2->tab[0]));
    if (VAR_2->tab == ((void*)0)) {
 VAR_2->size = 0;
 FUNC_3(VAR_2);
 return ((void*)0);
    }

    return VAR_2;
}
