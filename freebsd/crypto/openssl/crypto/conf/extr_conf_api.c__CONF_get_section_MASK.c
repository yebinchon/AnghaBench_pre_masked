
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
struct TYPE_7__ {char* section; int * name; } ;
typedef TYPE_1__ CONF_VALUE ;
typedef TYPE_2__ CONF ;


 TYPE_1__* FUNC_0 (int ,TYPE_1__*) ;

CONF_VALUE *FUNC_1(const CONF *VAR_0, const char *VAR_1)
{
    CONF_VALUE *VAR_2, VAR_3;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)))
        return ((void*)0);
    VAR_3.name = ((void*)0);
    VAR_3.section = (char *)VAR_1;
    VAR_2 = FUNC_0(VAR_0->data, &VAR_3);
    return VAR_2;
}
