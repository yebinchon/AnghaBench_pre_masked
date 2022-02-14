
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hx509_crypto ;
struct TYPE_6__ {scalar_t__ length; int * data; } ;
typedef TYPE_2__ heim_octet_string ;
struct TYPE_5__ {int c; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;

int
FUNC_4(hx509_crypto VAR_2, heim_octet_string *VAR_3)
{
    VAR_3->length = FUNC_0(VAR_2->c);
    VAR_3->data = FUNC_3(VAR_3->length);
    if (VAR_3->data == ((void*)0)) {
 VAR_3->length = 0;
 return VAR_0;
    }

    if (FUNC_1(VAR_3->data, VAR_3->length) <= 0) {
 FUNC_2(VAR_3->data);
 VAR_3->data = ((void*)0);
 VAR_3->length = 0;
 return VAR_1;
    }
    return 0;
}
