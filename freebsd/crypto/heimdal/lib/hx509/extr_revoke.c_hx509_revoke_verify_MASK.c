
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_62__ TYPE_9__ ;
typedef struct TYPE_61__ TYPE_8__ ;
typedef struct TYPE_60__ TYPE_7__ ;
typedef struct TYPE_59__ TYPE_6__ ;
typedef struct TYPE_58__ TYPE_5__ ;
typedef struct TYPE_57__ TYPE_4__ ;
typedef struct TYPE_56__ TYPE_3__ ;
typedef struct TYPE_55__ TYPE_37__ ;
typedef struct TYPE_54__ TYPE_2__ ;
typedef struct TYPE_53__ TYPE_23__ ;
typedef struct TYPE_52__ TYPE_22__ ;
typedef struct TYPE_51__ TYPE_21__ ;
typedef struct TYPE_50__ TYPE_20__ ;
typedef struct TYPE_49__ TYPE_1__ ;
typedef struct TYPE_48__ TYPE_19__ ;
typedef struct TYPE_47__ TYPE_18__ ;
typedef struct TYPE_46__ TYPE_17__ ;
typedef struct TYPE_45__ TYPE_16__ ;
typedef struct TYPE_44__ TYPE_15__ ;
typedef struct TYPE_43__ TYPE_14__ ;
typedef struct TYPE_42__ TYPE_13__ ;
typedef struct TYPE_41__ TYPE_12__ ;
typedef struct TYPE_40__ TYPE_11__ ;
typedef struct TYPE_39__ TYPE_10__ ;


typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_mtime; } ;
struct TYPE_47__ {unsigned long len; TYPE_16__* val; } ;
struct TYPE_46__ {TYPE_18__ responses; } ;
struct TYPE_43__ {TYPE_17__ tbsResponseData; } ;
struct revoke_ocsp {scalar_t__ last_modfied; TYPE_14__ ocsp; int * signer; int path; } ;
struct TYPE_62__ {TYPE_8__* revokedCertificates; TYPE_4__* crlExtensions; int issuer; } ;
struct TYPE_53__ {TYPE_9__ tbsCertList; } ;
struct revoke_crl {scalar_t__ last_modfied; int verified; int failed_verify; TYPE_23__ crl; int path; } ;
typedef TYPE_19__* hx509_revoke_ctx ;
typedef TYPE_20__* hx509_context ;
typedef int hx509_certs ;
typedef int hx509_cert ;
struct TYPE_51__ {int length; int data; } ;
typedef TYPE_21__ heim_octet_string ;
struct TYPE_61__ {unsigned long len; TYPE_7__* val; } ;
struct TYPE_60__ {TYPE_6__* crlEntryExtensions; int revocationDate; int userCertificate; } ;
struct TYPE_59__ {unsigned long len; TYPE_5__* val; } ;
struct TYPE_58__ {scalar_t__ critical; } ;
struct TYPE_57__ {unsigned long len; TYPE_3__* val; } ;
struct TYPE_56__ {scalar_t__ critical; } ;
struct TYPE_55__ {TYPE_21__ _save; } ;
struct TYPE_54__ {unsigned long len; struct revoke_crl* val; } ;
struct TYPE_40__ {int length; int data; } ;
struct TYPE_41__ {TYPE_11__ subjectPublicKey; } ;
struct TYPE_42__ {int serialNumber; TYPE_37__ issuer; TYPE_12__ subjectPublicKeyInfo; } ;
struct TYPE_52__ {TYPE_13__ tbsCertificate; } ;
struct TYPE_50__ {scalar_t__ ocsp_time_diff; int flags; } ;
struct TYPE_49__ {int element; } ;
struct TYPE_39__ {unsigned long len; struct revoke_ocsp* val; } ;
struct TYPE_48__ {TYPE_2__ crls; TYPE_10__ ocsps; } ;
struct TYPE_44__ {int issuerKeyHash; int hashAlgorithm; int issuerNameHash; int serialNumber; } ;
struct TYPE_45__ {scalar_t__ thisUpdate; scalar_t__* nextUpdate; TYPE_1__ certStatus; TYPE_15__ certID; } ;
typedef TYPE_22__ Certificate ;
typedef TYPE_23__ CRLCertificateList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_22__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_37__*,int *,int*) ;
 int FUNC_3 (TYPE_20__*,int *,int *,TYPE_21__*,int *) ;



 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_23__*) ;
 int FUNC_6 (TYPE_20__*) ;
 int FUNC_7 (TYPE_20__*,int ,int,char*) ;
 int FUNC_8 (int ,scalar_t__*,TYPE_23__*) ;
 int FUNC_9 (TYPE_20__*,struct revoke_ocsp*) ;
 int FUNC_10 (int ,struct stat*) ;
 int FUNC_11 (TYPE_20__*,TYPE_19__*,TYPE_23__*,scalar_t__,int ,int ) ;
 int FUNC_12 (TYPE_20__*,struct revoke_ocsp*,scalar_t__,int ,int ) ;

int
FUNC_13(hx509_context VAR_5,
      hx509_revoke_ctx VAR_6,
      hx509_certs VAR_7,
      time_t VAR_8,
      hx509_cert VAR_9,
      hx509_cert VAR_10)
{
    const Certificate *VAR_11 = FUNC_1(VAR_9);
    const Certificate *VAR_12 = FUNC_1(VAR_10);
    unsigned long VAR_13, VAR_14, VAR_15;
    int VAR_16;

    FUNC_6(VAR_5);

    for (VAR_13 = 0; VAR_13 < VAR_6->ocsps.len; VAR_13++) {
 struct revoke_ocsp *VAR_17 = &VAR_6->ocsps.val[VAR_13];
 struct stat VAR_18;




 VAR_16 = FUNC_10(VAR_17->path, &VAR_18);
 if (VAR_16 == 0 && VAR_17->last_modfied != VAR_18.st_mtime) {
     VAR_16 = FUNC_9(VAR_5, VAR_17);
     if (VAR_16)
  continue;
 }


 if (VAR_17->signer == ((void*)0)) {
     VAR_16 = FUNC_12(VAR_5, VAR_17, VAR_8, VAR_7, VAR_10);
     if (VAR_16)
  continue;
 }

 for (VAR_14 = 0; VAR_14 < VAR_17->ocsp.tbsResponseData.responses.len; VAR_14++) {
     heim_octet_string VAR_19;

     VAR_16 = FUNC_4(&VAR_17->ocsp.tbsResponseData.responses.val[VAR_14].certID.serialNumber,
       &VAR_11->tbsCertificate.serialNumber);
     if (VAR_16 != 0)
  continue;


     VAR_16 = FUNC_3(VAR_5,
       ((void*)0),
       &VAR_17->ocsp.tbsResponseData.responses.val[VAR_13].certID.hashAlgorithm,
       &VAR_11->tbsCertificate.issuer._save,
       &VAR_17->ocsp.tbsResponseData.responses.val[VAR_13].certID.issuerNameHash);
     if (VAR_16 != 0)
  continue;

     VAR_19.data = VAR_12->tbsCertificate.subjectPublicKeyInfo.subjectPublicKey.data;
     VAR_19.length = VAR_12->tbsCertificate.subjectPublicKeyInfo.subjectPublicKey.length / 8;

     VAR_16 = FUNC_3(VAR_5,
       ((void*)0),
       &VAR_17->ocsp.tbsResponseData.responses.val[VAR_14].certID.hashAlgorithm,
       &VAR_19,
       &VAR_17->ocsp.tbsResponseData.responses.val[VAR_14].certID.issuerKeyHash);
     if (VAR_16 != 0)
  continue;

     switch (VAR_17->ocsp.tbsResponseData.responses.val[VAR_14].certStatus.element) {
     case 130:
  break;
     case 129:
  FUNC_7(VAR_5, 0,
           VAR_0,
           "Certificate revoked by issuer in OCSP");
  return VAR_0;
     case 128:
  continue;
     }


     if (VAR_17->ocsp.tbsResponseData.responses.val[VAR_14].thisUpdate >
  VAR_8 + VAR_5->ocsp_time_diff)
  continue;


     if (VAR_17->ocsp.tbsResponseData.responses.val[VAR_14].nextUpdate) {
  if (*VAR_17->ocsp.tbsResponseData.responses.val[VAR_14].nextUpdate < VAR_8)
      continue;
     }

     return 0;
 }
    }

    for (VAR_13 = 0; VAR_13 < VAR_6->crls.len; VAR_13++) {
 struct revoke_crl *VAR_20 = &VAR_6->crls.val[VAR_13];
 struct stat VAR_21;
 int VAR_22;


 VAR_16 = FUNC_2(&VAR_11->tbsCertificate.issuer,
         &VAR_20->crl.tbsCertList.issuer, &VAR_22);
 if (VAR_16 || VAR_22)
     continue;

 VAR_16 = FUNC_10(VAR_20->path, &VAR_21);
 if (VAR_16 == 0 && VAR_20->last_modfied != VAR_21.st_mtime) {
     CRLCertificateList VAR_23;

     VAR_16 = FUNC_8(VAR_20->path, &VAR_20->last_modfied, &VAR_23);
     if (VAR_16 == 0) {
  FUNC_5(&VAR_20->crl);
  VAR_20->crl = VAR_23;
  VAR_20->verified = 0;
  VAR_20->failed_verify = 0;
     }
 }
 if (VAR_20->failed_verify)
     continue;


 if (VAR_20->verified == 0) {
     VAR_16 = FUNC_11(VAR_5, VAR_6, &VAR_20->crl, VAR_8, VAR_7, VAR_10);
     if (VAR_16) {
  VAR_20->failed_verify = 1;
  continue;
     }
     VAR_20->verified = 1;
 }

 if (VAR_20->crl.tbsCertList.crlExtensions) {
     for (VAR_14 = 0; VAR_14 < VAR_20->crl.tbsCertList.crlExtensions->len; VAR_14++) {
  if (VAR_20->crl.tbsCertList.crlExtensions->val[VAR_14].critical) {
      FUNC_7(VAR_5, 0,
        VAR_1,
        "Unknown CRL extension");
      return VAR_1;
  }
     }
 }

 if (VAR_20->crl.tbsCertList.revokedCertificates == ((void*)0))
     return 0;


 for (VAR_14 = 0; VAR_14 < VAR_20->crl.tbsCertList.revokedCertificates->len; VAR_14++) {
     time_t VAR_24;

     VAR_16 = FUNC_4(&VAR_20->crl.tbsCertList.revokedCertificates->val[VAR_14].userCertificate,
           &VAR_11->tbsCertificate.serialNumber);
     if (VAR_16 != 0)
  continue;

     VAR_24 = FUNC_0(&VAR_20->crl.tbsCertList.revokedCertificates->val[VAR_14].revocationDate);
     if (VAR_24 > VAR_8)
  continue;

     if (VAR_20->crl.tbsCertList.revokedCertificates->val[VAR_14].crlEntryExtensions)
  for (VAR_15 = 0; VAR_15 < VAR_20->crl.tbsCertList.revokedCertificates->val[VAR_14].crlEntryExtensions->len; VAR_15++)
      if (VAR_20->crl.tbsCertList.revokedCertificates->val[VAR_14].crlEntryExtensions->val[VAR_15].critical)
   return VAR_1;

     FUNC_7(VAR_5, 0,
       VAR_0,
       "Certificate revoked by issuer in CRL");
     return VAR_0;
 }

 return 0;
    }


    if (VAR_5->flags & VAR_2)
 return 0;
    FUNC_7(VAR_5, VAR_3,
      VAR_4,
      "No revoke status found for "
      "certificates");
    return VAR_4;
}
