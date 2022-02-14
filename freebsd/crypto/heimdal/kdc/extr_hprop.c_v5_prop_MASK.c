
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct prop_data {int sock; int auth_context; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
struct TYPE_3__ {int entry; } ;
typedef TYPE_1__ hdb_entry_ex ;
typedef int HDB ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int *,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

krb5_error_code
FUNC_7(krb5_context VAR_4, HDB *VAR_5, hdb_entry_ex *VAR_6, void *VAR_7)
{
    krb5_error_code VAR_8;
    struct prop_data *VAR_9 = VAR_7;
    krb5_data VAR_10;

    if(VAR_1) {
 VAR_8 = FUNC_1(VAR_4, &VAR_6->entry, VAR_2);
 if (VAR_8) {
     FUNC_4(VAR_4, VAR_8, "hdb_seal_keys_mkey");
     return VAR_8;
 }
    }
    if(VAR_0) {
 VAR_8 = FUNC_2(VAR_4, &VAR_6->entry, VAR_2);
 if (VAR_8) {
     FUNC_4(VAR_4, VAR_8, "hdb_unseal_keys_mkey");
     return VAR_8;
 }
    }

    VAR_8 = FUNC_0(VAR_4, &VAR_6->entry, &VAR_10);
    if(VAR_8) {
 FUNC_4(VAR_4, VAR_8, "hdb_entry2value");
 return VAR_8;
    }

    if(VAR_3)
 VAR_8 = FUNC_5(VAR_4, &VAR_9->sock, &VAR_10);
    else
 VAR_8 = FUNC_6(VAR_4, VAR_9->auth_context,
          &VAR_9->sock, &VAR_10);
    FUNC_3(&VAR_10);
    return VAR_8;
}
