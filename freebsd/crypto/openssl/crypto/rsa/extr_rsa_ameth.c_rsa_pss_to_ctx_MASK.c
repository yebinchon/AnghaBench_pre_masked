
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int RSA_PSS_PARAMS ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *,int **,int const*,int *,int *) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int *,int const**) ;
 scalar_t__ FUNC_3 (int *,int const*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,int ) ;
 int * FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int const**,int const**,int*) ;

__attribute__((used)) static int FUNC_11(EVP_MD_CTX *VAR_6, EVP_PKEY_CTX *VAR_7,
                          X509_ALGOR *VAR_8, EVP_PKEY *VAR_9)
{
    int VAR_10 = -1;
    int VAR_11;
    const EVP_MD *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    RSA_PSS_PARAMS *VAR_14;


    if (FUNC_6(VAR_8->algorithm) != VAR_0) {
        FUNC_8(VAR_1, VAR_5);
        return -1;
    }

    VAR_14 = FUNC_9(VAR_8);

    if (!FUNC_10(VAR_14, &VAR_13, &VAR_12, &VAR_11)) {
        FUNC_8(VAR_1, VAR_4);
        goto err;
    }


    if (VAR_9) {
        if (!FUNC_0(VAR_6, &VAR_7, VAR_13, ((void*)0), VAR_9))
            goto err;
    } else {
        const EVP_MD *VAR_15;
        if (FUNC_2(VAR_7, &VAR_15) <= 0)
            goto err;
        if (FUNC_1(VAR_13) != FUNC_1(VAR_15)) {
            FUNC_8(VAR_1, VAR_3);
            goto err;
        }
    }

    if (FUNC_4(VAR_7, VAR_2) <= 0)
        goto err;

    if (FUNC_5(VAR_7, VAR_11) <= 0)
        goto err;

    if (FUNC_3(VAR_7, VAR_12) <= 0)
        goto err;

    VAR_10 = 1;

 err:
    FUNC_7(VAR_14);
    return VAR_10;
}
