
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_name ;
typedef int hx509_cert ;
struct TYPE_5__ {int serialNumber; int issuer; } ;
struct TYPE_6__ {TYPE_1__ issuerAndSerialNumber; int subjectKeyIdentifier; } ;
struct TYPE_7__ {TYPE_2__ u; int element; } ;
typedef TYPE_3__ CMSIdentifier ;




 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int const,int *) ;
 int FUNC_4 (int const,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(const hx509_cert VAR_2,
     int VAR_3,
     CMSIdentifier *VAR_4)
{
    int VAR_5;

    switch (VAR_3) {
    case 128:
 VAR_4->element = VAR_1;
 VAR_5 = FUNC_1(FUNC_2(VAR_2),
         &VAR_4->u.subjectKeyIdentifier);
 if (VAR_5 == 0)
     break;

    case 129: {
 hx509_name VAR_6;

 VAR_4->element = VAR_0;
 VAR_5 = FUNC_3(VAR_2, &VAR_6);
 if (VAR_5)
     return VAR_5;
 VAR_5 = FUNC_6(VAR_6, &VAR_4->u.issuerAndSerialNumber.issuer);
 FUNC_5(&VAR_6);
 if (VAR_5)
     return VAR_5;

 VAR_5 = FUNC_4(VAR_2, &VAR_4->u.issuerAndSerialNumber.serialNumber);
 break;
    }
    default:
 FUNC_0("CMS fill identifier with unknown type");
    }
    return VAR_5;
}
