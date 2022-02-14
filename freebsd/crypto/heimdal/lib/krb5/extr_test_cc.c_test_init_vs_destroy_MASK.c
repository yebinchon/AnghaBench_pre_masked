
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 scalar_t__ FUNC_0 (char**,char*,int ,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,char const*,int *,int *) ;
 scalar_t__ FUNC_9 (int ,char*,int *) ;
 int FUNC_10 (int ,int,scalar_t__,char*,...) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,char*,int *) ;

__attribute__((used)) static void
FUNC_13(krb5_context VAR_0, const char *VAR_1)
{
    krb5_error_code VAR_2;
    krb5_ccache VAR_3, VAR_4;
    krb5_principal VAR_5, VAR_6;
    char *VAR_7 = ((void*)0);

    VAR_2 = FUNC_12(VAR_0, "lha@SU.SE", &VAR_5);
    if (VAR_2)
 FUNC_10(VAR_0, 1, VAR_2, "krb5_parse_name");

    VAR_2 = FUNC_8(VAR_0, VAR_1, ((void*)0), &VAR_3);
    if (VAR_2)
 FUNC_10(VAR_0, 1, VAR_2, "krb5_cc_new_unique: %s", VAR_1);

    if (FUNC_0(&VAR_7, "%d:%d",
   FUNC_6(VAR_0, VAR_3),
   FUNC_4(VAR_0, VAR_3)) < 0 || VAR_7 == ((void*)0))
 FUNC_1(1, "malloc");


    VAR_2 = FUNC_9(VAR_0, VAR_7, &VAR_4);
    FUNC_2(VAR_7);
    if (VAR_2)
 FUNC_10(VAR_0, 1, VAR_2, "krb5_cc_resolve");

    FUNC_3(VAR_0, VAR_3);

    VAR_2 = FUNC_7(VAR_0, VAR_4, VAR_5);
    if (VAR_2)
 FUNC_10(VAR_0, 1, VAR_2, "krb5_cc_initialize");

    VAR_2 = FUNC_5(VAR_0, VAR_4, &VAR_6);
    if (VAR_2)
 FUNC_10(VAR_0, 1, VAR_2, "krb5_cc_get_principal");

    FUNC_3(VAR_0, VAR_4);
    FUNC_11(VAR_0, VAR_5);
    FUNC_11(VAR_0, VAR_6);
}
