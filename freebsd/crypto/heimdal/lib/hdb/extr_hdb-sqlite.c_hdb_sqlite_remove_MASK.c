
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_principal ;
struct TYPE_4__ {int db; int * remove; } ;
typedef TYPE_1__ hdb_sqlite_db ;
struct TYPE_5__ {scalar_t__ hdb_db; } ;
typedef TYPE_2__ HDB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,char**) ;
 int FUNC_4 (int *,int,char*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_3, HDB *VAR_4,
                  krb5_const_principal VAR_5)
{
    krb5_error_code VAR_6;
    char *VAR_7;
    hdb_sqlite_db *VAR_8 = (hdb_sqlite_db*)(VAR_4->hdb_db);
    sqlite3_stmt *VAR_9 = VAR_8->remove;

    VAR_6 = FUNC_3(VAR_3, VAR_5, &VAR_7);
    if (VAR_6) {
        FUNC_0(VAR_7);
        return VAR_6;
    }

    FUNC_4(VAR_9, 1, VAR_7, -1, VAR_2);

    VAR_6 = FUNC_1(VAR_3, VAR_8->db, VAR_9);
    if (VAR_6 != VAR_1) {
 VAR_6 = VAR_0;
        FUNC_2(VAR_3, VAR_6,
                              "sqlite remove failed: %d",
                              VAR_6);
    } else
        VAR_6 = 0;

    FUNC_5(VAR_9);
    FUNC_6(VAR_9);

    return VAR_6;
}
