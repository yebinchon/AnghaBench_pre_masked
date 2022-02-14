
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_krbhst_info {struct krb5_krbhst_info* next; } ;
struct krb5_krbhst_data {struct krb5_krbhst_info** index; } ;
typedef struct krb5_krbhst_info krb5_krbhst_info ;
typedef int krb5_boolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static krb5_boolean
FUNC_0(struct krb5_krbhst_data *VAR_2, krb5_krbhst_info **VAR_3)
{
    struct krb5_krbhst_info *VAR_4 = *VAR_2->index;
    if(VAR_4 != ((void*)0)) {
 *VAR_3 = VAR_4;
 VAR_2->index = &(*VAR_2->index)->next;
 return VAR_1;
    }
    return VAR_0;
}
