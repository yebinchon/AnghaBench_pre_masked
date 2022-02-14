
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int len; TYPE_5__* val; } ;
struct TYPE_9__ {int length; int data; } ;
struct TYPE_10__ {TYPE_1__ byKey; int byName; } ;
struct TYPE_11__ {int element; TYPE_2__ u; } ;
struct TYPE_15__ {TYPE_6__ responses; int producedAt; TYPE_3__ responderID; } ;
struct TYPE_16__ {TYPE_7__ tbsResponseData; } ;
struct revoke_ocsp {scalar_t__ certs; TYPE_8__ ocsp; int * path; } ;
typedef int ocsp ;
typedef int hx509_name ;
typedef int hx509_context ;
struct TYPE_12__ {int element; } ;
struct TYPE_13__ {int thisUpdate; scalar_t__ nextUpdate; TYPE_4__ certStatus; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;





 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct revoke_ocsp*) ;
 int FUNC_5 (int ,int ,char**) ;
 int FUNC_6 (int ,scalar_t__,int ,int *) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char**) ;
 int FUNC_9 (int ,struct revoke_ocsp*) ;
 int FUNC_10 (struct revoke_ocsp*,int ,int) ;
 char* FUNC_11 (int ) ;
 int * VAR_2 ;
 int * FUNC_12 (char const*) ;

int
FUNC_13(hx509_context VAR_3, const char *VAR_4, FILE *VAR_5)
{
    struct revoke_ocsp VAR_6;
    int VAR_7;
    size_t VAR_8;

    if (VAR_5 == ((void*)0))
 VAR_5 = VAR_2;

    FUNC_10(&VAR_6, 0, sizeof(VAR_6));

    VAR_6.path = FUNC_12(VAR_4);
    if (VAR_6.path == ((void*)0))
 return VAR_0;

    VAR_7 = FUNC_9(VAR_3, &VAR_6);
    if (VAR_7) {
 FUNC_4(&VAR_6);
 return VAR_7;
    }

    FUNC_2(VAR_5, "signer: ");

    switch(VAR_6.ocsp.tbsResponseData.responderID.element) {
    case 128: {
 hx509_name VAR_9;
 char *VAR_10;
 FUNC_1(&VAR_6.ocsp.tbsResponseData.responderID.u.byName, &VAR_9);
 FUNC_8(VAR_9, &VAR_10);
 FUNC_7(&VAR_9);
 FUNC_2(VAR_5, " byName: %s\n", VAR_10);
 FUNC_3(VAR_10);
 break;
    }
    case 129: {
 char *VAR_11;
 FUNC_5(VAR_6.ocsp.tbsResponseData.responderID.u.byKey.data,
     VAR_6.ocsp.tbsResponseData.responderID.u.byKey.length,
     &VAR_11);
 FUNC_2(VAR_5, " byKey: %s\n", VAR_11);
 FUNC_3(VAR_11);
 break;
    }
    default:
 FUNC_0("choice_OCSPResponderID unknown");
 break;
    }

    FUNC_2(VAR_5, "producedAt: %s\n",
     FUNC_11(VAR_6.ocsp.tbsResponseData.producedAt));

    FUNC_2(VAR_5, "replies: %d\n", VAR_6.ocsp.tbsResponseData.responses.len);

    for (VAR_8 = 0; VAR_8 < VAR_6.ocsp.tbsResponseData.responses.len; VAR_8++) {
 const char *VAR_12;
 switch (VAR_6.ocsp.tbsResponseData.responses.val[VAR_8].certStatus.element) {
 case 132:
     VAR_12 = "good";
     break;
 case 131:
     VAR_12 = "revoked";
     break;
 case 130:
     VAR_12 = "unknown";
     break;
 default:
     VAR_12 = "element unknown";
 }

 FUNC_2(VAR_5, "\t%zu. status: %s\n", VAR_8, VAR_12);

 FUNC_2(VAR_5, "\tthisUpdate: %s\n",
  FUNC_11(VAR_6.ocsp.tbsResponseData.responses.val[VAR_8].thisUpdate));
 if (VAR_6.ocsp.tbsResponseData.responses.val[VAR_8].nextUpdate)
     FUNC_2(VAR_5, "\tproducedAt: %s\n",
      FUNC_11(VAR_6.ocsp.tbsResponseData.responses.val[VAR_8].thisUpdate));

    }

    FUNC_2(VAR_5, "appended certs:\n");
    if (VAR_6.certs)
 VAR_7 = FUNC_6(VAR_3, VAR_6.certs, VAR_1, VAR_5);

    FUNC_4(&VAR_6);
    return VAR_7;
}
