
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char**,char*,char const*,char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,scalar_t__,char*,...) ;
 int FUNC_4 (int ,int,char*,...) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,char const*,int *) ;
 scalar_t__ FUNC_7 (int ,char const*,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 char* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (int ,int ,char**) ;
 scalar_t__ FUNC_13 (int ,int ,int ,char**) ;
 scalar_t__ FUNC_14 (char const*,char*) ;

__attribute__((used)) static void
FUNC_15(krb5_context VAR_5)
{
    const char *VAR_6 = "lha@SU.SE";
    const char *VAR_7 = "lha";
    const char *VAR_8;
    krb5_error_code VAR_9;
    char *VAR_10;
    char *VAR_11 = ((void*)0);
    const char *VAR_12;

    krb5_principal VAR_13, VAR_14;

    VAR_9 = FUNC_6(VAR_5, VAR_6, &VAR_13);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    VAR_9 = FUNC_12(VAR_5, VAR_13, &VAR_10);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (FUNC_14(VAR_6, VAR_10)) {
 FUNC_4(VAR_5, 1, "%s != %s", VAR_6, VAR_10);
    }

    FUNC_2(VAR_10);

    VAR_9 = FUNC_13(VAR_5, VAR_13,
      VAR_3,
      &VAR_10);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (FUNC_14(VAR_7, VAR_10))
 FUNC_4(VAR_5, 1, "%s != %s", VAR_7, VAR_10);
    FUNC_2(VAR_10);

    VAR_12 = FUNC_10(VAR_5, VAR_13);

    if (FUNC_0(&VAR_11, "%s@%s", VAR_7, VAR_12) < 0 || VAR_11 == ((void*)0))
 FUNC_1(1, "malloc");

    VAR_9 = FUNC_6(VAR_5, VAR_11, &VAR_14);
    FUNC_2(VAR_11);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (!FUNC_8(VAR_5, VAR_13, VAR_14)) {
 FUNC_4(VAR_5, 1, "p != p2");
    }

    FUNC_5(VAR_5, VAR_14);

    VAR_9 = FUNC_11(VAR_5, "SU.SE");
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    VAR_9 = FUNC_13(VAR_5, VAR_13,
      VAR_4,
      &VAR_10);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (FUNC_14(VAR_7, VAR_10))
 FUNC_4(VAR_5, 1, "'%s' != '%s'", VAR_7, VAR_10);
    FUNC_2(VAR_10);

    VAR_9 = FUNC_6(VAR_5, VAR_7, &VAR_14);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (!FUNC_8(VAR_5, VAR_13, VAR_14))
 FUNC_4(VAR_5, 1, "p != p2");
    FUNC_5(VAR_5, VAR_14);

    VAR_9 = FUNC_12(VAR_5, VAR_13, &VAR_10);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (FUNC_14(VAR_6, VAR_10))
 FUNC_4(VAR_5, 1, "'%s' != '%s'", VAR_6, VAR_10);
    FUNC_2(VAR_10);

    VAR_9 = FUNC_11(VAR_5, "SAMBA.ORG");
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    VAR_9 = FUNC_6(VAR_5, VAR_7, &VAR_14);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (FUNC_8(VAR_5, VAR_13, VAR_14))
 FUNC_4(VAR_5, 1, "p == p2");

    if (!FUNC_9(VAR_5, VAR_13, VAR_14))
 FUNC_4(VAR_5, 1, "(ignoring realms) p != p2");

    VAR_9 = FUNC_12(VAR_5, VAR_14, &VAR_10);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (FUNC_14(VAR_6, VAR_10) == 0)
 FUNC_4(VAR_5, 1, "%s == %s", VAR_6, VAR_10);
    FUNC_2(VAR_10);

    FUNC_5(VAR_5, VAR_14);

    VAR_9 = FUNC_6(VAR_5, VAR_6, &VAR_14);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (!FUNC_8(VAR_5, VAR_13, VAR_14))
 FUNC_4(VAR_5, 1, "p != p2");

    VAR_9 = FUNC_12(VAR_5, VAR_14, &VAR_10);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (FUNC_14(VAR_6, VAR_10))
 FUNC_4(VAR_5, 1, "'%s' != '%s'", VAR_6, VAR_10);
    FUNC_2(VAR_10);

    FUNC_5(VAR_5, VAR_14);

    VAR_9 = FUNC_13(VAR_5, VAR_13,
      VAR_4,
      &VAR_10);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_unparse_name_short");

    if (FUNC_14(VAR_6, VAR_10) != 0)
 FUNC_4(VAR_5, 1, "'%s' != '%s'", VAR_6, VAR_10);
    FUNC_2(VAR_10);

    VAR_9 = FUNC_12(VAR_5, VAR_13, &VAR_10);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_unparse_name_short");

    if (FUNC_14(VAR_6, VAR_10))
 FUNC_4(VAR_5, 1, "'%s' != '%s'", VAR_6, VAR_10);
    FUNC_2(VAR_10);

    VAR_9 = FUNC_7(VAR_5, VAR_6,
    VAR_0,
    &VAR_14);
    if (!VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "Should have failed to parse %s a "
   "short name", VAR_6);

    VAR_9 = FUNC_7(VAR_5, VAR_7,
    VAR_0,
    &VAR_14);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    VAR_9 = FUNC_13(VAR_5, VAR_14,
      VAR_3,
      &VAR_10);
    FUNC_5(VAR_5, VAR_14);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_unparse_name_norealm");

    if (FUNC_14(VAR_7, VAR_10))
 FUNC_4(VAR_5, 1, "'%s' != '%s'", VAR_7, VAR_10);
    FUNC_2(VAR_10);

    VAR_9 = FUNC_7(VAR_5, VAR_7,
    VAR_1,
    &VAR_14);
    if (!VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "Should have failed to parse %s "
   "because it lacked a realm", VAR_7);

    VAR_9 = FUNC_7(VAR_5, VAR_6,
    VAR_1,
    &VAR_14);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    if (!FUNC_8(VAR_5, VAR_13, VAR_14))
 FUNC_4(VAR_5, 1, "p != p2");

    VAR_9 = FUNC_13(VAR_5, VAR_14,
      VAR_3,
      &VAR_10);
    FUNC_5(VAR_5, VAR_14);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_unparse_name_norealm");

    if (FUNC_14(VAR_7, VAR_10))
 FUNC_4(VAR_5, 1, "'%s' != '%s'", VAR_7, VAR_10);
    FUNC_2(VAR_10);

    FUNC_5(VAR_5, VAR_13);



    VAR_6 = "test\\ principal@SU.SE";
    VAR_8 = "test principal@SU.SE";

    VAR_9 = FUNC_7(VAR_5, VAR_6, 0, &VAR_13);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_parse_name");

    VAR_9 = FUNC_13(VAR_5, VAR_13, 0, &VAR_10);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_unparse_name_flags");

    if (FUNC_14(VAR_6, VAR_10))
 FUNC_4(VAR_5, 1, "q '%s' != '%s'", VAR_6, VAR_10);
    FUNC_2(VAR_10);

    VAR_9 = FUNC_13(VAR_5, VAR_13, VAR_2,
      &VAR_10);
    if (VAR_9)
 FUNC_3(VAR_5, 1, VAR_9, "krb5_unparse_name_flags");

    if (FUNC_14(VAR_8, VAR_10))
 FUNC_4(VAR_5, 1, "nq '%s' != '%s'", VAR_8, VAR_10);
    FUNC_2(VAR_10);

    FUNC_5(VAR_5, VAR_13);
}
