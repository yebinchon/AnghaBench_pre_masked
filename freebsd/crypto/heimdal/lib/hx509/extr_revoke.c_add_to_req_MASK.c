
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct ocsp_add_ctx {TYPE_7__* req; int digest; scalar_t__ parent; int certs; } ;
struct TYPE_28__ {TYPE_11__* subject; int match; } ;
typedef TYPE_8__ hx509_query ;
typedef int hx509_context ;
typedef int * hx509_cert ;
struct TYPE_29__ {int length; int data; } ;
typedef TYPE_9__ heim_octet_string ;
struct TYPE_26__ {int len; TYPE_10__* val; } ;
struct TYPE_27__ {TYPE_6__ requestList; } ;
struct TYPE_25__ {int serialNumber; int issuerKeyHash; int hashAlgorithm; int issuerNameHash; } ;
struct TYPE_22__ {int length; int data; } ;
struct TYPE_23__ {TYPE_2__ subjectPublicKey; } ;
struct TYPE_21__ {TYPE_9__ _save; } ;
struct TYPE_24__ {int serialNumber; TYPE_3__ subjectPublicKeyInfo; TYPE_1__ issuer; } ;
struct TYPE_20__ {TYPE_4__ tbsCertificate; } ;
struct TYPE_19__ {TYPE_5__ reqCert; } ;
typedef TYPE_10__ OCSPInnerRequest ;
typedef TYPE_11__ Certificate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int *,TYPE_9__*,int *,int *) ;
 TYPE_11__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_10__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,TYPE_8__*,int **) ;
 int FUNC_10 (int ,int ,int,char*) ;
 int FUNC_11 (TYPE_10__*,int ,int) ;
 void* FUNC_12 (TYPE_10__*,int) ;

__attribute__((used)) static int
FUNC_13(hx509_context VAR_3, void *VAR_4, hx509_cert VAR_5)
{
    struct ocsp_add_ctx *VAR_6 = VAR_4;
    OCSPInnerRequest *VAR_7;
    hx509_cert VAR_8 = ((void*)0);
    Certificate *VAR_9, *VAR_10 = FUNC_1(VAR_5);
    heim_octet_string VAR_11;
    int VAR_12;
    hx509_query VAR_13;
    void *VAR_14;

    VAR_14 = FUNC_12(VAR_6->req->requestList.val,
  sizeof(VAR_6->req->requestList.val[0]) *
  (VAR_6->req->requestList.len + 1));
    if (VAR_14 == ((void*)0))
 return VAR_0;
    VAR_6->req->requestList.val = VAR_14;

    VAR_7 = &VAR_6->req->requestList.val[VAR_6->req->requestList.len];
    FUNC_11(VAR_7, 0, sizeof(*VAR_7));

    FUNC_2(&VAR_13);

    VAR_13.match |= VAR_1;
    VAR_13.subject = VAR_10;

    VAR_12 = FUNC_9(VAR_3, VAR_6->certs, &VAR_13, &VAR_8);
    if (VAR_12)
 goto out;

    if (VAR_6->parent) {
 if (FUNC_6(VAR_6->parent, VAR_8) != 0) {
     VAR_12 = VAR_2;
     FUNC_10(VAR_3, 0, VAR_12,
       "Not same parent certifate as "
       "last certificate in request");
     goto out;
 }
    } else
 VAR_6->parent = FUNC_8(VAR_8);

    VAR_9 = FUNC_1(VAR_8);

    VAR_12 = FUNC_3(VAR_6->digest, &VAR_7->reqCert.hashAlgorithm);
    if (VAR_12)
 goto out;

    VAR_12 = FUNC_0(VAR_3,
      ((void*)0),
      &VAR_7->reqCert.hashAlgorithm,
      &VAR_10->tbsCertificate.issuer._save,
      ((void*)0),
      &VAR_7->reqCert.issuerNameHash);
    if (VAR_12)
 goto out;

    VAR_11.data = VAR_9->tbsCertificate.subjectPublicKeyInfo.subjectPublicKey.data;
    VAR_11.length =
 VAR_9->tbsCertificate.subjectPublicKeyInfo.subjectPublicKey.length / 8;

    VAR_12 = FUNC_0(VAR_3,
      ((void*)0),
      &VAR_7->reqCert.hashAlgorithm,
      &VAR_11,
      ((void*)0),
      &VAR_7->reqCert.issuerKeyHash);
    if (VAR_12)
 goto out;

    VAR_12 = FUNC_4(&VAR_10->tbsCertificate.serialNumber,
           &VAR_7->reqCert.serialNumber);
    if (VAR_12)
 goto out;

    VAR_6->req->requestList.len++;
out:
    FUNC_7(VAR_8);
    if (VAR_12) {
 FUNC_5(VAR_7);
 FUNC_11(VAR_7, 0, sizeof(*VAR_7));
    }

    return VAR_12;
}
