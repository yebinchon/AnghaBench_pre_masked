
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int signature; scalar_t__ signedAttrs; int * pctx; int pkey; TYPE_1__* digestAlgorithm; int * mctx; } ;
struct TYPE_8__ {int algorithm; } ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef TYPE_2__ CMS_SignerInfo ;
typedef int ASN1_VALUE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,size_t) ;
 int FUNC_2 (int *,unsigned char**,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_7 (int *,int **,int const*,int *,int ) ;
 scalar_t__ FUNC_8 (int *,unsigned char*,int) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (int *,int,int ,int ,int,TYPE_2__*) ;
 int VAR_4 ;
 int * FUNC_11 (int ) ;
 int VAR_5 ;
 int FUNC_12 (unsigned char*) ;
 unsigned char* FUNC_13 (size_t) ;
 int FUNC_14 (TYPE_2__*,int *) ;

int FUNC_15(CMS_SignerInfo *VAR_6)
{
    EVP_MD_CTX *VAR_7 = VAR_6->mctx;
    EVP_PKEY_CTX *VAR_8 = ((void*)0);
    unsigned char *VAR_9 = ((void*)0);
    int VAR_10;
    size_t VAR_11;
    const EVP_MD *VAR_12 = ((void*)0);

    VAR_12 = FUNC_11(VAR_6->digestAlgorithm->algorithm);
    if (VAR_12 == ((void*)0))
        return 0;

    if (FUNC_4(VAR_6, VAR_5, -1) < 0) {
        if (!FUNC_14(VAR_6, ((void*)0)))
            goto err;
    }

    if (!FUNC_3(VAR_6))
        goto err;

    if (VAR_6->pctx)
        VAR_8 = VAR_6->pctx;
    else {
        FUNC_9(VAR_7);
        if (FUNC_7(VAR_7, &VAR_8, VAR_12, ((void*)0), VAR_6->pkey) <= 0)
            goto err;
        VAR_6->pctx = VAR_8;
    }

    if (FUNC_10(VAR_8, -1, VAR_4,
                          VAR_3, 0, VAR_6) <= 0) {
        FUNC_5(VAR_1, VAR_2);
        goto err;
    }

    VAR_10 = FUNC_2((ASN1_VALUE *)VAR_6->signedAttrs, &VAR_9,
                         FUNC_0(VAR_0));
    if (!VAR_9)
        goto err;
    if (FUNC_8(VAR_7, VAR_9, VAR_10) <= 0)
        goto err;
    if (FUNC_6(VAR_7, ((void*)0), &VAR_11) <= 0)
        goto err;
    FUNC_12(VAR_9);
    VAR_9 = FUNC_13(VAR_11);
    if (VAR_9 == ((void*)0))
        goto err;
    if (FUNC_6(VAR_7, VAR_9, &VAR_11) <= 0)
        goto err;

    if (FUNC_10(VAR_8, -1, VAR_4,
                          VAR_3, 1, VAR_6) <= 0) {
        FUNC_5(VAR_1, VAR_2);
        goto err;
    }

    FUNC_9(VAR_7);

    FUNC_1(VAR_6->signature, VAR_9, VAR_11);

    return 1;

 err:
    FUNC_12(VAR_9);
    FUNC_9(VAR_7);
    return 0;
}
