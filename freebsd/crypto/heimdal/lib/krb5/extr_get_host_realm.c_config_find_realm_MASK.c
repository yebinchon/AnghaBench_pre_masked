
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* krb5_realm ;
typedef int krb5_context ;


 char** FUNC_0 (int ,int *,char*,char const*,int *) ;

__attribute__((used)) static int
FUNC_1(krb5_context VAR_0,
    const char *VAR_1,
    krb5_realm **VAR_2)
{
    char **VAR_3 = FUNC_0 (VAR_0, ((void*)0),
       "domain_realm",
       VAR_1,
       ((void*)0));

    if (VAR_3 == ((void*)0))
 return -1;
    *VAR_2 = VAR_3;
    return 0;
}
