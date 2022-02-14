
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * (* create ) (TYPE_1__*) ;} ;
typedef TYPE_1__ CONF_METHOD ;
typedef int CONF ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 () ;
 int * FUNC_2 (TYPE_1__*) ;

CONF *FUNC_3(CONF_METHOD *VAR_2)
{
    CONF *VAR_3;

    if (VAR_2 == ((void*)0))
        VAR_2 = FUNC_1();

    VAR_3 = VAR_2->create(VAR_2);
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }

    return VAR_3;
}
