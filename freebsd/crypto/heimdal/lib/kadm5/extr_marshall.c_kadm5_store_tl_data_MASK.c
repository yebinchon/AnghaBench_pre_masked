
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tl_data_contents; int tl_data_length; int tl_data_type; } ;
typedef TYPE_1__ krb5_tl_data ;
typedef int krb5_storage ;
struct TYPE_6__ {int data; int length; } ;
typedef TYPE_2__ krb5_data ;
typedef int kadm5_ret_t ;


 int FUNC_0 (int *,TYPE_2__) ;
 int FUNC_1 (int *,int ) ;

kadm5_ret_t
FUNC_2(krb5_storage *VAR_0,
      krb5_tl_data *VAR_1)
{
    krb5_data VAR_2;
    FUNC_1(VAR_0, VAR_1->tl_data_type);
    VAR_2.length = VAR_1->tl_data_length;
    VAR_2.data = VAR_1->tl_data_contents;
    FUNC_0(VAR_0, VAR_2);
    return 0;
}
