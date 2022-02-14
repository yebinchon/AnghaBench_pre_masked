
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int hdb_master_key ;
struct TYPE_3__ {int hdb_master_key_set; int hdb_master_key; } ;
typedef TYPE_1__ HDB ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int *) ;
 int FUNC_1 (int ) ;

krb5_error_code
FUNC_2 (krb5_context VAR_1,
   HDB *VAR_2,
   const char *VAR_3)
{
    hdb_master_key VAR_4;
    krb5_error_code VAR_5;

    VAR_5 = FUNC_0(VAR_1, VAR_3, &VAR_4);
    if (VAR_5) {
 if (VAR_5 != VAR_0)
     return VAR_5;
 FUNC_1(VAR_1);
 return 0;
    }
    VAR_2->hdb_master_key = VAR_4;
    VAR_2->hdb_master_key_set = 1;
    return VAR_5;
}
