
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int * db; int db_file; } ;
typedef TYPE_1__ hdb_sqlite_db ;
struct TYPE_5__ {scalar_t__ hdb_db; } ;
typedef TYPE_2__ HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int **,int,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_2, HDB *VAR_3, int VAR_4)
{
    int VAR_5;
    hdb_sqlite_db *VAR_6 = (hdb_sqlite_db*) VAR_3->hdb_db;

    VAR_5 = FUNC_4(VAR_6->db_file, &VAR_6->db,
                          VAR_1 | VAR_4, ((void*)0));

    if (VAR_5) {
        if (VAR_6->db) {
     VAR_5 = VAR_0;
            FUNC_1(VAR_2, VAR_5,
                                  "Error opening sqlite database %s: %s",
                                  VAR_6->db_file, FUNC_3(VAR_6->db));
            FUNC_2(VAR_6->db);
            VAR_6->db = ((void*)0);
        } else
     VAR_5 = FUNC_0(VAR_2);
        return VAR_5;
    }

    return 0;
}
