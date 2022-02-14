
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_6__ {int db_file; } ;
typedef TYPE_1__ hdb_sqlite_db ;
struct TYPE_7__ {scalar_t__ hdb_db; } ;
typedef TYPE_2__ HDB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*,char const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_0, HDB *VAR_1, const char *VAR_2)
{
    hdb_sqlite_db *VAR_3 = (hdb_sqlite_db *) VAR_1->hdb_db;
    int VAR_4;

    FUNC_3(VAR_0, "hdb_sqlite_rename");

    if (FUNC_5(VAR_2, "sqlite:", 7) == 0)
 VAR_2 += 7;

    FUNC_1(VAR_0, VAR_1);

    VAR_4 = FUNC_4(VAR_3->db_file, VAR_2);
    FUNC_0(VAR_3->db_file);

    FUNC_2(VAR_0, VAR_1, VAR_2);

    return VAR_4;
}
