
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pw ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,char**) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6 (krb5_principal VAR_2)
{
    krb5_error_code VAR_3;
    char VAR_4[128];

    FUNC_5 (VAR_4, sizeof(VAR_4));
    VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_4);
    if (VAR_3 == 0) {
 char *VAR_5;

 FUNC_2(VAR_0, VAR_2, &VAR_5);

 FUNC_4 ("%s's password set to \"%s\"\n", VAR_5, VAR_4);
 FUNC_0 (VAR_5);
    }
    FUNC_3 (VAR_4, 0, sizeof(VAR_4));
    return VAR_3;
}
