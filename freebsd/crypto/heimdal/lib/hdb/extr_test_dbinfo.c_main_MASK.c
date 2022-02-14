
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdb_dbinfo {int dummy; } ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int,char**,int*) ;
 char* FUNC_3 (int ,struct hdb_dbinfo*) ;
 char* FUNC_4 (int ,struct hdb_dbinfo*) ;
 char* FUNC_5 (int ,struct hdb_dbinfo*) ;
 char* FUNC_6 (int ,struct hdb_dbinfo*) ;
 struct hdb_dbinfo* FUNC_7 (struct hdb_dbinfo*,struct hdb_dbinfo*) ;
 char* FUNC_8 (int ,struct hdb_dbinfo*) ;
 int FUNC_9 (int ,struct hdb_dbinfo**) ;
 int FUNC_10 (int ,struct hdb_dbinfo**) ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (int ,int,int,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,int ,int ) ;
 int VAR_2 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,char const*) ;
 int FUNC_17 (char*) ;
 scalar_t__ VAR_3 ;

int
FUNC_18(int VAR_4, char **VAR_5)
{
    struct hdb_dbinfo *VAR_6, *VAR_7;
    krb5_context VAR_8;
    int VAR_9, VAR_10 = 0;

    FUNC_17(VAR_5[0]);

    if(FUNC_2(VAR_0, VAR_2, VAR_4, VAR_5, &VAR_10))
 FUNC_14(1, VAR_0, VAR_2);

    if(VAR_1)
 FUNC_14(0, VAR_0, VAR_2);

    if(VAR_3){
 FUNC_15(((void*)0));
 FUNC_1(0);
    }

    VAR_9 = FUNC_13(&VAR_8);
    if (VAR_9)
 FUNC_0 (1, "krb5_init_context failed: %d", VAR_9);

    VAR_9 = FUNC_10(VAR_8, &VAR_6);
    if (VAR_9)
 FUNC_11(VAR_8, 1, VAR_9, "hdb_get_dbinfo");

    VAR_7 = ((void*)0);
    while ((VAR_7 = FUNC_7(VAR_6, VAR_7)) != ((void*)0)) {
 const char *VAR_11;
 VAR_11 = FUNC_5(VAR_8, VAR_7);
 FUNC_16("label: %s\n", VAR_11 ? VAR_11 : "no label");
 VAR_11 = FUNC_8(VAR_8, VAR_7);
 FUNC_16("\trealm: %s\n", VAR_11 ? VAR_11 : "no realm");
 VAR_11 = FUNC_4(VAR_8, VAR_7);
 FUNC_16("\tdbname: %s\n", VAR_11 ? VAR_11 : "no dbname");
 VAR_11 = FUNC_6(VAR_8, VAR_7);
 FUNC_16("\tmkey_file: %s\n", VAR_11 ? VAR_11 : "no mkey file");
 VAR_11 = FUNC_3(VAR_8, VAR_7);
 FUNC_16("\tacl_file: %s\n", VAR_11 ? VAR_11 : "no acl file");
    }

    FUNC_9(VAR_8, &VAR_6);

    FUNC_12(VAR_8);

    return 0;
}
