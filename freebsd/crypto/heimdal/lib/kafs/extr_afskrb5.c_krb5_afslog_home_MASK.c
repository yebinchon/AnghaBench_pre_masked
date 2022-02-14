
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_realm ;
typedef int krb5_ccache ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char const*,int ,int ,char const*) ;

krb5_error_code
FUNC_2(krb5_context VAR_0,
   krb5_ccache VAR_1,
   const char *VAR_2,
   krb5_const_realm VAR_3,
   const char *VAR_4)
{
    return FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, FUNC_0(), VAR_4);
}
