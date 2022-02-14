
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prop_data {int sock; int * auth_context; int context; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int HDB ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int *,int,struct prop_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (int ,int,char*) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_5 (krb5_context VAR_1, int VAR_2,
        const char *VAR_3, HDB *VAR_4)
{
    krb5_error_code VAR_5;
    struct prop_data VAR_6;
    krb5_data VAR_7;

    VAR_6.context = VAR_1;
    VAR_6.auth_context = ((void*)0);
    VAR_6.sock = VAR_0;

    VAR_5 = FUNC_0 (VAR_1, VAR_3, VAR_4, VAR_2, &VAR_6);
    if (VAR_5)
 FUNC_3(VAR_1, 1, "iterate failure");
    FUNC_1 (&VAR_7);
    VAR_5 = FUNC_4 (VAR_1, &VAR_6.sock, &VAR_7);
    if (VAR_5)
 FUNC_2(VAR_1, 1, VAR_5, "krb5_write_message");

    return 0;
}
