
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_storage ;
struct TYPE_5__ {int * key_data_contents; int * key_data_length; void** key_data_type; void* key_data_kvno; void* key_data_ver; } ;
typedef TYPE_1__ krb5_key_data ;
struct TYPE_6__ {int data; int length; } ;
typedef TYPE_2__ krb5_data ;
typedef int kadm5_ret_t ;
typedef void* int32_t ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,void**) ;

kadm5_ret_t
FUNC_2(krb5_storage *VAR_0,
     krb5_key_data *VAR_1)
{
    krb5_data VAR_2;
    int32_t VAR_3;
    FUNC_1(VAR_0, &VAR_3);
    VAR_1->key_data_ver = VAR_3;
    FUNC_1(VAR_0, &VAR_3);
    VAR_1->key_data_kvno = VAR_3;
    FUNC_1(VAR_0, &VAR_3);
    VAR_1->key_data_type[0] = VAR_3;
    FUNC_0(VAR_0, &VAR_2);
    VAR_1->key_data_length[0] = VAR_2.length;
    VAR_1->key_data_contents[0] = VAR_2.data;
    FUNC_1(VAR_0, &VAR_3);
    VAR_1->key_data_type[1] = VAR_3;
    FUNC_0(VAR_0, &VAR_2);
    VAR_1->key_data_length[1] = VAR_2.length;
    VAR_1->key_data_contents[1] = VAR_2.data;
    return 0;
}
