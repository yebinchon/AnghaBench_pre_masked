
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* hdb_keytab ;
struct TYPE_5__ {int hdb_db; } ;
struct TYPE_4__ {int * keytab; } ;
typedef TYPE_2__ HDB ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_0, HDB *VAR_1)
{
    hdb_keytab VAR_2 = (hdb_keytab)VAR_1->hdb_db;
    krb5_error_code VAR_3;

    FUNC_0(VAR_2->keytab);

    VAR_3 = FUNC_1(VAR_0, VAR_2->keytab);
    VAR_2->keytab = ((void*)0);

    return VAR_3;
}
