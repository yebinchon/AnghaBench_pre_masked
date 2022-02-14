
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_11__ {int match; scalar_t__ timenow; int * subject_id; int * issuer_name; int * serial; } ;
typedef TYPE_3__ hx509_query ;
typedef int hx509_context ;
typedef int hx509_certs ;
typedef int * hx509_cert ;
typedef int c ;
struct TYPE_9__ {int issuer; int serialNumber; } ;
struct TYPE_10__ {int subjectKeyIdentifier; TYPE_1__ issuerAndSerialNumber; } ;
struct TYPE_12__ {int element; TYPE_2__ u; } ;
typedef int Certificate ;
typedef TYPE_4__ CMSIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;


 int FUNC_1 (int ,int ,TYPE_3__*,int **) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,char*,...) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_4__*,char**) ;

__attribute__((used)) static int
FUNC_7(hx509_context VAR_7,
     CMSIdentifier *VAR_8,
     hx509_certs VAR_9,
     time_t VAR_10,
     hx509_cert *VAR_11,
     int VAR_12)
{
    hx509_query VAR_13;
    hx509_cert VAR_14;
    Certificate VAR_15;
    int VAR_16;

    FUNC_4(&VAR_15, 0, sizeof(VAR_15));
    FUNC_0(&VAR_13);

    *VAR_11 = ((void*)0);

    switch (VAR_8->element) {
    case 129:
 VAR_13.serial = &VAR_8->u.issuerAndSerialNumber.serialNumber;
 VAR_13.issuer_name = &VAR_8->u.issuerAndSerialNumber.issuer;
 VAR_13.match = VAR_4|VAR_3;
 break;
    case 128:
 VAR_13.subject_id = &VAR_8->u.subjectKeyIdentifier;
 VAR_13.match = VAR_5;
 break;
    default:
 FUNC_3(VAR_7, 0, VAR_1,
          "unknown CMS identifier element");
 return VAR_1;
    }

    VAR_13.match |= VAR_12;

    VAR_13.match |= VAR_6;
    if (VAR_10)
 VAR_13.timenow = VAR_10;
    else
 VAR_13.timenow = FUNC_5(((void*)0));

    VAR_16 = FUNC_1(VAR_7, VAR_9, &VAR_13, &VAR_14);
    if (VAR_16 == VAR_0) {
 char *VAR_17;

 VAR_16 = FUNC_6(VAR_7, VAR_8, &VAR_17);
 if (VAR_16 == 0) {
     FUNC_3(VAR_7, 0,
       VAR_1,
       "Failed to find %s", VAR_17);
 } else
     FUNC_2(VAR_7);
 return VAR_1;
    } else if (VAR_16) {
 FUNC_3(VAR_7, VAR_2,
          VAR_1,
          "Failed to find CMS id in cert store");
 return VAR_1;
    }

    *VAR_11 = VAR_14;

    return 0;
}
