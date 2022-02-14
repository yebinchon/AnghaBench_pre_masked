
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_key_usage ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef TYPE_1__* hdb_master_key ;
struct TYPE_3__ {int crypto; } ;


 int FUNC_0 (int ,int ,int ,void*,size_t,int *) ;

int
FUNC_1(krb5_context VAR_0, hdb_master_key VAR_1,
    krb5_key_usage VAR_2,
    void *VAR_3, size_t VAR_4, krb5_data *VAR_5)
{
    return FUNC_0(VAR_0, VAR_1->crypto, VAR_2,
   VAR_3, VAR_4, VAR_5);
}
