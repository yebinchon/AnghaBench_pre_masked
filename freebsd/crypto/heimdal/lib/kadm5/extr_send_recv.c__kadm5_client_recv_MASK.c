
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_3__ {int ac; int context; int sock; } ;
typedef TYPE_1__ kadm5_client_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;

kadm5_ret_t
FUNC_6(kadm5_client_context *VAR_3, krb5_data *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_data VAR_6;
    krb5_storage *VAR_7;

    VAR_7 = FUNC_5(VAR_3->sock);
    if(VAR_7 == ((void*)0)) {
 FUNC_0(VAR_3->context);
 return VAR_0;
    }
    VAR_5 = FUNC_3(VAR_7, &VAR_6);
    FUNC_4(VAR_7);
    FUNC_0(VAR_3->context);
    if(VAR_5 == VAR_2)
 return VAR_1;
    else if(VAR_5)
 return VAR_5;

    VAR_5 = FUNC_2(VAR_3->context, VAR_3->ac, &VAR_6, VAR_4, ((void*)0));
    FUNC_1(&VAR_6);
    return VAR_5;
}
