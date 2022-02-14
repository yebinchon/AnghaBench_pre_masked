
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdb_dbinfo {int const* binding; void* log_file; void* acl_file; void* mkey_file; void* realm; void* dbname; void* label; } ;
typedef int krb5_context ;
typedef int krb5_config_binding ;


 int VAR_0 ;
 struct hdb_dbinfo* FUNC_0 (int,int) ;
 char* FUNC_1 (int ,int const*,char*,int *) ;
 int FUNC_2 (int ,int,char*) ;
 void* FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(krb5_context VAR_1,
    const krb5_config_binding *VAR_2,
    const char *VAR_3,
    struct hdb_dbinfo **VAR_4)
{
    struct hdb_dbinfo *VAR_5;
    const char *VAR_6;

    *VAR_4 = ((void*)0);

    VAR_6 = FUNC_1(VAR_1, VAR_2, "dbname", ((void*)0));
    if(VAR_6 == ((void*)0))
 return 0;

    VAR_5 = FUNC_0(1, sizeof(*VAR_5));
    if (VAR_5 == ((void*)0)) {
 FUNC_2(VAR_1, VAR_0, "malloc: out of memory");
 return VAR_0;
    }
    VAR_5->label = FUNC_3(VAR_3);
    VAR_5->dbname = FUNC_3(VAR_6);

    VAR_6 = FUNC_1(VAR_1, VAR_2, "realm", ((void*)0));
    if(VAR_6)
 VAR_5->realm = FUNC_3(VAR_6);
    VAR_6 = FUNC_1(VAR_1, VAR_2, "mkey_file", ((void*)0));
    if(VAR_6)
 VAR_5->mkey_file = FUNC_3(VAR_6);
    VAR_6 = FUNC_1(VAR_1, VAR_2, "acl_file", ((void*)0));
    if(VAR_6)
 VAR_5->acl_file = FUNC_3(VAR_6);
    VAR_6 = FUNC_1(VAR_1, VAR_2, "log_file", ((void*)0));
    if(VAR_6)
 VAR_5->log_file = FUNC_3(VAR_6);

    VAR_5->binding = VAR_2;

    *VAR_4 = VAR_5;
    return 0;
}
