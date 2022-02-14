
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gss_OID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

gss_OID
FUNC_2(const char *VAR_3)
{
    if (FUNC_1(VAR_3, "krb5") == 0)
 return VAR_1;
    else if (FUNC_1(VAR_3, "spnego") == 0)
 return VAR_2;
    else if (FUNC_1(VAR_3, "no-oid") == 0)
 return VAR_0;
    else
 FUNC_0 (1, "Unknown mechanism '%s' (spnego, krb5, no-oid)", VAR_3);
}
