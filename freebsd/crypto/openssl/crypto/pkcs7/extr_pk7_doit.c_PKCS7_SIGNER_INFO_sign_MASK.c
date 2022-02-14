
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int enc_digest; scalar_t__ auth_attr; int pkey; TYPE_1__* digest_alg; } ;
struct TYPE_5__ {int algorithm; } ;
typedef TYPE_2__ PKCS7_SIGNER_INFO ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int ASN1_VALUE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,size_t) ;
 int FUNC_2 (int *,unsigned char**,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_4 (int *,int **,int const*,int *,int ) ;
 scalar_t__ FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int *,int,int ,int ,int,TYPE_2__*) ;
 int VAR_2 ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (unsigned char*) ;
 unsigned char* FUNC_11 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int ,int ) ;

int FUNC_13(PKCS7_SIGNER_INFO *VAR_6)
{
    EVP_MD_CTX *VAR_7;
    EVP_PKEY_CTX *VAR_8 = ((void*)0);
    unsigned char *VAR_9 = ((void*)0);
    int VAR_10;
    size_t VAR_11;
    const EVP_MD *VAR_12 = ((void*)0);

    VAR_12 = FUNC_9(VAR_6->digest_alg->algorithm);
    if (VAR_12 == ((void*)0))
        return 0;

    VAR_7 = FUNC_7();
    if (VAR_7 == ((void*)0)) {
        FUNC_12(VAR_4, VAR_0);
        goto err;
    }

    if (FUNC_4(VAR_7, &VAR_8, VAR_12, ((void*)0), VAR_6->pkey) <= 0)
        goto err;

    if (FUNC_8(VAR_8, -1, VAR_2,
                          VAR_1, 0, VAR_6) <= 0) {
        FUNC_12(VAR_4, VAR_5);
        goto err;
    }

    VAR_10 = FUNC_2((ASN1_VALUE *)VAR_6->auth_attr, &VAR_9,
                         FUNC_0(VAR_3));
    if (!VAR_9)
        goto err;
    if (FUNC_5(VAR_7, VAR_9, VAR_10) <= 0)
        goto err;
    FUNC_10(VAR_9);
    VAR_9 = ((void*)0);
    if (FUNC_3(VAR_7, ((void*)0), &VAR_11) <= 0)
        goto err;
    VAR_9 = FUNC_11(VAR_11);
    if (VAR_9 == ((void*)0))
        goto err;
    if (FUNC_3(VAR_7, VAR_9, &VAR_11) <= 0)
        goto err;

    if (FUNC_8(VAR_8, -1, VAR_2,
                          VAR_1, 1, VAR_6) <= 0) {
        FUNC_12(VAR_4, VAR_5);
        goto err;
    }

    FUNC_6(VAR_7);

    FUNC_1(VAR_6->enc_digest, VAR_9, VAR_11);

    return 1;

 err:
    FUNC_10(VAR_9);
    FUNC_6(VAR_7);
    return 0;

}
