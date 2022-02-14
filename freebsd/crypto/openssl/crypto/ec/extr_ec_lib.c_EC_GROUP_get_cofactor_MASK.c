
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cofactor; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(const EC_GROUP *VAR_0, BIGNUM *VAR_1,
                          BN_CTX *VAR_2)
{

    if (VAR_0->cofactor == ((void*)0))
        return 0;
    if (!FUNC_0(VAR_1, VAR_0->cofactor))
        return 0;

    return !FUNC_1(VAR_0->cofactor);
}
