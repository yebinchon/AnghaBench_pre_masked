
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int si ;
typedef int ai ;
struct TYPE_24__ {int rdnSequence; } ;
struct TYPE_32__ {TYPE_1__ u; int element; } ;
struct TYPE_31__ {int * keyIdentifier; TYPE_6__* authorityCertIssuer; int * authorityCertSerialNumber; } ;
struct TYPE_30__ {int subject; int serialNumber; TYPE_9__ issuer; } ;
struct TYPE_29__ {int len; TYPE_5__* val; } ;
struct TYPE_25__ {int rdnSequence; } ;
struct TYPE_26__ {TYPE_2__ u; int element; } ;
struct TYPE_27__ {TYPE_3__ directoryName; } ;
struct TYPE_28__ {scalar_t__ element; TYPE_4__ u; } ;
struct TYPE_23__ {TYPE_7__ tbsCertificate; } ;
typedef TYPE_8__ SubjectKeyIdentifier ;
typedef TYPE_9__ Name ;
typedef TYPE_10__ Certificate ;
typedef TYPE_8__ AuthorityKeyIdentifier ;


 int VAR_0 ;
 int FUNC_0 (TYPE_10__ const*,TYPE_8__*) ;
 int FUNC_1 (int *,TYPE_9__*,int*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,TYPE_8__*) ;
 int FUNC_4 (TYPE_10__ const*,TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*,int ,int) ;

int
FUNC_8(const Certificate *VAR_2,
     const Certificate *VAR_3,
     int VAR_4)
{
    int VAR_5;
    AuthorityKeyIdentifier VAR_6;
    SubjectKeyIdentifier VAR_7;
    int VAR_8, VAR_9, VAR_10;

    VAR_10 = FUNC_1(&VAR_3->tbsCertificate.subject,
     &VAR_2->tbsCertificate.issuer,
     &VAR_5);
    if (VAR_10)
 return VAR_10;
    if (VAR_5)
 return VAR_5;

    FUNC_7(&VAR_6, 0, sizeof(VAR_6));
    FUNC_7(&VAR_7, 0, sizeof(VAR_7));






    VAR_8 = FUNC_4(VAR_2, &VAR_6);
    if (VAR_8 && VAR_8 != VAR_0)
 return 1;
    VAR_9 = FUNC_0(VAR_3, &VAR_7);
    if (VAR_9 && VAR_9 != VAR_0)
 return -1;

    if (VAR_9 && VAR_8)
 goto out;
    if (VAR_8)
 goto out;
    if (VAR_9) {
 if (VAR_4) {
     VAR_5 = 0;
     goto out;
 } else if (VAR_6.keyIdentifier) {
     VAR_5 = -1;
     goto out;
 }
    }

    if (VAR_6.keyIdentifier == ((void*)0)) {
 Name VAR_11;

 if (VAR_6.authorityCertIssuer == ((void*)0))
     return -1;
 if (VAR_6.authorityCertSerialNumber == ((void*)0))
     return -1;

 VAR_5 = FUNC_2(VAR_6.authorityCertSerialNumber,
        &VAR_3->tbsCertificate.serialNumber);
 if (VAR_5)
     return VAR_5;
 if (VAR_6.authorityCertIssuer->len != 1)
     return -1;
 if (VAR_6.authorityCertIssuer->val[0].element != VAR_1)
     return -1;

 VAR_11.element =
     VAR_6.authorityCertIssuer->val[0].u.directoryName.element;
 VAR_11.u.rdnSequence =
     VAR_6.authorityCertIssuer->val[0].u.directoryName.u.rdnSequence;

 VAR_10 = FUNC_1(&VAR_3->tbsCertificate.subject,
         &VAR_11,
         &VAR_5);
 if (VAR_10)
     return VAR_10;
 if (VAR_5)
     return VAR_5;
 VAR_5 = 0;
    } else
 VAR_5 = FUNC_3(VAR_6.keyIdentifier, &VAR_7);
    if (VAR_5)
 goto out;

 out:
    FUNC_5(&VAR_6);
    FUNC_6(&VAR_7);
    return VAR_5;
}
