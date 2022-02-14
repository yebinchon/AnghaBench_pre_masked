
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_2__ {int length; int data; } ;
typedef TYPE_1__ heim_octet_string ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,scalar_t__*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(hx509_context VAR_1, void *VAR_2, hx509_cert VAR_3)
{
    heim_octet_string *VAR_4 = VAR_2;
    time_t VAR_5;
    int VAR_6;

    VAR_6 = FUNC_2(VAR_0, 0, VAR_3, 0,
       VAR_4->data, VAR_4->length, &VAR_5);
    if (VAR_6) {
 char *VAR_7 = FUNC_1(VAR_1, VAR_6);
 FUNC_3("ocsp_verify: %s: %d\n", VAR_7, VAR_6);
 FUNC_0(VAR_7);
    } else
 FUNC_3("expire: %d\n", (int)VAR_5);

    return VAR_6;
}
