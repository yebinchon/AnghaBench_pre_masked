
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ hdb_sqlite_db ;
struct TYPE_5__ {scalar_t__ hdb_db; } ;
typedef TYPE_2__ HDB ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_0, HDB *VAR_1, sqlite3_stmt *VAR_2)
{
    int VAR_3;
    hdb_sqlite_db *VAR_4 = (hdb_sqlite_db *) VAR_1->hdb_db;

    VAR_3 = FUNC_0(VAR_0, VAR_4->db, VAR_2);
    FUNC_1(VAR_2);
    FUNC_2(VAR_2);

    return VAR_3;
}
