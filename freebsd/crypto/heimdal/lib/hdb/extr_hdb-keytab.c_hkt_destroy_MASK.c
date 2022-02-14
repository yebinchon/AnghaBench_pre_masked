
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* hdb_keytab ;
struct TYPE_6__ {struct TYPE_6__* hdb_name; struct TYPE_6__* path; int hdb_db; } ;
typedef TYPE_1__ HDB ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_0, HDB *VAR_1)
{
    hdb_keytab VAR_2 = (hdb_keytab)VAR_1->hdb_db;
    krb5_error_code VAR_3;

    VAR_3 = FUNC_1 (VAR_0, VAR_1);

    FUNC_0(VAR_2->path);
    FUNC_0(VAR_2);

    FUNC_0(VAR_1->hdb_name);
    FUNC_0(VAR_1);
    return VAR_3;
}
