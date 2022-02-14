
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int algorithm; } ;
typedef TYPE_5__ X509_ALGOR ;
struct TYPE_16__ {TYPE_2__* envelopedData; } ;
struct TYPE_22__ {TYPE_3__ d; } ;
struct TYPE_21__ {unsigned char* key; size_t keylen; TYPE_5__* contentEncryptionAlgorithm; int debug; scalar_t__ havenocert; } ;
struct TYPE_20__ {int * pctx; TYPE_4__* encryptedKey; int * pkey; } ;
struct TYPE_14__ {TYPE_7__* ktri; } ;
struct TYPE_19__ {TYPE_1__ d; } ;
struct TYPE_17__ {int length; int data; } ;
struct TYPE_15__ {TYPE_8__* encryptedContentInfo; } ;
typedef int EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef TYPE_6__ CMS_RecipientInfo ;
typedef TYPE_7__ CMS_KeyTransRecipientInfo ;
typedef TYPE_8__ CMS_EncryptedContentInfo ;
typedef TYPE_9__ CMS_ContentInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 size_t FUNC_1 (int const*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int,int ,int ,int ,TYPE_6__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int *,unsigned char*,size_t*,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (unsigned char*,size_t) ;
 int FUNC_9 (unsigned char*) ;
 unsigned char* FUNC_10 (size_t) ;
 int FUNC_11 (TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_12(CMS_ContentInfo *VAR_8,
                                          CMS_RecipientInfo *VAR_9)
{
    CMS_KeyTransRecipientInfo *VAR_10 = VAR_9->d.ktri;
    EVP_PKEY *VAR_11 = VAR_10->pkey;
    unsigned char *VAR_12 = ((void*)0);
    size_t VAR_13;
    int VAR_14 = 0;
    size_t VAR_15 = 0;
    CMS_EncryptedContentInfo *VAR_16;
    VAR_16 = VAR_8->d.envelopedData->encryptedContentInfo;

    if (VAR_10->pkey == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }

    if (VAR_8->d.envelopedData->encryptedContentInfo->havenocert
            && !VAR_8->d.envelopedData->encryptedContentInfo->debug) {
        X509_ALGOR *VAR_17 = VAR_16->contentEncryptionAlgorithm;
        const EVP_CIPHER *VAR_18 = FUNC_7(VAR_17->algorithm);

        if (VAR_18 == ((void*)0)) {
            FUNC_0(VAR_0, VAR_4);
            return 0;
        }

        VAR_15 = FUNC_1(VAR_18);
    }

    VAR_10->pctx = FUNC_4(VAR_11, ((void*)0));
    if (VAR_10->pctx == ((void*)0))
        return 0;

    if (FUNC_6(VAR_10->pctx) <= 0)
        goto err;

    if (!FUNC_11(VAR_9, 1))
        goto err;

    if (FUNC_2(VAR_10->pctx, -1, VAR_7,
                          VAR_6, 0, VAR_9) <= 0) {
        FUNC_0(VAR_0, VAR_2);
        goto err;
    }

    if (FUNC_5(VAR_10->pctx, ((void*)0), &VAR_13,
                         VAR_10->encryptedKey->data,
                         VAR_10->encryptedKey->length) <= 0)
        goto err;

    VAR_12 = FUNC_10(VAR_13);

    if (VAR_12 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_5);
        goto err;
    }

    if (FUNC_5(VAR_10->pctx, VAR_12, &VAR_13,
                         VAR_10->encryptedKey->data,
                         VAR_10->encryptedKey->length) <= 0
            || VAR_13 == 0
            || (VAR_15 != 0 && VAR_13 != VAR_15)) {
        FUNC_0(VAR_0, VAR_1);
        goto err;
    }

    VAR_14 = 1;

    FUNC_8(VAR_16->key, VAR_16->keylen);
    VAR_16->key = VAR_12;
    VAR_16->keylen = VAR_13;

 err:
    FUNC_3(VAR_10->pctx);
    VAR_10->pctx = ((void*)0);
    if (!VAR_14)
        FUNC_9(VAR_12);

    return VAR_14;
}
