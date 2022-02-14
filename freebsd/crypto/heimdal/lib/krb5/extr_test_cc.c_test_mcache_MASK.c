
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char const*,char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 char* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 char* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_10 (int ,char*,int *) ;
 int VAR_1 ;
 int FUNC_11 (int ,int,scalar_t__,char*) ;
 int FUNC_12 (int ,int,char*) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,char*,int *) ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_16(krb5_context VAR_2)
{
    krb5_error_code VAR_3;
    krb5_ccache VAR_4, VAR_5;
    const char *VAR_6, *VAR_7;
    char *VAR_8;
    krb5_principal VAR_9, VAR_10;

    VAR_3 = FUNC_14(VAR_2, "lha@SU.SE", &VAR_9);
    if (VAR_3)
 FUNC_11(VAR_2, 1, VAR_3, "krb5_parse_name");

    VAR_3 = FUNC_9(VAR_2, VAR_1, ((void*)0), &VAR_4);
    if (VAR_3)
 FUNC_11(VAR_2, 1, VAR_3, "krb5_cc_new_unique");

    VAR_3 = FUNC_8(VAR_2, VAR_4, VAR_9);
    if (VAR_3)
 FUNC_11(VAR_2, 1, VAR_3, "krb5_cc_initialize");

    VAR_6 = FUNC_5(VAR_2, VAR_4);
    if (VAR_6 == ((void*)0))
 FUNC_12(VAR_2, 1, "krb5_cc_get_name");

    VAR_7 = FUNC_7(VAR_2, VAR_4);
    if (VAR_7 == ((void*)0))
 FUNC_12(VAR_2, 1, "krb5_cc_get_name");

    if (FUNC_0(&VAR_8, "%s:%s", VAR_7, VAR_6) < 0 || VAR_8 == ((void*)0))
 FUNC_1(1, "malloc");

    FUNC_3(VAR_2, VAR_4);

    VAR_3 = FUNC_10(VAR_2, VAR_8, &VAR_5);
    if (VAR_3)
 FUNC_11(VAR_2, 1, VAR_3, "krb5_cc_resolve");

    VAR_3 = FUNC_6(VAR_2, VAR_5, &VAR_10);
    if (VAR_3)
 FUNC_11(VAR_2, 1, VAR_3, "krb5_cc_get_principal");

    if (FUNC_15(VAR_2, VAR_9, VAR_10) == VAR_0)
 FUNC_12(VAR_2, 1, "p != p2");

    FUNC_4(VAR_2, VAR_5);
    FUNC_13(VAR_2, VAR_9);
    FUNC_13(VAR_2, VAR_10);

    VAR_3 = FUNC_10(VAR_2, VAR_8, &VAR_5);
    if (VAR_3)
 FUNC_11(VAR_2, 1, VAR_3, "krb5_cc_resolve");

    VAR_3 = FUNC_6(VAR_2, VAR_5, &VAR_10);
    if (VAR_3 == 0)
 FUNC_12(VAR_2, 1, "krb5_cc_get_principal");

    FUNC_4(VAR_2, VAR_5);
    FUNC_2(VAR_8);
}
