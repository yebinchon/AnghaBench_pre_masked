
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int const*,int *,int const*,int const*,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

int FUNC_3(const EC_GROUP *VAR_2,
                                               EC_POINT *VAR_3,
                                               const BIGNUM *VAR_4,
                                               const BIGNUM *VAR_5, BN_CTX *VAR_6)
{
    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {



        FUNC_2(VAR_0,
              VAR_1);
        return 0;
    }

    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
                                                    FUNC_0(), VAR_6);
}
