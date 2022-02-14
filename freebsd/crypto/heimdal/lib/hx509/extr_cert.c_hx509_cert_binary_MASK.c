
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_3__ {size_t length; int * data; } ;
typedef TYPE_1__ heim_octet_string ;


 int FUNC_0 (int ,int *,size_t,int ,size_t*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

int
FUNC_3(hx509_context VAR_1, hx509_cert VAR_2, heim_octet_string *VAR_3)
{
    size_t VAR_4;
    int VAR_5;

    VAR_3->data = ((void*)0);
    VAR_3->length = 0;

    FUNC_0(VAR_0, VAR_3->data, VAR_3->length,
         FUNC_2(VAR_2), &VAR_4, VAR_5);
    if (VAR_5) {
 VAR_3->data = ((void*)0);
 VAR_3->length = 0;
 return VAR_5;
    }
    if (VAR_3->length != VAR_4)
 FUNC_1("internal ASN.1 encoder error");

    return VAR_5;
}
