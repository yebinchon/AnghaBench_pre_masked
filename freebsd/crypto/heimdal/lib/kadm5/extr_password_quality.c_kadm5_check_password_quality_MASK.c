
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kadm5_pw_policy_check_func {int (* func ) (int ,int ,int *,int *,char*,int) ;int name; } ;
typedef int krb5_principal ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int error_msg ;


 struct kadm5_pw_policy_check_func* FUNC_0 (int ,char*) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (int ,int *,char*,char*,int *) ;
 int FUNC_3 (int ,int ,char*,char const*,...) ;
 char* FUNC_4 (int ,int ,int *) ;
 char* FUNC_5 (int ,int ,int *) ;
 char* FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *,int *,char*,int) ;
 char* FUNC_8 (int ,int ,int *) ;

const char *
FUNC_9 (krb5_context VAR_0,
         krb5_principal VAR_1,
         krb5_data *VAR_2)
{
    const struct kadm5_pw_policy_check_func *VAR_3;
    static char VAR_4[1024];
    const char *VAR_5;
    char **VAR_6, **VAR_7;
    int VAR_8;





    VAR_6 = FUNC_2(VAR_0, ((void*)0),
    "password_quality",
    "policies",
    ((void*)0));
    if (VAR_6 == ((void*)0)) {
 VAR_5 = FUNC_5) (VAR_0, VAR_1, VAR_2);
 if (VAR_5)
     FUNC_3(VAR_0, 0, "password policy failed: %s", VAR_5);
 return VAR_5;
    }

    VAR_4[0] = '\0';

    VAR_5 = ((void*)0);
    for(VAR_7 = VAR_6; *VAR_7; VAR_7++) {
 VAR_3 = FUNC_0(VAR_0, *VAR_7);
 if (VAR_3 == ((void*)0)) {
     VAR_5 = "failed to find password verifier function";
     FUNC_3(VAR_0, 0, "Failed to find password policy "
       "function: %s", *VAR_7);
     break;
 }
 VAR_8 = (VAR_3->func)(VAR_0, VAR_1, VAR_2, ((void*)0),
      VAR_4, sizeof(VAR_4));
 if (VAR_8) {
     FUNC_3(VAR_0, 0, "Password policy "
       "%s failed with %s",
       VAR_3->name, VAR_4);
     VAR_5 = VAR_4;
     break;
 }
    }
    FUNC_1(VAR_6);



    if (VAR_5 == ((void*)0) && FUNC_5 != FUNC_4) {
 VAR_5 = FUNC_5) (VAR_0, VAR_1, VAR_2);
 if (VAR_5)
     FUNC_3(VAR_0, 0, "(old) password policy "
       "failed with %s", VAR_5);

    }
    return VAR_5;
}
