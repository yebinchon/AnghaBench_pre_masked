
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int kadm5_ret_t ;
struct TYPE_3__ {int mask; int realm; } ;
typedef TYPE_1__ kadm5_config_params ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;

kadm5_ret_t
FUNC_5(krb5_context VAR_1,
        kadm5_config_params *VAR_2,
        krb5_data *VAR_3)
{
    krb5_storage *VAR_4 = FUNC_0();

    FUNC_3(VAR_4, VAR_2->mask & (VAR_0));

    if(VAR_2->mask & VAR_0)
 FUNC_4(VAR_4, VAR_2->realm);
    FUNC_2(VAR_4, VAR_3);
    FUNC_1(VAR_4);

    return 0;
}
