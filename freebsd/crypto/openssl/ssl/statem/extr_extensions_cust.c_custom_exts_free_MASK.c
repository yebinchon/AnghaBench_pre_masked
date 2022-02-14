
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t meths_count; TYPE_2__* meths; } ;
typedef TYPE_1__ custom_ext_methods ;
struct TYPE_6__ {scalar_t__ add_cb; struct TYPE_6__* parse_arg; struct TYPE_6__* add_arg; } ;
typedef TYPE_2__ custom_ext_method ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

void FUNC_1(custom_ext_methods *VAR_1)
{
    size_t VAR_2;
    custom_ext_method *VAR_3;

    for (VAR_2 = 0, VAR_3 = VAR_1->meths; VAR_2 < VAR_1->meths_count; VAR_2++, VAR_3++) {
        if (VAR_3->add_cb != VAR_0)
            continue;


        FUNC_0(VAR_3->add_arg);
        FUNC_0(VAR_3->parse_arg);
    }
    FUNC_0(VAR_1->meths);
}
