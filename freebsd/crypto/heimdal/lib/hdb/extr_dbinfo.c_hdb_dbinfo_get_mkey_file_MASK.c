
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdb_dbinfo {char const* mkey_file; } ;
typedef int krb5_context ;



const char *
FUNC_0(krb5_context VAR_0, struct hdb_dbinfo *VAR_1)
{
    return VAR_1->mkey_file;
}
