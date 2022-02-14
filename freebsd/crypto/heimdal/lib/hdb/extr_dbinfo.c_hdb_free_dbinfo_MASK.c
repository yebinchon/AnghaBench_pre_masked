
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdb_dbinfo {struct hdb_dbinfo* log_file; struct hdb_dbinfo* acl_file; struct hdb_dbinfo* mkey_file; struct hdb_dbinfo* dbname; struct hdb_dbinfo* realm; struct hdb_dbinfo* label; struct hdb_dbinfo* next; } ;
typedef int krb5_context ;


 int FUNC_0 (struct hdb_dbinfo*) ;

void
FUNC_1(krb5_context VAR_0, struct hdb_dbinfo **VAR_1)
{
    struct hdb_dbinfo *VAR_2, *VAR_3;

    for(VAR_2 = *VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
 VAR_3 = VAR_2->next;
 FUNC_0 (VAR_2->label);
 FUNC_0 (VAR_2->realm);
 FUNC_0 (VAR_2->dbname);
 FUNC_0 (VAR_2->mkey_file);
 FUNC_0 (VAR_2->acl_file);
 FUNC_0 (VAR_2->log_file);
 FUNC_0(VAR_2);
    }
    *VAR_1 = ((void*)0);
}
