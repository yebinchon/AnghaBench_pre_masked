
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_3__ {int mask; int realm; } ;
typedef TYPE_1__ kadm5_config_params ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

kadm5_ret_t
FUNC_4(krb5_context VAR_2,
   krb5_data *VAR_3,
   kadm5_config_params *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_storage *VAR_6;
    int32_t VAR_7;

    VAR_6 = FUNC_3(VAR_3);
    if (VAR_6 == ((void*)0))
 return VAR_0;

    VAR_5 = FUNC_0(VAR_6, &VAR_7);
    if (VAR_5)
 goto out;
    VAR_4->mask = VAR_7;

    if(VAR_4->mask & VAR_1)
 VAR_5 = FUNC_1(VAR_6, &VAR_4->realm);
 out:
    FUNC_2(VAR_6);

    return VAR_5;
}
