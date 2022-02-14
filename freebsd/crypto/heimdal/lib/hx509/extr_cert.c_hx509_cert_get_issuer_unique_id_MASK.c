
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_3__* hx509_cert ;
typedef int heim_bit_string ;
struct TYPE_7__ {TYPE_2__* data; } ;
struct TYPE_5__ {int issuerUniqueID; } ;
struct TYPE_6__ {TYPE_1__ tbsCertificate; } ;


 int FUNC_0 (int ,char*,int ,int *) ;

int
FUNC_1(hx509_context VAR_0, hx509_cert VAR_1, heim_bit_string *VAR_2)
{
    return FUNC_0(VAR_0, "issuer", VAR_1->data->tbsCertificate.issuerUniqueID, VAR_2);
}
