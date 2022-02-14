
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ gss_name_t ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,char const*,scalar_t__*) ;

__attribute__((used)) static OM_uint32
FUNC_1 (OM_uint32 *VAR_5,
   krb5_context VAR_6,
   const char *VAR_7,
   gss_name_t *VAR_8)
{
    krb5_principal VAR_9;
    krb5_error_code VAR_10;

    VAR_10 = FUNC_0 (VAR_6, VAR_7, &VAR_9);

    if (VAR_10 == 0) {
 *VAR_8 = (gss_name_t)VAR_9;
 return VAR_1;
    }
    *VAR_5 = VAR_10;

    if (VAR_10 == VAR_3 || VAR_10 == VAR_4)
 return VAR_0;

    return VAR_2;
}
