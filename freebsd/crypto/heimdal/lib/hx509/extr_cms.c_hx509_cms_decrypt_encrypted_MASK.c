
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int hx509_lock ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_12__ {scalar_t__ data; } ;
typedef TYPE_2__ heim_octet_string ;
typedef int cont ;
struct TYPE_14__ {int * parameters; } ;
struct TYPE_11__ {int * encryptedContent; TYPE_4__ contentEncryptionAlgorithm; int contentType; } ;
struct TYPE_13__ {TYPE_1__ encryptedContentInfo; } ;
typedef TYPE_3__ CMSEncryptedData ;
typedef TYPE_4__ AlgorithmIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_4__*,int *,TYPE_2__*) ;
 int FUNC_1 (void const*,size_t,TYPE_3__*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,char*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

int
FUNC_8(hx509_context VAR_2,
       hx509_lock VAR_3,
       const void *VAR_4,
       size_t VAR_5,
       heim_oid *VAR_6,
       heim_octet_string *VAR_7)
{
    heim_octet_string VAR_8;
    CMSEncryptedData VAR_9;
    AlgorithmIdentifier *VAR_10;
    int VAR_11;

    FUNC_7(VAR_7, 0, sizeof(*VAR_7));
    FUNC_7(&VAR_8, 0, sizeof(VAR_8));

    VAR_11 = FUNC_1(VAR_4, VAR_5, &VAR_9, ((void*)0));
    if (VAR_11) {
 FUNC_6(VAR_2, 0, VAR_11,
          "Failed to decode CMSEncryptedData");
 return VAR_11;
    }

    if (VAR_9.encryptedContentInfo.encryptedContent == ((void*)0)) {
 VAR_11 = VAR_1;
 FUNC_6(VAR_2, 0, VAR_11,
          "No content in EncryptedData");
 goto out;
    }

    VAR_11 = FUNC_2(&VAR_9.encryptedContentInfo.contentType, VAR_6);
    if (VAR_11) {
 FUNC_5(VAR_2);
 goto out;
    }

    VAR_10 = &VAR_9.encryptedContentInfo.contentEncryptionAlgorithm;
    if (VAR_10->parameters == ((void*)0)) {
 VAR_11 = VAR_0;
 FUNC_5(VAR_2);
 goto out;
    }

    VAR_11 = FUNC_0(VAR_2,
        VAR_3,
        VAR_10,
        VAR_9.encryptedContentInfo.encryptedContent,
        &VAR_8);
    if (VAR_11)
 goto out;

    *VAR_7 = VAR_8;

out:
    if (VAR_11) {
 if (VAR_8.data)
     FUNC_3(VAR_8.data);
    }
    FUNC_4(&VAR_9);
    return VAR_11;
}
