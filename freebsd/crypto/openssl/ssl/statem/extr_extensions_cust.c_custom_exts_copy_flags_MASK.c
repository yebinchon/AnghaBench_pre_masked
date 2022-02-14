
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t meths_count; TYPE_2__* meths; } ;
typedef TYPE_1__ custom_ext_methods ;
struct TYPE_8__ {int ext_flags; int ext_type; int role; } ;
typedef TYPE_2__ custom_ext_method ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ,int ,int *) ;

int FUNC_1(custom_ext_methods *VAR_0,
                           const custom_ext_methods *VAR_1)
{
    size_t VAR_2;
    custom_ext_method *VAR_3 = VAR_1->meths;

    for (VAR_2 = 0; VAR_2 < VAR_1->meths_count; VAR_2++, VAR_3++) {
        custom_ext_method *VAR_4 = FUNC_0(VAR_0, VAR_3->role,
                                                     VAR_3->ext_type, ((void*)0));

        if (VAR_4 == ((void*)0))
            continue;

        VAR_4->ext_flags = VAR_3->ext_flags;
    }

    return 1;
}
