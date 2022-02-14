
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,scalar_t__,int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (int ,int ,int) ;

int
FUNC_7(int VAR_0, char **VAR_1)
{
    krb5_error_code VAR_2;
    krb5_context VAR_3;
    krb5_principal VAR_4;

    VAR_2 = FUNC_4(&VAR_3);
    if (VAR_2)
 FUNC_0(1, "krb5_init_context");

    VAR_2 = FUNC_5(VAR_3, "lha@SU.SE", &VAR_4);
    if (VAR_2)
 FUNC_1(VAR_3, VAR_2, 1, "krb5_parse_name");

    FUNC_6(VAR_3, VAR_4, 0);
    FUNC_6(VAR_3, VAR_4, 1);

    FUNC_3(VAR_3, VAR_4);

    FUNC_2(VAR_3);

    return 0;
}
