
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_0 ;

int
FUNC_8(int VAR_1, char **VAR_2)
{
    krb5_error_code VAR_3;
    krb5_context VAR_4;
    int VAR_5 = 0;

    VAR_3 = FUNC_3 (&VAR_4);
    if (VAR_3)
 FUNC_0 (1, "krb5_init_context failed: %d", VAR_3);

    VAR_5 |= FUNC_7(VAR_4);

    VAR_5 |= FUNC_4(VAR_4);
    VAR_5 |= FUNC_6(VAR_4);
    VAR_5 |= FUNC_1(VAR_4);

    if (VAR_0 && VAR_5 == 0)
 FUNC_5("all ok\n");
    if (VAR_5)
 FUNC_5("tests failed\n");

    FUNC_2(VAR_4);

    return VAR_5;
}
