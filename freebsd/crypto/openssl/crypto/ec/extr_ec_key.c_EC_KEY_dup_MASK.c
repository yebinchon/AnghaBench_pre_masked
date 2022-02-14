
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int engine; } ;
typedef TYPE_1__ EC_KEY ;


 int * FUNC_0 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;

EC_KEY *FUNC_3(const EC_KEY *VAR_0)
{
    EC_KEY *VAR_1 = FUNC_2(VAR_0->engine);

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    if (FUNC_0(VAR_1, VAR_0) == ((void*)0)) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
