
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,char const*,int *,int *) ;
 int FUNC_5 (int ,int,scalar_t__,char*,...) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,char*,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(krb5_context VAR_1, const char *VAR_2, const char *VAR_3)
{
    krb5_ccache VAR_4, VAR_5;
    krb5_error_code VAR_6;
    krb5_principal VAR_7, VAR_8;

    VAR_6 = FUNC_8(VAR_1, "lha@SU.SE", &VAR_7);
    if (VAR_6)
 FUNC_5(VAR_1, 1, VAR_6, "krb5_parse_name");

    VAR_6 = FUNC_4(VAR_1, VAR_2, ((void*)0), &VAR_4);
    if (VAR_6)
 FUNC_5(VAR_1, 1, VAR_6, "krb5_cc_new_unique: %s", VAR_2);

    VAR_6 = FUNC_3(VAR_1, VAR_4, VAR_7);
    if (VAR_6)
 FUNC_5(VAR_1, 1, VAR_6, "krb5_cc_initialize");

    VAR_6 = FUNC_4(VAR_1, VAR_3, ((void*)0), &VAR_5);
    if (VAR_6)
 FUNC_5(VAR_1, 1, VAR_6, "krb5_cc_gen_new: %s", VAR_3);

    VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_5);
    if (VAR_6)
 FUNC_5(VAR_1, 1, VAR_6, "krb5_cc_copy_cache");

    VAR_6 = FUNC_2(VAR_1, VAR_5, &VAR_8);
    if (VAR_6)
 FUNC_5(VAR_1, 1, VAR_6, "krb5_cc_get_principal");

    if (FUNC_9(VAR_1, VAR_7, VAR_8) == VAR_0)
 FUNC_6(VAR_1, 1, "p != p2");

    FUNC_7(VAR_1, VAR_7);
    FUNC_7(VAR_1, VAR_8);

    FUNC_1(VAR_1, VAR_4);
    FUNC_1(VAR_1, VAR_5);
}
