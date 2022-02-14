
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_3__ {int length; int * data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_auth_context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ,int ,int*,TYPE_1__*) ;

__attribute__((used)) static krb5_error_code
FUNC_5 (krb5_context VAR_1, krb5_auth_context VAR_2,
       int VAR_3, uint32_t VAR_4)
{
    int VAR_5;
    u_char VAR_6[8];
    krb5_storage *VAR_7;
    krb5_data VAR_8;

    VAR_7 = FUNC_1 (VAR_6, 8);
    FUNC_2 (VAR_7, VAR_0);
    FUNC_2 (VAR_7, VAR_4);
    FUNC_0 (VAR_7);
    VAR_8.length = 8;
    VAR_8.data = VAR_6;

    VAR_5 = FUNC_4(VAR_1, VAR_2, &VAR_3, &VAR_8);
    if (VAR_5)
 FUNC_3 (VAR_1, VAR_5, "krb5_write_message");
    return VAR_5;
}
