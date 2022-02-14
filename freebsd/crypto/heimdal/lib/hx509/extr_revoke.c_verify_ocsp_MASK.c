
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_13__ {int byKey; int byName; } ;
struct TYPE_14__ {int element; TYPE_1__ u; } ;
struct TYPE_16__ {int _save; TYPE_2__ responderID; } ;
struct TYPE_17__ {int signature; TYPE_4__ tbsResponseData; int signatureAlgorithm; } ;
struct revoke_ocsp {int * signer; TYPE_5__ ocsp; scalar_t__ certs; } ;
struct TYPE_18__ {int * keyhash_sha1; int match; int * subject_name; int * issuer_name; } ;
typedef TYPE_6__ hx509_query ;
typedef int hx509_context ;
typedef scalar_t__ hx509_certs ;
typedef int * hx509_cert ;
struct TYPE_15__ {int _save; int issuer; } ;
struct TYPE_19__ {int signatureValue; TYPE_3__ tbsCertificate; int signatureAlgorithm; } ;
typedef TYPE_7__ Certificate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_7__*,TYPE_7__*,int ) ;
 TYPE_7__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,int *,int *,int *,int *) ;
 int VAR_5 ;


 int FUNC_4 (int ,int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__,TYPE_6__*,int **) ;
 int FUNC_8 (int ,int ,int,char*) ;

__attribute__((used)) static int
FUNC_9(hx509_context VAR_6,
     struct revoke_ocsp *VAR_7,
     time_t VAR_8,
     hx509_certs VAR_9,
     hx509_cert VAR_10)
{
    hx509_cert VAR_11 = ((void*)0);
    hx509_query VAR_12;
    int VAR_13;

    FUNC_2(&VAR_12);







    VAR_12.match = VAR_2;
    VAR_12.issuer_name = &FUNC_1(VAR_10)->tbsCertificate.issuer;

    switch(VAR_7->ocsp.tbsResponseData.responderID.element) {
    case 128:
 VAR_12.match |= VAR_4;
 VAR_12.subject_name = &VAR_7->ocsp.tbsResponseData.responderID.u.byName;
 break;
    case 129:
 VAR_12.match |= VAR_3;
 VAR_12.keyhash_sha1 = &VAR_7->ocsp.tbsResponseData.responderID.u.byKey;
 break;
    }

    VAR_13 = FUNC_7(VAR_6, VAR_9, &VAR_12, &VAR_11);
    if (VAR_13 && VAR_7->certs)
 VAR_13 = FUNC_7(VAR_6, VAR_7->certs, &VAR_12, &VAR_11);
    if (VAR_13)
 goto out;






    if (FUNC_5(VAR_11, VAR_10) != 0) {
 Certificate *VAR_14 = FUNC_1(VAR_10);
 Certificate *VAR_15 = FUNC_1(VAR_11);

 VAR_13 = FUNC_0(VAR_15, VAR_14, 0);
 if (VAR_13 != 0) {
     VAR_13 = VAR_1;
     FUNC_8(VAR_6, 0, VAR_13, "Revoke OCSP signer is "
       "doesn't have CA as signer certificate");
     goto out;
 }

 VAR_13 = FUNC_3(VAR_6,
      VAR_10,
      &VAR_15->signatureAlgorithm,
      &VAR_15->tbsCertificate._save,
      &VAR_15->signatureValue);
 if (VAR_13) {
     FUNC_8(VAR_6, VAR_0, VAR_13,
       "OCSP signer signature invalid");
     goto out;
 }

 VAR_13 = FUNC_4(VAR_6, VAR_11,
       &VAR_5, 0);
 if (VAR_13)
     goto out;
    }

    VAR_13 = FUNC_3(VAR_6,
         VAR_11,
         &VAR_7->ocsp.signatureAlgorithm,
         &VAR_7->ocsp.tbsResponseData._save,
         &VAR_7->ocsp.signature);
    if (VAR_13) {
 FUNC_8(VAR_6, VAR_0, VAR_13,
          "OCSP signature invalid");
 goto out;
    }

    VAR_7->signer = VAR_11;
    VAR_11 = ((void*)0);
out:
    if (VAR_11)
 FUNC_6(VAR_11);

    return VAR_13;
}
