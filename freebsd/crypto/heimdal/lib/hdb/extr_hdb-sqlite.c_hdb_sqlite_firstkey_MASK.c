
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_5__ {int get_all_entries; } ;
typedef TYPE_1__ hdb_sqlite_db ;
typedef int hdb_entry_ex ;
struct TYPE_6__ {scalar_t__ hdb_db; } ;
typedef TYPE_2__ HDB ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*,unsigned int,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_0, HDB *VAR_1, unsigned VAR_2,
                    hdb_entry_ex *VAR_3)
{
    hdb_sqlite_db *VAR_4 = (hdb_sqlite_db *) VAR_1->hdb_db;
    krb5_error_code VAR_5;

    FUNC_1(VAR_4->get_all_entries);

    VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if(VAR_5)
        return VAR_5;

    return 0;
}
