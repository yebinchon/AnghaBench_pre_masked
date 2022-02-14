
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
typedef int krb5_context ;
struct TYPE_7__ {int len; TYPE_4__* val; } ;
struct TYPE_9__ {TYPE_1__ keys; } ;
typedef TYPE_3__ hdb_entry ;
struct TYPE_8__ {scalar_t__ keytype; } ;
struct TYPE_10__ {TYPE_2__ key; } ;
typedef TYPE_4__ Key ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int) ;

krb5_error_code
FUNC_1(krb5_context VAR_1,
       const hdb_entry *VAR_2,
       krb5_enctype VAR_3,
       Key **VAR_4)
{
    Key *VAR_5;

    for (VAR_5 = *VAR_4 ? (*VAR_4) + 1 : VAR_2->keys.val;
  VAR_5 < VAR_2->keys.val + VAR_2->keys.len;
  VAR_5++)
    {
 if(VAR_5->key.keytype == VAR_3){
     *VAR_4 = VAR_5;
     return 0;
 }
    }
    FUNC_0(VAR_1, VAR_0,
      "No next enctype %d for hdb-entry",
     (int)VAR_3);
    return VAR_0;
}
