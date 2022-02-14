
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_realm ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int *) ;
 int FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_1,
    krb5_principal VAR_2,
    const char *VAR_3,
    krb5_principal *VAR_4)
{
    krb5_const_realm VAR_5;
    if(VAR_3)
 return FUNC_1(VAR_1, VAR_3, VAR_4);

    VAR_5 = FUNC_2(VAR_1, VAR_2);
    return FUNC_0(VAR_1, VAR_4, VAR_5,
          VAR_0, VAR_5, ((void*)0));
}
