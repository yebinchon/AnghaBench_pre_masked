
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a_is_minus3; int b; int a; int field; } ;
typedef TYPE_1__ EC_GROUP ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(EC_GROUP *VAR_0, const EC_GROUP *VAR_1)
{
    if (!FUNC_0(VAR_0->field, VAR_1->field))
        return 0;
    if (!FUNC_0(VAR_0->a, VAR_1->a))
        return 0;
    if (!FUNC_0(VAR_0->b, VAR_1->b))
        return 0;

    VAR_0->a_is_minus3 = VAR_1->a_is_minus3;

    return 1;
}
