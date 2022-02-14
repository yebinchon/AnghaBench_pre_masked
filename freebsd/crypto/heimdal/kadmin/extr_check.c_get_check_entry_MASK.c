
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int kadm5_principal_ent_rec ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (int ,scalar_t__,char*,char const*) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_2, kadm5_principal_ent_rec *VAR_3)
{
    krb5_error_code VAR_4;
    krb5_principal VAR_5;

    VAR_4 = FUNC_2(VAR_0, VAR_2, &VAR_5);
    if (VAR_4) {
 FUNC_3(VAR_0, VAR_4, "krb5_unparse_name: %s", VAR_2);
 return 1;
    }

    FUNC_4(VAR_3, 0, sizeof(*VAR_3));
    VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_3, 0);
    FUNC_1(VAR_0, VAR_5);
    if(VAR_4)
 return 1;

    return 0;
}
