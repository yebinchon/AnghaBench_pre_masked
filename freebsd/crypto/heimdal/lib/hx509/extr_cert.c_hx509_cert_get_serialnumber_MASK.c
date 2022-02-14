
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* hx509_cert ;
typedef int heim_integer ;
struct TYPE_7__ {TYPE_2__* data; } ;
struct TYPE_5__ {int serialNumber; } ;
struct TYPE_6__ {TYPE_1__ tbsCertificate; } ;


 int FUNC_0 (int *,int *) ;

int
FUNC_1(hx509_cert VAR_0, heim_integer *VAR_1)
{
    return FUNC_0(&VAR_0->data->tbsCertificate.serialNumber, VAR_1);
}
