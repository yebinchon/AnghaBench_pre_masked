
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_5__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,char*,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *,char*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int,scalar_t__,char*) ;
 int FUNC_7 (int ,int,char*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,char*,int **) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static void
FUNC_12(krb5_context VAR_0)
{
    krb5_error_code VAR_1;
    krb5_principal VAR_2;
    krb5_ccache VAR_3;
    unsigned int VAR_4;

    VAR_1 = FUNC_3(VAR_0, "MEMORY", "bar", &VAR_3);
    if (VAR_1)
 FUNC_6(VAR_0, 1, VAR_1, "krb5_cc_new_unique");

    VAR_1 = FUNC_9(VAR_0, "lha@SU.SE", &VAR_2);
    if (VAR_1)
 FUNC_6(VAR_0, 1, VAR_1, "krb5_parse_name");

    VAR_1 = FUNC_2(VAR_0, VAR_3, VAR_2);
    if (VAR_1)
 FUNC_6(VAR_0, 1, VAR_1, "krb5_cc_initialize");

    for (VAR_4 = 0; VAR_4 < 1000; VAR_4++) {
 krb5_data VAR_5, VAR_6;
 const char *VAR_7 = "foo";
 krb5_principal VAR_8 = ((void*)0);

 if (VAR_4 & 1)
     VAR_8 = VAR_2;

 VAR_5.data = FUNC_10(VAR_7);
 VAR_5.length = FUNC_11(VAR_7);

 VAR_1 = FUNC_4(VAR_0, VAR_3, VAR_8, "FriendlyName", &VAR_5);
 if (VAR_1)
     FUNC_7(VAR_0, 1, "krb5_cc_set_config: add");

 VAR_1 = FUNC_1(VAR_0, VAR_3, VAR_8, "FriendlyName", &VAR_6);
 if (VAR_1)
     FUNC_7(VAR_0, 1, "krb5_cc_get_config: first");
 FUNC_5(&VAR_6);

 VAR_1 = FUNC_4(VAR_0, VAR_3, VAR_8, "FriendlyName", &VAR_5);
 if (VAR_1)
     FUNC_7(VAR_0, 1, "krb5_cc_set_config: add -second");

 VAR_1 = FUNC_1(VAR_0, VAR_3, VAR_8, "FriendlyName", &VAR_6);
 if (VAR_1)
     FUNC_7(VAR_0, 1, "krb5_cc_get_config: second");
 FUNC_5(&VAR_6);

 VAR_1 = FUNC_4(VAR_0, VAR_3, VAR_8, "FriendlyName", ((void*)0));
 if (VAR_1)
     FUNC_7(VAR_0, 1, "krb5_cc_set_config: delete");

 VAR_1 = FUNC_1(VAR_0, VAR_3, VAR_8, "FriendlyName", &VAR_6);
 if (VAR_1 == 0)
     FUNC_7(VAR_0, 1, "krb5_cc_get_config: non-existant");
    }

    FUNC_0(VAR_0, VAR_3);
    FUNC_8(VAR_0, VAR_2);
}
