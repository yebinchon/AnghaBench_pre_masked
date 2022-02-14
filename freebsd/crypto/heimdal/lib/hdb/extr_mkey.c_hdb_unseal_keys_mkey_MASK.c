
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int hdb_master_key ;
struct TYPE_4__ {size_t len; int * val; } ;
struct TYPE_5__ {TYPE_1__ keys; } ;
typedef TYPE_2__ hdb_entry ;


 scalar_t__ FUNC_0 (int ,int *,int ) ;

krb5_error_code
FUNC_1(krb5_context VAR_0, hdb_entry *VAR_1, hdb_master_key VAR_2)
{
    size_t VAR_3;

    for(VAR_3 = 0; VAR_3 < VAR_1->keys.len; VAR_3++){
 krb5_error_code VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_1->keys.val[VAR_3], VAR_2);
 if (VAR_4)
     return VAR_4;
    }
    return 0;
}
