
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef scalar_t__ time_t ;
typedef int hx509_name ;
typedef TYPE_8__* hx509_context ;
typedef int hx509_cert ;
struct TYPE_24__ {size_t len; TYPE_5__* val; } ;
struct TYPE_25__ {TYPE_6__ responses; } ;
struct TYPE_27__ {TYPE_7__ tbsResponseData; } ;
struct TYPE_26__ {scalar_t__ ocsp_time_diff; } ;
struct TYPE_22__ {int element; } ;
struct TYPE_21__ {int issuerNameHash; int hashAlgorithm; int serialNumber; } ;
struct TYPE_23__ {scalar_t__ thisUpdate; scalar_t__* nextUpdate; TYPE_4__ certStatus; TYPE_3__ certID; } ;
struct TYPE_19__ {int _save; } ;
struct TYPE_20__ {TYPE_1__ issuer; int serialNumber; } ;
struct TYPE_18__ {TYPE_2__ tbsCertificate; } ;
typedef TYPE_9__ OCSPBasicOCSPResponse ;
typedef TYPE_10__ Certificate ;


 int VAR_0 ;
 TYPE_10__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*,int *,int *,int *,int *) ;



 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char**) ;
 int FUNC_9 (TYPE_8__*,int ,int,char*,...) ;
 int FUNC_10 (void const*,size_t,TYPE_9__*) ;
 scalar_t__ FUNC_11 (int *) ;

int
FUNC_12(hx509_context VAR_1,
    time_t VAR_2,
    hx509_cert VAR_3,
    int VAR_4,
    const void *VAR_5, size_t VAR_6,
    time_t *VAR_7)
{
    const Certificate *VAR_8 = FUNC_0(VAR_3);
    OCSPBasicOCSPResponse VAR_9;
    int VAR_10;
    size_t VAR_11;

    if (VAR_2 == 0)
 VAR_2 = FUNC_11(((void*)0));

    *VAR_7 = 0;

    VAR_10 = FUNC_10(VAR_5, VAR_6, &VAR_9);
    if (VAR_10) {
 FUNC_9(VAR_1, 0, VAR_10,
          "Failed to parse OCSP response");
 return VAR_10;
    }

    for (VAR_11 = 0; VAR_11 < VAR_9.tbsResponseData.responses.len; VAR_11++) {

 VAR_10 = FUNC_2(&VAR_9.tbsResponseData.responses.val[VAR_11].certID.serialNumber,
          &VAR_8->tbsCertificate.serialNumber);
 if (VAR_10 != 0)
     continue;


 VAR_10 = FUNC_1(VAR_1,
          ((void*)0),
          &VAR_9.tbsResponseData.responses.val[VAR_11].certID.hashAlgorithm,
          &VAR_8->tbsCertificate.issuer._save,
          &VAR_9.tbsResponseData.responses.val[VAR_11].certID.issuerNameHash);
 if (VAR_10 != 0)
     continue;

 switch (VAR_9.tbsResponseData.responses.val[VAR_11].certStatus.element) {
 case 130:
     break;
 case 129:
 case 128:
     continue;
 }


 if (VAR_9.tbsResponseData.responses.val[VAR_11].thisUpdate >
     VAR_2 + VAR_1->ocsp_time_diff)
     continue;


 if (VAR_9.tbsResponseData.responses.val[VAR_11].nextUpdate) {
     if (*VAR_9.tbsResponseData.responses.val[VAR_11].nextUpdate < VAR_2)
  continue;
     *VAR_7 = *VAR_9.tbsResponseData.responses.val[VAR_11].nextUpdate;
 } else
     *VAR_7 = VAR_2;

 FUNC_4(&VAR_9);
 return 0;
    }

    FUNC_4(&VAR_9);

    {
 hx509_name VAR_12;
 char *VAR_13;

 VAR_10 = FUNC_5(VAR_3, &VAR_12);
 if (VAR_10) {
     FUNC_6(VAR_1);
     goto out;
 }
 VAR_10 = FUNC_8(VAR_12, &VAR_13);
 FUNC_7(&VAR_12);
 if (VAR_10) {
     FUNC_6(VAR_1);
     goto out;
 }
 FUNC_9(VAR_1, 0, VAR_0,
          "Certificate %s not in OCSP response "
          "or not good",
          VAR_13);
 FUNC_3(VAR_13);
    }
out:
    return VAR_0;
}
