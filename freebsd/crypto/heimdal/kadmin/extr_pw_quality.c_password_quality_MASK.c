
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_3__ {char* data; int length; } ;
typedef TYPE_1__ krb5_data ;


 int VAR_0 ;
 char* FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,scalar_t__,char*,char*) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*) ;

int
FUNC_6(void *VAR_1, int VAR_2, char **VAR_3)
{
    krb5_error_code VAR_4;
    krb5_principal VAR_5;
    krb5_data VAR_6;
    const char *VAR_7;

    VAR_4 = FUNC_2(VAR_0, VAR_3[0], &VAR_5);
    if(VAR_4){
 FUNC_3(VAR_0, VAR_4, "krb5_parse_name(%s)", VAR_3[0]);
 return 0;
    }
    VAR_6.data = VAR_3[1];
    VAR_6.length = FUNC_5(VAR_3[1]);

    VAR_7 = FUNC_0 (VAR_0, VAR_5, &VAR_6);
    if (VAR_7)
 FUNC_4(VAR_0, "kadm5_check_password_quality: %s", VAR_7);

    FUNC_1(VAR_0, VAR_5);

    return 0;
}
