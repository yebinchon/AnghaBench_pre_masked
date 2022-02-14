
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int name ;
typedef int hx509_context ;
typedef int gns ;
typedef int gn ;
struct TYPE_24__ {int serialNumber; int subject; } ;
struct TYPE_26__ {TYPE_5__ tbsCertificate; } ;
struct TYPE_20__ {int rdnSequence; } ;
struct TYPE_21__ {TYPE_1__ u; int element; } ;
struct TYPE_22__ {int rdnSequence; TYPE_2__ directoryName; } ;
struct TYPE_25__ {int len; int val; TYPE_3__ u; int element; } ;
struct TYPE_23__ {int len; int val; } ;
struct TYPE_19__ {int * authorityCertSerialNumber; TYPE_4__* authorityCertIssuer; int * keyIdentifier; } ;
typedef int SubjectKeyIdentifier ;
typedef TYPE_6__ Name ;
typedef TYPE_6__ GeneralNames ;
typedef TYPE_6__ GeneralName ;
typedef TYPE_9__ Certificate ;
typedef TYPE_10__ AuthorityKeyIdentifier ;


 int VAR_0 ;
 int FUNC_0 (TYPE_9__ const*,int *) ;
 int FUNC_1 (TYPE_6__*,TYPE_6__*) ;
 void* FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_6__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int,char*) ;
 int FUNC_9 (TYPE_6__*,int ,int) ;

__attribute__((used)) static int
FUNC_10(hx509_context VAR_3,
      const Certificate *VAR_4,
      AuthorityKeyIdentifier *VAR_5)
{
    SubjectKeyIdentifier VAR_6;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_4, &VAR_6);
    if (VAR_7 == 0) {
 VAR_5->keyIdentifier = FUNC_2(1, sizeof(*VAR_5->keyIdentifier));
 if (VAR_5->keyIdentifier == ((void*)0)) {
     FUNC_7(&VAR_6);
     VAR_7 = VAR_0;
     FUNC_8(VAR_3, 0, VAR_7, "Out of memory");
     goto out;
 }
 VAR_7 = FUNC_5(&VAR_6, VAR_5->keyIdentifier);
 FUNC_7(&VAR_6);
 if (VAR_7) {
     FUNC_8(VAR_3, 0, VAR_7, "Out of memory");
     goto out;
 }
    } else {
 GeneralNames VAR_8;
 GeneralName VAR_9;
 Name VAR_10;

 FUNC_9(&VAR_9, 0, sizeof(VAR_9));
 FUNC_9(&VAR_8, 0, sizeof(VAR_8));
 FUNC_9(&VAR_10, 0, sizeof(VAR_10));

 VAR_5->authorityCertIssuer =
     FUNC_2(1, sizeof(*VAR_5->authorityCertIssuer));
 if (VAR_5->authorityCertIssuer == ((void*)0)) {
     VAR_7 = VAR_0;
     FUNC_8(VAR_3, 0, VAR_7, "Out of memory");
     goto out;
 }
 VAR_5->authorityCertSerialNumber =
     FUNC_2(1, sizeof(*VAR_5->authorityCertSerialNumber));
 if (VAR_5->authorityCertSerialNumber == ((void*)0)) {
     VAR_7 = VAR_0;
     FUNC_8(VAR_3, 0, VAR_7, "Out of memory");
     goto out;
 }







 VAR_7 = FUNC_3(&VAR_4->tbsCertificate.subject, &VAR_10);
 if (VAR_7) {
     FUNC_8(VAR_3, 0, VAR_7, "Out of memory");
     goto out;
 }

 FUNC_9(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.element = VAR_1;
 VAR_9.u.directoryName.element =
     VAR_2;
 VAR_9.u.directoryName.u.rdnSequence = VAR_10.u.rdnSequence;

 VAR_7 = FUNC_1(&VAR_8, &VAR_9);
 if (VAR_7) {
     FUNC_8(VAR_3, 0, VAR_7, "Out of memory");
     goto out;
 }

 VAR_5->authorityCertIssuer->val = VAR_8.val;
 VAR_5->authorityCertIssuer->len = VAR_8.len;

 VAR_7 = FUNC_4(&VAR_4->tbsCertificate.serialNumber,
        VAR_5->authorityCertSerialNumber);
 if (VAR_5->authorityCertSerialNumber == ((void*)0)) {
     VAR_7 = VAR_0;
     FUNC_8(VAR_3, 0, VAR_7, "Out of memory");
     goto out;
 }
    }
out:
    if (VAR_7)
 FUNC_6(VAR_5);
    return VAR_7;
}
