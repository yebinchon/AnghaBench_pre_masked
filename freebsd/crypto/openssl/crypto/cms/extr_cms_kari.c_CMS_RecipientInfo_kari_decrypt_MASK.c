
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_3__* envelopedData; } ;
struct TYPE_20__ {TYPE_4__ d; } ;
struct TYPE_19__ {unsigned char* key; size_t keylen; } ;
struct TYPE_18__ {TYPE_1__* encryptedKey; } ;
struct TYPE_14__ {int kari; } ;
struct TYPE_17__ {TYPE_2__ d; } ;
struct TYPE_15__ {TYPE_7__* encryptedContentInfo; } ;
struct TYPE_13__ {size_t length; unsigned char* data; } ;
typedef TYPE_5__ CMS_RecipientInfo ;
typedef TYPE_6__ CMS_RecipientEncryptedKey ;
typedef TYPE_7__ CMS_EncryptedContentInfo ;
typedef TYPE_8__ CMS_ContentInfo ;


 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (unsigned char**,size_t*,unsigned char*,size_t,int ,int ) ;

int FUNC_4(CMS_ContentInfo *VAR_0,
                                   CMS_RecipientInfo *VAR_1,
                                   CMS_RecipientEncryptedKey *VAR_2)
{
    int VAR_3 = 0;
    unsigned char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    size_t VAR_6;
    size_t VAR_7;
    CMS_EncryptedContentInfo *VAR_8;
    VAR_6 = VAR_2->encryptedKey->length;
    VAR_4 = VAR_2->encryptedKey->data;

    if (!FUNC_2(VAR_1, 1))
        goto err;

    if (!FUNC_3(&VAR_5, &VAR_7, VAR_4, VAR_6, VAR_1->d.kari, 0))
        goto err;
    VAR_8 = VAR_0->d.envelopedData->encryptedContentInfo;
    FUNC_0(VAR_8->key, VAR_8->keylen);
    VAR_8->key = VAR_5;
    VAR_8->keylen = VAR_7;
    VAR_5 = ((void*)0);
    VAR_3 = 1;
 err:
    FUNC_1(VAR_5);
    return VAR_3;
}
