
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int field; } ;
struct TYPE_7__ {int Y; } ;
typedef TYPE_1__ EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,TYPE_1__*) ;

int FUNC_3(const EC_GROUP *VAR_0, EC_POINT *VAR_1, BN_CTX *VAR_2)
{
    if (FUNC_2(VAR_0, VAR_1) || FUNC_0(VAR_1->Y))

        return 1;

    return FUNC_1(VAR_1->Y, VAR_0->field, VAR_1->Y);
}
