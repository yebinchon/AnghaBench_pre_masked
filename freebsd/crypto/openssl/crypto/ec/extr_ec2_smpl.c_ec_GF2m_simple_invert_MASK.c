
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Y; int X; } ;
typedef TYPE_1__ EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const*,TYPE_1__*) ;
 int FUNC_3 (int const*,TYPE_1__*,int *) ;

int FUNC_4(const EC_GROUP *VAR_0, EC_POINT *VAR_1, BN_CTX *VAR_2)
{
    if (FUNC_2(VAR_0, VAR_1) || FUNC_1(VAR_1->Y))

        return 1;

    if (!FUNC_3(VAR_0, VAR_1, VAR_2))
        return 0;
    return FUNC_0(VAR_1->Y, VAR_1->X, VAR_1->Y);
}
