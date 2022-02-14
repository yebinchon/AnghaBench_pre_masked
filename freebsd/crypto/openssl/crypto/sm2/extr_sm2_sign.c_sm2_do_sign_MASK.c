
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int EVP_MD ;
typedef int EC_KEY ;
typedef int ECDSA_SIG ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,int const*,int const*,size_t const,int const*,size_t) ;
 int * FUNC_2 (int const*,int *) ;

ECDSA_SIG *FUNC_3(const EC_KEY *VAR_0,
                       const EVP_MD *VAR_1,
                       const uint8_t *VAR_2,
                       const size_t VAR_3,
                       const uint8_t *VAR_4, size_t VAR_5)
{
    BIGNUM *VAR_6 = ((void*)0);
    ECDSA_SIG *VAR_7 = ((void*)0);

    VAR_6 = FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_6 == ((void*)0)) {

        goto done;
    }

    VAR_7 = FUNC_2(VAR_0, VAR_6);

 done:
    FUNC_0(VAR_6);
    return VAR_7;
}
