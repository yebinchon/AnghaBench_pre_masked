
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int signature; int pkey; int * pctx; int digestAlgorithm; } ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;
typedef TYPE_1__ CMS_SignerInfo ;
typedef int CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int ,unsigned char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,unsigned char*,unsigned int*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,unsigned char*,size_t*,unsigned char*,unsigned int) ;
 size_t FUNC_10 (int ) ;
 int FUNC_11 (int *,unsigned char*,unsigned int*,int ) ;
 int VAR_5 ;
 int FUNC_12 (unsigned char*) ;
 unsigned char* FUNC_13 (size_t) ;
 int VAR_6 ;
 int FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_17(CMS_ContentInfo *VAR_7,
                                       CMS_SignerInfo *VAR_8, BIO *VAR_9)
{
    EVP_MD_CTX *VAR_10 = FUNC_7();
    int VAR_11 = 0;
    EVP_PKEY_CTX *VAR_12 = ((void*)0);

    if (VAR_10 == ((void*)0)) {
        FUNC_4(VAR_0, VAR_3);
        return 0;
    }

    if (!VAR_8->pkey) {
        FUNC_4(VAR_0, VAR_1);
        goto err;
    }

    if (!FUNC_14(VAR_10, VAR_9, VAR_8->digestAlgorithm))
        goto err;

    if (VAR_8->pctx && !FUNC_15(VAR_8, 0))
        goto err;





    if (FUNC_3(VAR_8) >= 0) {
        unsigned char VAR_13[VAR_4];
        unsigned int VAR_14;
        if (!FUNC_5(VAR_10, VAR_13, &VAR_14))
            goto err;
        if (!FUNC_2(VAR_8, VAR_5,
                                         VAR_6, VAR_13, VAR_14))
            goto err;

        if (!FUNC_16(VAR_7, VAR_8))
            goto err;

        if (!FUNC_1(VAR_8))
            goto err;
    } else if (VAR_8->pctx) {
        unsigned char *VAR_15;
        size_t VAR_16;
        unsigned char VAR_17[VAR_4];
        unsigned int VAR_18;
        VAR_12 = VAR_8->pctx;
        if (!FUNC_5(VAR_10, VAR_17, &VAR_18))
            goto err;
        VAR_16 = FUNC_10(VAR_8->pkey);
        VAR_15 = FUNC_13(VAR_16);
        if (VAR_15 == ((void*)0)) {
            FUNC_4(VAR_0, VAR_3);
            goto err;
        }
        if (FUNC_9(VAR_12, VAR_15, &VAR_16, VAR_17, VAR_18) <= 0) {
            FUNC_12(VAR_15);
            goto err;
        }
        FUNC_0(VAR_8->signature, VAR_15, VAR_16);
    } else {
        unsigned char *VAR_19;
        unsigned int VAR_20;
        VAR_19 = FUNC_13(FUNC_10(VAR_8->pkey));
        if (VAR_19 == ((void*)0)) {
            FUNC_4(VAR_0, VAR_3);
            goto err;
        }
        if (!FUNC_11(VAR_10, VAR_19, &VAR_20, VAR_8->pkey)) {
            FUNC_4(VAR_0, VAR_2);
            FUNC_12(VAR_19);
            goto err;
        }
        FUNC_0(VAR_8->signature, VAR_19, VAR_20);
    }

    VAR_11 = 1;

 err:
    FUNC_6(VAR_10);
    FUNC_8(VAR_12);
    return VAR_11;

}
