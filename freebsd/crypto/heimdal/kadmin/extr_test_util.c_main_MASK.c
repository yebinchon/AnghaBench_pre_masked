
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_1, char **VAR_2)
{
    krb5_error_code VAR_3;

    FUNC_3(VAR_2[0]);

    VAR_3 = FUNC_2(&VAR_0);
    if (VAR_3)
 FUNC_0 (1, "krb5_init_context failed: %d", VAR_3);

    VAR_3 = 0;
    VAR_3 += FUNC_4();

    FUNC_1(VAR_0);

    return VAR_3;
}
