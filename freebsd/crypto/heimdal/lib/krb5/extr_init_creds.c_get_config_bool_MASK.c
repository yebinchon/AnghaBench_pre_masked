
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;


 scalar_t__ FUNC_0 (int ,int *,scalar_t__,char*,char const*,char const*,...) ;

__attribute__((used)) static krb5_boolean
FUNC_1 (krb5_context VAR_0,
   krb5_boolean VAR_1,
   const char *VAR_2,
   const char *VAR_3)
{
    krb5_boolean VAR_4;

    VAR_4 = FUNC_0(VAR_0, ((void*)0), VAR_1,
         "realms", VAR_2, VAR_3, ((void*)0));
    if (VAR_4 != VAR_1)
 return VAR_4;
    VAR_4 = FUNC_0 (VAR_0, ((void*)0), VAR_1,
          "libdefaults", VAR_3, ((void*)0));
    if (VAR_4 != VAR_1)
 return VAR_4;
    return VAR_1;
}
