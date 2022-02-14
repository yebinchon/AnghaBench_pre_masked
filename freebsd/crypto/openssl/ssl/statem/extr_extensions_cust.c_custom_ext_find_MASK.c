
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t meths_count; TYPE_2__* meths; } ;
typedef TYPE_1__ custom_ext_methods ;
struct TYPE_6__ {unsigned int ext_type; scalar_t__ role; } ;
typedef TYPE_2__ custom_ext_method ;
typedef scalar_t__ ENDPOINT ;


 scalar_t__ VAR_0 ;

custom_ext_method *FUNC_0(const custom_ext_methods *VAR_1,
                                   ENDPOINT VAR_2, unsigned int VAR_3,
                                   size_t *VAR_4)
{
    size_t VAR_5;
    custom_ext_method *VAR_6 = VAR_1->meths;

    for (VAR_5 = 0; VAR_5 < VAR_1->meths_count; VAR_5++, VAR_6++) {
        if (VAR_3 == VAR_6->ext_type
                && (VAR_2 == VAR_0 || VAR_2 == VAR_6->role
                    || VAR_6->role == VAR_0)) {
            if (VAR_4 != ((void*)0))
                *VAR_4 = VAR_5;
            return VAR_6;
        }
    }
    return ((void*)0);
}
