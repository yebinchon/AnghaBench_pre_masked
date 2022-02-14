
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ssize_t ;
typedef int hx509_context ;
struct TYPE_7__ {int length; int data; } ;
struct TYPE_8__ {int serialNumber; int issuer; } ;
struct TYPE_6__ {TYPE_2__ subjectKeyIdentifier; TYPE_3__ issuerAndSerialNumber; } ;
struct TYPE_9__ {int element; TYPE_1__ u; } ;
typedef TYPE_2__ KeyIdentifier ;
typedef TYPE_3__ IssuerAndSerialNumber ;
typedef TYPE_4__ CMSIdentifier ;


 int VAR_0 ;
 int FUNC_0 (int *,char**) ;
 int FUNC_1 (char**,char*,...) ;


 int FUNC_2 (int *,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,char**) ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_1,
        CMSIdentifier *VAR_2,
        char **VAR_3)
{
    int VAR_4;

    *VAR_3 = ((void*)0);
    switch (VAR_2->element) {
    case 129: {
 IssuerAndSerialNumber *VAR_5;
 char *VAR_6, *VAR_7;

 VAR_5 = &VAR_2->u.issuerAndSerialNumber;

 VAR_4 = FUNC_0(&VAR_5->issuer, &VAR_7);
 if(VAR_4)
     return VAR_4;
 VAR_4 = FUNC_2(&VAR_5->serialNumber, &VAR_6);
 if (VAR_4) {
     FUNC_3(VAR_7);
     return VAR_4;
 }
 FUNC_1(VAR_3, "certificate issued by %s with serial number %s",
   VAR_7, VAR_6);
 FUNC_3(VAR_7);
 FUNC_3(VAR_6);
 break;
    }
    case 128: {
 KeyIdentifier *VAR_8 = &VAR_2->u.subjectKeyIdentifier;
 char *VAR_9;
 ssize_t VAR_10;

 VAR_10 = FUNC_4(VAR_8->data, VAR_8->length, &VAR_9);
 if (VAR_10 < 0)
     return VAR_0;

 FUNC_1(VAR_3, "certificate with id %s", VAR_9);
 FUNC_3(VAR_9);
 break;
    }
    default:
 FUNC_1(VAR_3, "certificate have unknown CMSidentifier type");
 break;
    }
    if (*VAR_3 == ((void*)0))
 return VAR_0;
    return 0;
}
