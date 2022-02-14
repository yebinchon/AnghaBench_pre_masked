
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int krb5_cc_ops ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,char const*,int *,int *) ;
 int FUNC_5 (int ,int,scalar_t__,char*,...) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,char*,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(krb5_context VAR_2, const char *VAR_3)
{
    const krb5_cc_ops *VAR_4;
    krb5_ccache VAR_5, VAR_6;
    krb5_error_code VAR_7;
    krb5_principal VAR_8, VAR_9;

    VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (VAR_4 == ((void*)0))
 return;

    VAR_7 = FUNC_4(VAR_2, VAR_3, ((void*)0), &VAR_5);
    if (VAR_7 == VAR_1)
 return;
    else if (VAR_7)
 FUNC_5(VAR_2, 1, VAR_7, "krb5_cc_new_unique: %s", VAR_3);

    VAR_7 = FUNC_8(VAR_2, "lha@SU.SE", &VAR_8);
    if (VAR_7)
 FUNC_5(VAR_2, 1, VAR_7, "krb5_parse_name");

    VAR_7 = FUNC_3(VAR_2, VAR_5, VAR_8);
    if (VAR_7)
 FUNC_5(VAR_2, 1, VAR_7, "krb5_cc_initialize");

    VAR_7 = FUNC_4(VAR_2, VAR_3, ((void*)0), &VAR_6);
    if (VAR_7)
 FUNC_5(VAR_2, 1, VAR_7, "krb5_cc_new_unique");

    VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_8);
    if (VAR_7)
 FUNC_5(VAR_2, 1, VAR_7, "krb5_cc_initialize");

    VAR_7 = FUNC_2(VAR_2, VAR_6, &VAR_9);
    if (VAR_7)
 FUNC_5(VAR_2, 1, VAR_7, "krb5_cc_get_principal");

    if (FUNC_9(VAR_2, VAR_8, VAR_9) == VAR_0)
 FUNC_6(VAR_2, 1, "p != p2");

    FUNC_7(VAR_2, VAR_8);
    FUNC_7(VAR_2, VAR_9);

    FUNC_0(VAR_2, VAR_6);
    FUNC_0(VAR_2, VAR_5);
}
