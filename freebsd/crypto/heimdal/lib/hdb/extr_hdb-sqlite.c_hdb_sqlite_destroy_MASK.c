
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_7__ {TYPE_2__* db_file; } ;
typedef TYPE_1__ hdb_sqlite_db ;
struct TYPE_8__ {struct TYPE_8__* hdb_db; } ;
typedef TYPE_2__ HDB ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_0, HDB *VAR_1)
{
    int VAR_2;
    hdb_sqlite_db *VAR_3;

    VAR_2 = FUNC_1(VAR_0, VAR_1);

    FUNC_2(VAR_0, VAR_1);

    VAR_3 = (hdb_sqlite_db*)(VAR_1->hdb_db);

    FUNC_0(VAR_3->db_file);
    FUNC_0(VAR_1->hdb_db);
    FUNC_0(VAR_1);

    return VAR_2;
}
