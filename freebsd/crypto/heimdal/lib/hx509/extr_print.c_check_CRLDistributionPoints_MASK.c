
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct cert_status {int haveCRLDP; } ;
typedef int hx509_validate_ctx ;
struct TYPE_19__ {int length; int data; } ;
typedef TYPE_5__ heim_any ;
typedef enum critical_flag { ____Placeholder_critical_flag } critical_flag ;
struct TYPE_22__ {size_t len; TYPE_2__* val; } ;
struct TYPE_17__ {size_t len; int * val; } ;
struct TYPE_18__ {TYPE_3__ fullName; } ;
struct TYPE_21__ {int element; TYPE_4__ u; } ;
struct TYPE_15__ {int length; int data; } ;
struct TYPE_20__ {TYPE_1__ extnValue; } ;
struct TYPE_16__ {TYPE_5__* distributionPoint; } ;
typedef int GeneralName ;
typedef TYPE_6__ Extension ;
typedef TYPE_7__ DistributionPointName ;
typedef TYPE_8__ CRLDistributionPoints ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cert_status*,int,TYPE_6__ const*) ;


 int FUNC_1 (int ,int ,TYPE_8__*,size_t*) ;
 int FUNC_2 (int ,int ,TYPE_7__*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int *,char**) ;
 int FUNC_7 (int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_8(hx509_validate_ctx VAR_2,
      struct cert_status *VAR_3,
      enum critical_flag VAR_4,
      const Extension *VAR_5)
{
    CRLDistributionPoints VAR_6;
    size_t VAR_7;
    int VAR_8;
    size_t VAR_9;

    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

    VAR_8 = FUNC_1(VAR_5->extnValue.data,
           VAR_5->extnValue.length,
           &VAR_6, &VAR_7);
    if (VAR_8) {
 FUNC_7(VAR_2, VAR_0,
         "Decoding CRL Distribution Points failed: %d\n", VAR_8);
 return 1;
    }

    FUNC_7(VAR_2, VAR_1, "CRL Distribution Points:\n");
    for (VAR_9 = 0 ; VAR_9 < VAR_6.len; VAR_9++) {
 if (VAR_6.val[VAR_9].distributionPoint) {
     DistributionPointName VAR_10;
     heim_any *VAR_11 = VAR_6.val[VAR_9].distributionPoint;
     size_t VAR_12;

     VAR_8 = FUNC_2(VAR_11->data, VAR_11->length,
            &VAR_10, ((void*)0));
     if (VAR_8) {
  FUNC_7(VAR_2, VAR_0,
          "Failed to parse CRL Distribution Point Name: %d\n", VAR_8);
  continue;
     }

     switch (VAR_10.element) {
     case 129:
  FUNC_7(VAR_2, VAR_1, "Fullname:\n");

  for (VAR_12 = 0 ; VAR_12 < VAR_10.u.fullName.len; VAR_12++) {
      char *VAR_13;
      GeneralName *VAR_14 = &VAR_10.u.fullName.val[VAR_12];

      VAR_8 = FUNC_6(VAR_14, &VAR_13);
      if (VAR_8 == 0 && VAR_13 != ((void*)0)) {
   FUNC_7(VAR_2, VAR_1, "   %s\n", VAR_13);
   FUNC_3(VAR_13);
      }
  }
  break;
     case 128:
  FUNC_7(VAR_2, VAR_1,
          "Unknown nameRelativeToCRLIssuer");
  break;
     default:
  FUNC_7(VAR_2, VAR_0,
          "Unknown DistributionPointName");
  break;
     }
     FUNC_5(&VAR_10);
 }
    }
    FUNC_4(&VAR_6);

    VAR_3->haveCRLDP = 1;

    return 0;
}
