
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_context ;


 char* VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,int,char*) ;
 scalar_t__ FUNC_5 (char*,char const*) ;

__attribute__((used)) static void
FUNC_6(krb5_context VAR_1)
{
    krb5_error_code VAR_2;
    const char *VAR_3, *VAR_4 = VAR_0;
    char *VAR_5, *VAR_6, *VAR_7;

    VAR_3 = FUNC_2(VAR_1);
    if (VAR_3 == ((void*)0))
 FUNC_4 (VAR_1, 1, "krb5_cc_default_name 1 failed");
    VAR_5 = FUNC_0(VAR_3);

    VAR_2 = FUNC_3(VAR_1, ((void*)0));
    if (VAR_3 == ((void*)0))
 FUNC_4 (VAR_1, 1, "krb5_cc_set_default_name failed");

    VAR_3 = FUNC_2(VAR_1);
    if (VAR_3 == ((void*)0))
 FUNC_4 (VAR_1, 1, "krb5_cc_default_name 2 failed");
    VAR_6 = FUNC_0(VAR_3);

    if (FUNC_5(VAR_5, VAR_6) != 0)
 FUNC_4 (VAR_1, 1, "krb5_cc_default_name no longer same");

    VAR_2 = FUNC_3(VAR_1, VAR_4);
    if (VAR_3 == ((void*)0))
 FUNC_4 (VAR_1, 1, "krb5_cc_set_default_name 1 failed");

    VAR_3 = FUNC_2(VAR_1);
    if (VAR_3 == ((void*)0))
 FUNC_4 (VAR_1, 1, "krb5_cc_default_name 2 failed");
    VAR_7 = FUNC_0(VAR_3);





    if (FUNC_5(VAR_7, VAR_4) != 0)
 FUNC_4 (VAR_1, 1, "krb5_cc_set_default_name 1 failed");


    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
}
