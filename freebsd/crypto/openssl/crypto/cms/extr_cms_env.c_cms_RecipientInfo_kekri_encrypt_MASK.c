
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int actx ;
struct TYPE_11__ {TYPE_1__* envelopedData; } ;
struct TYPE_16__ {TYPE_2__ d; } ;
struct TYPE_15__ {scalar_t__ keylen; int key; } ;
struct TYPE_14__ {int keylen; int encryptedKey; int key; } ;
struct TYPE_12__ {TYPE_5__* kekri; } ;
struct TYPE_13__ {TYPE_3__ d; } ;
struct TYPE_10__ {TYPE_6__* encryptedContentInfo; } ;
typedef TYPE_4__ CMS_RecipientInfo ;
typedef TYPE_5__ CMS_KEKRecipientInfo ;
typedef TYPE_6__ CMS_EncryptedContentInfo ;
typedef TYPE_7__ CMS_ContentInfo ;
typedef int AES_KEY ;


 scalar_t__ FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int *,int *,unsigned char*,int ,scalar_t__) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(CMS_ContentInfo *VAR_5,
                                           CMS_RecipientInfo *VAR_6)
{
    CMS_EncryptedContentInfo *VAR_7;
    CMS_KEKRecipientInfo *VAR_8;
    AES_KEY VAR_9;
    unsigned char *VAR_10 = ((void*)0);
    int VAR_11;
    int VAR_12 = 0;

    VAR_7 = VAR_5->d.envelopedData->encryptedContentInfo;

    VAR_8 = VAR_6->d.kekri;

    if (!VAR_8->key) {
        FUNC_3(VAR_0, VAR_2);
        return 0;
    }

    if (FUNC_0(VAR_8->key, VAR_8->keylen << 3, &VAR_9)) {
        FUNC_3(VAR_0,
               VAR_1);
        goto err;
    }

    VAR_10 = FUNC_6(VAR_7->keylen + 8);

    if (VAR_10 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_4);
        goto err;
    }

    VAR_11 = FUNC_1(&VAR_9, ((void*)0), VAR_10, VAR_7->key, VAR_7->keylen);

    if (VAR_11 <= 0) {
        FUNC_3(VAR_0, VAR_3);
        goto err;
    }

    FUNC_2(VAR_8->encryptedKey, VAR_10, VAR_11);

    VAR_12 = 1;

 err:

    if (!VAR_12)
        FUNC_5(VAR_10);
    FUNC_4(&VAR_9, sizeof(VAR_9));

    return VAR_12;

}
