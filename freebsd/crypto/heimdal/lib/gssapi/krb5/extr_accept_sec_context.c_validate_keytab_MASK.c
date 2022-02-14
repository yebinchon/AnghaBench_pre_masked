
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int **) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_0, const char *VAR_1, krb5_keytab *VAR_2)
{
    krb5_error_code VAR_3;

    VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
    if (VAR_3)
 return VAR_3;

    VAR_3 = FUNC_1(VAR_0, *VAR_2);
    if (VAR_3) {
 FUNC_0(VAR_0, *VAR_2);
 *VAR_2 = ((void*)0);
    }

    return VAR_3;
}
