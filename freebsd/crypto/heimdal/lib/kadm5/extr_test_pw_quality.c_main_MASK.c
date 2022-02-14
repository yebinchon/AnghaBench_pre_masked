
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_3__ {int length; int * data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 char* FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,char const*,int *) ;
 int FUNC_8 (int *,int,char**,int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 char const* VAR_4 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_5 ;

int
FUNC_12(int VAR_6, char **VAR_7)
{
    krb5_error_code VAR_8;
    krb5_context VAR_9;
    krb5_principal VAR_10;
    const char *VAR_11;
    krb5_data VAR_12;

    FUNC_8(&VAR_9, VAR_6, VAR_7, VAR_0, VAR_2, ((void*)0));

    if(VAR_1)
 FUNC_9(0, VAR_0, VAR_2);
    if(VAR_5) {
 FUNC_10(((void*)0));
 FUNC_0(0);
    }

    if (VAR_4 == ((void*)0))
 FUNC_4(VAR_9, 1, "no principal given");
    if (VAR_3 == ((void*)0))
 FUNC_4(VAR_9, 1, "no password given");

    VAR_8 = FUNC_7(VAR_9, VAR_4, &VAR_10);
    if (VAR_8)
 FUNC_4(VAR_9, 1, "krb5_parse_name: %s", VAR_4);

    VAR_12.data = VAR_3;
    VAR_12.length = FUNC_11(VAR_3);

    FUNC_3 (VAR_9, ((void*)0), ((void*)0));
    VAR_8 = FUNC_1(VAR_9, ((void*)0));
    if (VAR_8)
 FUNC_4(VAR_9, 1, "kadm5_add_passwd_quality_verifier");

    VAR_11 = FUNC_2 (VAR_9, VAR_10, &VAR_12);
    if (VAR_11)
 FUNC_4(VAR_9, 1, "kadm5_check_password_quality:\n%s", VAR_11);

    FUNC_6(VAR_9, VAR_10);
    FUNC_5(VAR_9);

    return 0;
}
