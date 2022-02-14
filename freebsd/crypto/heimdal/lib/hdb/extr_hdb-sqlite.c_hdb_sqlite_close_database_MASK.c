
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int db; int get_all_entries; int remove; int update_entry; int delete_aliases; int add_alias; int add_principal; int add_entry; int get_ids; int fetch; int get_version; } ;
typedef TYPE_1__ hdb_sqlite_db ;
struct TYPE_5__ {scalar_t__ hdb_db; } ;
typedef TYPE_2__ HDB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_0, HDB *VAR_1)
{
    hdb_sqlite_db *VAR_2 = (hdb_sqlite_db *) VAR_1->hdb_db;

    FUNC_1(VAR_2->get_version);
    FUNC_1(VAR_2->fetch);
    FUNC_1(VAR_2->get_ids);
    FUNC_1(VAR_2->add_entry);
    FUNC_1(VAR_2->add_principal);
    FUNC_1(VAR_2->add_alias);
    FUNC_1(VAR_2->delete_aliases);
    FUNC_1(VAR_2->update_entry);
    FUNC_1(VAR_2->remove);
    FUNC_1(VAR_2->get_all_entries);

    FUNC_0(VAR_2->db);

    return 0;
}
