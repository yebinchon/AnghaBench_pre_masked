
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * field_data1; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int const*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const EC_GROUP *VAR_2, BIGNUM *VAR_3,
                             const BIGNUM *VAR_4, BN_CTX *VAR_5)
{
    if (VAR_2->field_data1 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    return FUNC_0(VAR_3, VAR_4, (BN_MONT_CTX *)VAR_2->field_data1, VAR_5);
}
