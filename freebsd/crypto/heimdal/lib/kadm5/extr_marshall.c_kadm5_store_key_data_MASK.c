
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_storage ;
struct TYPE_5__ {int * key_data_contents; int * key_data_length; int * key_data_type; int key_data_kvno; int key_data_ver; } ;
typedef TYPE_1__ krb5_key_data ;
struct TYPE_6__ {int data; int length; } ;
typedef TYPE_2__ krb5_data ;
typedef int kadm5_ret_t ;


 int FUNC_0 (int *,TYPE_2__) ;
 int FUNC_1 (int *,int ) ;

kadm5_ret_t
FUNC_2(krb5_storage *VAR_0,
       krb5_key_data *VAR_1)
{
    krb5_data VAR_2;
    FUNC_1(VAR_0, VAR_1->key_data_ver);
    FUNC_1(VAR_0, VAR_1->key_data_kvno);
    FUNC_1(VAR_0, VAR_1->key_data_type[0]);
    VAR_2.length = VAR_1->key_data_length[0];
    VAR_2.data = VAR_1->key_data_contents[0];
    FUNC_0(VAR_0, VAR_2);
    FUNC_1(VAR_0, VAR_1->key_data_type[1]);
    VAR_2.length = VAR_1->key_data_length[1];
    VAR_2.data = VAR_1->key_data_contents[1];
    FUNC_0(VAR_0, VAR_2);
    return 0;
}
