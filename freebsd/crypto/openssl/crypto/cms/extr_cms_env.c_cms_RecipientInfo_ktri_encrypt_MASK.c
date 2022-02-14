
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* envelopedData; } ;
struct TYPE_18__ {TYPE_3__ d; } ;
struct TYPE_17__ {int keylen; int key; } ;
struct TYPE_16__ {int * pctx; int encryptedKey; int pkey; } ;
struct TYPE_12__ {TYPE_5__* ktri; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_1__ d; } ;
struct TYPE_13__ {TYPE_6__* encryptedContentInfo; } ;
typedef int EVP_PKEY_CTX ;
typedef TYPE_4__ CMS_RecipientInfo ;
typedef TYPE_5__ CMS_KeyTransRecipientInfo ;
typedef TYPE_6__ CMS_EncryptedContentInfo ;
typedef TYPE_7__ CMS_ContentInfo ;


 int FUNC_0 (int ,unsigned char*,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int,int ,int ,int ,TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int *,unsigned char*,size_t*,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 (size_t) ;
 int FUNC_9 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_10(CMS_ContentInfo *VAR_7,
                                          CMS_RecipientInfo *VAR_8)
{
    CMS_KeyTransRecipientInfo *VAR_9;
    CMS_EncryptedContentInfo *VAR_10;
    EVP_PKEY_CTX *VAR_11;
    unsigned char *VAR_12 = ((void*)0);
    size_t VAR_13;

    int VAR_14 = 0;

    if (VAR_8->type != VAR_1) {
        FUNC_1(VAR_0, VAR_3);
        return 0;
    }
    VAR_9 = VAR_8->d.ktri;
    VAR_10 = VAR_7->d.envelopedData->encryptedContentInfo;

    VAR_11 = VAR_9->pctx;

    if (VAR_11) {
        if (!FUNC_9(VAR_8, 0))
            goto err;
    } else {
        VAR_11 = FUNC_4(VAR_9->pkey, ((void*)0));
        if (VAR_11 == ((void*)0))
            return 0;

        if (FUNC_6(VAR_11) <= 0)
            goto err;
    }

    if (FUNC_2(VAR_11, -1, VAR_6,
                          VAR_5, 0, VAR_8) <= 0) {
        FUNC_1(VAR_0, VAR_2);
        goto err;
    }

    if (FUNC_5(VAR_11, ((void*)0), &VAR_13, VAR_10->key, VAR_10->keylen) <= 0)
        goto err;

    VAR_12 = FUNC_8(VAR_13);

    if (VAR_12 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_4);
        goto err;
    }

    if (FUNC_5(VAR_11, VAR_12, &VAR_13, VAR_10->key, VAR_10->keylen) <= 0)
        goto err;

    FUNC_0(VAR_9->encryptedKey, VAR_12, VAR_13);
    VAR_12 = ((void*)0);

    VAR_14 = 1;

 err:
    FUNC_3(VAR_11);
    VAR_9->pctx = ((void*)0);
    FUNC_7(VAR_12);
    return VAR_14;

}
