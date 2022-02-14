
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* hx509_crypto ;
typedef int heim_octet_string ;
struct TYPE_5__ {scalar_t__ length; int * data; } ;
struct TYPE_4__ {TYPE_3__ key; int c; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__) ;

int
FUNC_5(hx509_crypto VAR_2, heim_octet_string *VAR_3)
{
    if (VAR_2->key.data) {
 FUNC_3(VAR_2->key.data);
 VAR_2->key.length = 0;
    }

    VAR_2->key.length = FUNC_0(VAR_2->c);
    VAR_2->key.data = FUNC_4(VAR_2->key.length);
    if (VAR_2->key.data == ((void*)0)) {
 VAR_2->key.length = 0;
 return VAR_0;
    }
    if (FUNC_1(VAR_2->key.data, VAR_2->key.length) <= 0) {
 FUNC_3(VAR_2->key.data);
 VAR_2->key.data = ((void*)0);
 VAR_2->key.length = 0;
 return VAR_1;
    }
    if (VAR_3)
 return FUNC_2(&VAR_2->key, VAR_3);
    else
 return 0;
}
