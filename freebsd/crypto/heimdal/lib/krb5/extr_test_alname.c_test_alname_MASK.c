
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int localname ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_realm ;


 int FUNC_0 (int,char*,char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 (int ,int,scalar_t__,char*,...) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,char const*,char const*,int *) ;
 scalar_t__ FUNC_6 (int ,int ,char**) ;
 scalar_t__ FUNC_7 (char*,char const*) ;

__attribute__((used)) static void
FUNC_8(krb5_context VAR_0, krb5_const_realm VAR_1,
     const char *VAR_2, const char *VAR_3,
     const char *VAR_4, int VAR_5)
{
    krb5_principal VAR_6;
    char VAR_7[1024];
    krb5_error_code VAR_8;
    char *VAR_9;

    VAR_8 = FUNC_5(VAR_0, &VAR_6, VAR_1, VAR_2, VAR_3, ((void*)0));
    if (VAR_8)
 FUNC_3(VAR_0, 1, VAR_8, "krb5_build_principal");

    VAR_8 = FUNC_6(VAR_0, VAR_6, &VAR_9);
    if (VAR_8)
 FUNC_3(VAR_0, 1, VAR_8, "krb5_unparse_name");

    VAR_8 = FUNC_2(VAR_0, VAR_6, sizeof(VAR_7), VAR_7);
    FUNC_4(VAR_0, VAR_6);
    FUNC_1(VAR_9);
    if (VAR_8) {
 if (!VAR_5)
     return;
 FUNC_3(VAR_0, 1, VAR_8, "krb5_aname_to_localname: %s -> %s",
   VAR_9, VAR_4);
    }

    if (FUNC_7(VAR_7, VAR_4) != 0) {
 if (VAR_5)
     FUNC_0(1, "compared failed %s != %s (should have succeded)",
   VAR_7, VAR_4);
    } else {
 if (!VAR_5)
     FUNC_0(1, "compared failed %s == %s (should have failed)",
   VAR_7, VAR_4);
    }

}
