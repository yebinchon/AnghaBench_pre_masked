
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_3__ {scalar_t__ hdb_master_key_set; int hdb_master_key; } ;
typedef int Key ;
typedef TYPE_1__ HDB ;


 int FUNC_0 (int ,int *,int ) ;

krb5_error_code
FUNC_1(krb5_context VAR_0, HDB *VAR_1, Key *VAR_2)
{
    if (VAR_1->hdb_master_key_set == 0)
 return 0;

    return FUNC_0(VAR_0, VAR_2, VAR_1->hdb_master_key);
}
