
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hx509_name ;
struct TYPE_6__ {size_t length; int data; } ;
typedef TYPE_2__ heim_octet_string ;
struct TYPE_5__ {int der_name; } ;


 int FUNC_0 (int ,int ,size_t,int *,size_t*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

int
FUNC_2(const hx509_name VAR_1, heim_octet_string *VAR_2)
{
    size_t VAR_3;
    int VAR_4;

    FUNC_0(VAR_0, VAR_2->data, VAR_2->length, &VAR_1->der_name, &VAR_3, VAR_4);
    if (VAR_4)
 return VAR_4;
    if (VAR_2->length != VAR_3)
 FUNC_1("internal ASN.1 encoder error");

    return 0;
}
