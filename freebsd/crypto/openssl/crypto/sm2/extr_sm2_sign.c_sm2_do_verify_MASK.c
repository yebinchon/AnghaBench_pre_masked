
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
 int FUNC_2 (int const*,int const*,int *) ;

int FUNC_3(const EC_KEY *VAR_0,
                  const EVP_MD *VAR_1,
                  const ECDSA_SIG *VAR_2,
                  const uint8_t *VAR_3,
                  const size_t VAR_4,
                  const uint8_t *VAR_5, size_t VAR_6)
{
    BIGNUM *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    VAR_7 = FUNC_1(VAR_1, VAR_0, VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_7 == ((void*)0)) {

        goto done;
    }

    VAR_8 = FUNC_2(VAR_0, VAR_2, VAR_7);

 done:
    FUNC_0(VAR_7);
    return VAR_8;
}
