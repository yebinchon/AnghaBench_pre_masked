
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;

int
FUNC_4(int VAR_0, char **VAR_1)
{
    krb5_context VAR_2;
    krb5_error_code VAR_3;

    VAR_3 = FUNC_3(&VAR_2);
    if (VAR_3)
 FUNC_1(1, "krb5_init_context %d", VAR_3);

    FUNC_0(VAR_2);
    FUNC_0(VAR_2);
    FUNC_0(VAR_2);
    FUNC_0(VAR_2);
    FUNC_0(VAR_2);

    FUNC_2(VAR_2);

    return 0;
}
