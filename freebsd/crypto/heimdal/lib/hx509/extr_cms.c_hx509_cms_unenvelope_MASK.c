
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int time_t ;
typedef int key ;
typedef int ivec ;
typedef int hx509_crypto ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int * hx509_cert ;
struct TYPE_30__ {int algorithm; TYPE_4__* parameters; } ;
struct TYPE_26__ {TYPE_9__ contentEncryptionAlgorithm; int contentType; TYPE_5__* encryptedContent; } ;
struct TYPE_24__ {size_t len; TYPE_7__* val; } ;
struct TYPE_28__ {scalar_t__ length; int data; TYPE_3__ encryptedContentInfo; TYPE_1__ recipientInfos; } ;
typedef TYPE_5__ heim_oid ;
typedef TYPE_5__ heim_octet_string ;
typedef int ed ;
struct TYPE_25__ {int algorithm; } ;
struct TYPE_29__ {int rid; TYPE_2__ keyEncryptionAlgorithm; int encryptedKey; } ;
struct TYPE_27__ {scalar_t__ length; int data; } ;
typedef TYPE_7__ KeyTransRecipientInfo ;
typedef TYPE_5__ EnvelopedData ;
typedef TYPE_9__ AlgorithmIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int *,int *,TYPE_5__*) ;
 int FUNC_1 (void const*,size_t,TYPE_5__*,size_t*) ;
 int FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,int *,int ,int ,int **,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,scalar_t__,TYPE_5__*,TYPE_5__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *,int *,int *) ;
 int FUNC_13 (int ,int ,scalar_t__) ;
 int FUNC_14 (int ,int ,TYPE_5__*,TYPE_5__*) ;
 int FUNC_15 (int ,int ,int,char*,...) ;
 int FUNC_16 (TYPE_5__*,int ,int) ;
 int FUNC_17 (int ,int *,char**) ;

int
FUNC_18(hx509_context VAR_7,
       hx509_certs VAR_8,
       int VAR_9,
       const void *VAR_10,
       size_t VAR_11,
       const heim_octet_string *VAR_12,
       time_t VAR_13,
       heim_oid *VAR_14,
       heim_octet_string *VAR_15)
{
    heim_octet_string VAR_16;
    EnvelopedData VAR_17;
    hx509_cert VAR_18;
    AlgorithmIdentifier *VAR_19;
    const heim_octet_string *VAR_20;
    heim_octet_string *VAR_21, VAR_22;
    heim_octet_string VAR_23;
    size_t VAR_24;
    int VAR_25, VAR_26 = 0, VAR_27 = 0;
    size_t VAR_28;


    FUNC_16(&VAR_16, 0, sizeof(VAR_16));
    FUNC_16(&VAR_17, 0, sizeof(VAR_17));
    FUNC_16(&VAR_23, 0, sizeof(VAR_23));
    FUNC_16(VAR_15, 0, sizeof(*VAR_15));
    FUNC_16(VAR_14, 0, sizeof(*VAR_14));

    if ((VAR_9 & VAR_3) == 0)
 VAR_27 |= VAR_5;

    VAR_25 = FUNC_1(VAR_10, VAR_11, &VAR_17, &VAR_24);
    if (VAR_25) {
 FUNC_15(VAR_7, 0, VAR_25,
          "Failed to decode EnvelopedData");
 return VAR_25;
    }

    if (VAR_17.recipientInfos.len == 0) {
 VAR_25 = VAR_1;
 FUNC_15(VAR_7, 0, VAR_25,
          "No recipient info in enveloped data");
 goto out;
    }

    VAR_20 = VAR_17.encryptedContentInfo.encryptedContent;
    if (VAR_20 == ((void*)0)) {
 if (VAR_12 == ((void*)0)) {
     VAR_25 = VAR_0;
     FUNC_15(VAR_7, 0, VAR_25,
       "Content missing from encrypted data");
     goto out;
 }
 VAR_20 = VAR_12;
    } else if (VAR_12 != ((void*)0)) {
 VAR_25 = VAR_0;
 FUNC_15(VAR_7, 0, VAR_25,
          "Both internal and external encrypted data");
 goto out;
    }

    VAR_18 = ((void*)0);
    for (VAR_28 = 0; VAR_28 < VAR_17.recipientInfos.len; VAR_28++) {
 KeyTransRecipientInfo *VAR_29;
 char *VAR_30;
 int VAR_31;

 VAR_29 = &VAR_17.recipientInfos.val[VAR_28];

 VAR_25 = FUNC_5(VAR_7, &VAR_29->rid, VAR_8,
     VAR_13, &VAR_18,
     VAR_6|VAR_27);
 if (VAR_25)
     continue;

 VAR_26 = 1;

 VAR_25 = FUNC_0(VAR_7,
       &VAR_29->encryptedKey,
       &VAR_29->keyEncryptionAlgorithm.algorithm,
       VAR_18, &VAR_16);

 FUNC_8(VAR_18);
 if (VAR_25 == 0)
     break;
 VAR_18 = ((void*)0);
 VAR_31 = FUNC_17(VAR_7, &VAR_29->rid, &VAR_30);
 if (VAR_31 == 0) {
     FUNC_15(VAR_7, VAR_4, VAR_25,
       "Failed to decrypt with %s", VAR_30);
     FUNC_6(VAR_30);
 }
    }

    if (!VAR_26) {
 VAR_25 = VAR_1;
 FUNC_15(VAR_7, 0, VAR_25,
          "No private key matched any certificate");
 goto out;
    }

    if (VAR_18 == ((void*)0)) {
 VAR_25 = VAR_1;
 FUNC_15(VAR_7, VAR_4, VAR_25,
          "No private key decrypted the transfer key");
 goto out;
    }

    VAR_25 = FUNC_2(&VAR_17.encryptedContentInfo.contentType, VAR_14);
    if (VAR_25) {
 FUNC_15(VAR_7, 0, VAR_25,
          "Failed to copy EnvelopedData content oid");
 goto out;
    }

    VAR_19 = &VAR_17.encryptedContentInfo.contentEncryptionAlgorithm;
    if (VAR_19->parameters) {
 VAR_22.data = VAR_19->parameters->data;
 VAR_22.length = VAR_19->parameters->length;
 VAR_21 = &VAR_22;
    } else
 VAR_21 = ((void*)0);

    {
 hx509_crypto VAR_32;

 VAR_25 = FUNC_12(VAR_7, ((void*)0), &VAR_19->algorithm, &VAR_32);
 if (VAR_25)
     goto out;

 if (VAR_9 & VAR_2)
     FUNC_9(VAR_32);

 if (VAR_21) {
     VAR_25 = FUNC_14(VAR_7, VAR_32, VAR_21, &VAR_23);
     if (VAR_25) {
  FUNC_11(VAR_32);
  goto out;
     }
 }

 VAR_25 = FUNC_13(VAR_32, VAR_16.data, VAR_16.length);
 if (VAR_25) {
     FUNC_11(VAR_32);
     FUNC_15(VAR_7, 0, VAR_25,
       "Failed to set key for decryption "
       "of EnvelopedData");
     goto out;
 }

 VAR_25 = FUNC_10(VAR_32,
       VAR_20->data,
       VAR_20->length,
       VAR_23.length ? &VAR_23 : ((void*)0),
       VAR_15);
 FUNC_11(VAR_32);
 if (VAR_25) {
     FUNC_15(VAR_7, 0, VAR_25,
       "Failed to decrypt EnvelopedData");
     goto out;
 }
    }

out:

    FUNC_7(&VAR_17);
    FUNC_3(&VAR_16);
    if (VAR_23.length)
 FUNC_3(&VAR_23);
    if (VAR_25) {
 FUNC_4(VAR_14);
 FUNC_3(VAR_15);
    }

    return VAR_25;
}
