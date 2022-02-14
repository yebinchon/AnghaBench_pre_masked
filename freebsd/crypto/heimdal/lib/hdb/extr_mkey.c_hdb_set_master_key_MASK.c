
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int hdb_master_key ;
struct TYPE_7__ {int hdb_master_key_set; int hdb_master_key; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_5__ {TYPE_2__ keyvalue; } ;
typedef TYPE_3__ HDB ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ,int *) ;

krb5_error_code
FUNC_2 (krb5_context VAR_0,
      HDB *VAR_1,
      krb5_keyblock *VAR_2)
{
    krb5_error_code VAR_3;
    hdb_master_key VAR_4;

    VAR_3 = FUNC_1(VAR_0, 0, VAR_2, 0, &VAR_4);
    if (VAR_3)
 return VAR_3;
    VAR_1->hdb_master_key = VAR_4;



    VAR_1->hdb_master_key_set = 1;
    return 0;
}
