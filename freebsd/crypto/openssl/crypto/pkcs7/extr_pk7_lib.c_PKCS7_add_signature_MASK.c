
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int PKCS7_SIGNER_INFO ;
typedef int PKCS7 ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;


 scalar_t__ FUNC_0 (int *,int*) ;
 int * FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int *,int const*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ) ;

PKCS7_SIGNER_INFO *FUNC_7(PKCS7 *VAR_2, X509 *VAR_3, EVP_PKEY *VAR_4,
                                       const EVP_MD *VAR_5)
{
    PKCS7_SIGNER_INFO *VAR_6 = ((void*)0);

    if (VAR_5 == ((void*)0)) {
        int VAR_7;
        if (FUNC_0(VAR_4, &VAR_7) <= 0)
            goto err;
        VAR_5 = FUNC_1(VAR_7);
        if (VAR_5 == ((void*)0)) {
            FUNC_6(VAR_0, VAR_1);
            goto err;
        }
    }

    if ((VAR_6 = FUNC_3()) == ((void*)0))
        goto err;
    if (!FUNC_4(VAR_6, VAR_3, VAR_4, VAR_5))
        goto err;
    if (!FUNC_5(VAR_2, VAR_6))
        goto err;
    return VAR_6;
 err:
    FUNC_2(VAR_6);
    return ((void*)0);
}
