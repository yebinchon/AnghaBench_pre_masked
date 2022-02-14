
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int point_conversion_form_t ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int * FUNC_0 (unsigned char*,size_t,int *) ;
 size_t FUNC_1 (int const*,int const*,int ,unsigned char**,int *) ;
 int FUNC_2 (unsigned char*) ;

BIGNUM *FUNC_3(const EC_GROUP *VAR_0,
                          const EC_POINT *VAR_1,
                          point_conversion_form_t VAR_2,
                          BIGNUM *VAR_3, BN_CTX *VAR_4)
{
    size_t VAR_5 = 0;
    unsigned char *VAR_6;

    VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_6, VAR_4);

    if (VAR_5 == 0)
        return ((void*)0);

    VAR_3 = FUNC_0(VAR_6, VAR_5, VAR_3);

    FUNC_2(VAR_6);

    return VAR_3;
}
