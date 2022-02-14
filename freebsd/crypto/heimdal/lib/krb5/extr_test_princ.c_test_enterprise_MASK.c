
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,scalar_t__,char*) ;
 int FUNC_2 (int ,int,char*,...) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int *) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,int ,char**) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8(krb5_context VAR_1)
{
    krb5_error_code VAR_2;
    char *VAR_3;
    krb5_principal VAR_4;

    VAR_2 = FUNC_5(VAR_1, "SAMBA.ORG");
    if (VAR_2)
 FUNC_1(VAR_1, 1, VAR_2, "krb5_parse_name");

    VAR_2 = FUNC_4(VAR_1, "lha@su.se@WIN.SU.SE",
    VAR_0, &VAR_4);
    if (VAR_2)
 FUNC_1(VAR_1, 1, VAR_2, "krb5_parse_name_flags");

    VAR_2 = FUNC_6(VAR_1, VAR_4, &VAR_3);
    if (VAR_2)
 FUNC_1(VAR_1, 1, VAR_2, "krb5_unparse_name");

    FUNC_3(VAR_1, VAR_4);

    if (FUNC_7(VAR_3, "lha\\@su.se@WIN.SU.SE") != 0)
 FUNC_2(VAR_1, 1, "enterprise name failed 1");
    FUNC_0(VAR_3);





    VAR_2 = FUNC_4(VAR_1, "lha\\@su.se@WIN.SU.SE",
    VAR_0, &VAR_4);
    if (VAR_2)
 FUNC_1(VAR_1, 1, VAR_2, "krb5_parse_name_flags");

    VAR_2 = FUNC_6(VAR_1, VAR_4, &VAR_3);
    if (VAR_2)
 FUNC_1(VAR_1, 1, VAR_2, "krb5_unparse_name");

    FUNC_3(VAR_1, VAR_4);
    if (FUNC_7(VAR_3, "lha\\@su.se\\@WIN.SU.SE@SAMBA.ORG") != 0)
 FUNC_2(VAR_1, 1, "enterprise name failed 2: %s", VAR_3);
    FUNC_0(VAR_3);





    VAR_2 = FUNC_4(VAR_1, "lha\\@su.se@WIN.SU.SE", 0, &VAR_4);
    if (VAR_2)
 FUNC_1(VAR_1, 1, VAR_2, "krb5_parse_name_flags");

    VAR_2 = FUNC_6(VAR_1, VAR_4, &VAR_3);
    if (VAR_2)
 FUNC_1(VAR_1, 1, VAR_2, "krb5_unparse_name");

    FUNC_3(VAR_1, VAR_4);
    if (FUNC_7(VAR_3, "lha\\@su.se@WIN.SU.SE") != 0)
 FUNC_2(VAR_1, 1, "enterprise name failed 3");
    FUNC_0(VAR_3);





    VAR_2 = FUNC_4(VAR_1, "lha@su.se",
    VAR_0, &VAR_4);
    if (VAR_2)
 FUNC_1(VAR_1, 1, VAR_2, "krb5_parse_name_flags");

    VAR_2 = FUNC_6(VAR_1, VAR_4, &VAR_3);
    if (VAR_2)
 FUNC_1(VAR_1, 1, VAR_2, "krb5_unparse_name");

    FUNC_3(VAR_1, VAR_4);
    if (FUNC_7(VAR_3, "lha\\@su.se@SAMBA.ORG") != 0)
 FUNC_2(VAR_1, 1, "enterprise name failed 2: %s", VAR_3);
    FUNC_0(VAR_3);
}
