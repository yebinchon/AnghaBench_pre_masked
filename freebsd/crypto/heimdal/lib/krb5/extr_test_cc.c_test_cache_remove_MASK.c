
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_5__ {int client; int server; } ;
typedef TYPE_1__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int cred ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int,scalar_t__,char*,...) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_9(krb5_context VAR_0, const char *VAR_1)
{
    krb5_error_code VAR_2;
    krb5_ccache VAR_3;
    krb5_principal VAR_4;
    krb5_creds VAR_5;

    VAR_2 = FUNC_7(VAR_0, "lha@SU.SE", &VAR_4);
    if (VAR_2)
 FUNC_5(VAR_0, 1, VAR_2, "krb5_parse_name");

    VAR_2 = FUNC_2(VAR_0, VAR_1, ((void*)0), &VAR_3);
    if (VAR_2)
 FUNC_5(VAR_0, 1, VAR_2, "krb5_cc_gen_new: %s", VAR_1);

    VAR_2 = FUNC_1(VAR_0, VAR_3, VAR_4);
    if (VAR_2)
 FUNC_5(VAR_0, 1, VAR_2, "krb5_cc_initialize");


    FUNC_8(&VAR_5, 0, sizeof(VAR_5));
    VAR_2 = FUNC_7(VAR_0, "krbtgt/SU.SE@SU.SE", &VAR_5.server);
    if (VAR_2)
 FUNC_5(VAR_0, 1, VAR_2, "krb5_parse_name");
    VAR_2 = FUNC_7(VAR_0, "lha@SU.SE", &VAR_5.client);
    if (VAR_2)
 FUNC_5(VAR_0, 1, VAR_2, "krb5_parse_name");

    VAR_2 = FUNC_4(VAR_0, VAR_3, &VAR_5);
    if (VAR_2)
 FUNC_5(VAR_0, 1, VAR_2, "krb5_cc_store_cred");

    VAR_2 = FUNC_3(VAR_0, VAR_3, 0, &VAR_5);
    if (VAR_2)
 FUNC_5(VAR_0, 1, VAR_2, "krb5_cc_remove_cred");

    VAR_2 = FUNC_0(VAR_0, VAR_3);
    if (VAR_2)
 FUNC_5(VAR_0, 1, VAR_2, "krb5_cc_destroy");

    FUNC_6(VAR_0, VAR_4);
    FUNC_6(VAR_0, VAR_5.server);
    FUNC_6(VAR_0, VAR_5.client);
}
