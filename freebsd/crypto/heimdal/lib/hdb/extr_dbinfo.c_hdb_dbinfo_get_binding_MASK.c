
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdb_dbinfo {int const* binding; } ;
typedef int krb5_context ;
typedef int krb5_config_binding ;



const krb5_config_binding *
FUNC_0(krb5_context VAR_0, struct hdb_dbinfo *VAR_1)
{
    return VAR_1->binding;
}
