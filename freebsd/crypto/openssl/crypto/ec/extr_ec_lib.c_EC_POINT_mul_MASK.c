
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,int *,int const*,int,int const**,int const**,int *) ;

int FUNC_1(const EC_GROUP *VAR_0, EC_POINT *VAR_1, const BIGNUM *VAR_2,
                 const EC_POINT *VAR_3, const BIGNUM *VAR_4, BN_CTX *VAR_5)
{


    const EC_POINT *VAR_6[1];
    const BIGNUM *VAR_7[1];

    VAR_6[0] = VAR_3;
    VAR_7[0] = VAR_4;

    return FUNC_0(VAR_0, VAR_1, VAR_2,
                         (VAR_3 != ((void*)0)
                          && VAR_4 != ((void*)0)), VAR_6, VAR_7, VAR_5);
}
