
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_keytab_entry ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int entry ;


 int FUNC_0 (int ,int,scalar_t__,char*) ;
 int FUNC_1 (int ,int,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char const*,int *) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_7(krb5_context VAR_0, const char *VAR_1)
{
    krb5_error_code VAR_2;
    krb5_keytab VAR_3;
    krb5_keytab_entry VAR_4;

    VAR_2 = FUNC_5(VAR_0, VAR_1, &VAR_3);
    if (VAR_2)
 FUNC_0(VAR_0, 1, VAR_2, "krb5_kt_resolve");

    FUNC_6(&VAR_4, 0, sizeof(VAR_4));

    FUNC_4(VAR_0, VAR_3, &VAR_4);

    VAR_2 = FUNC_3(VAR_0, VAR_3);
    if (VAR_2 == 0)
 FUNC_1(VAR_0, 1, "supposed to be empty keytab isn't");

    VAR_2 = FUNC_2(VAR_0, VAR_3);
    if (VAR_2)
 FUNC_0(VAR_0, 1, VAR_2, "krb5_kt_close");
}
