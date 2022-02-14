
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {struct TYPE_5__* tl_data_next; } ;
typedef TYPE_1__ krb5_tl_data ;
typedef int krb5_storage ;
typedef int kadm5_ret_t ;
typedef TYPE_2__* kadm5_principal_ent_t ;
struct TYPE_6__ {int princ_expire_time; int pw_expiration; int last_pwd_change; int max_life; int mod_date; int attributes; int kvno; int mkvno; int aux_attributes; int max_renewable_life; int last_success; int last_failed; int fail_auth_count; int n_key_data; int n_tl_data; TYPE_1__* tl_data; int * key_data; int * policy; int * mod_name; int * principal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static kadm5_ret_t
FUNC_5(krb5_storage *VAR_18,
      kadm5_principal_ent_t VAR_19,
      uint32_t VAR_20)
{
    int VAR_21;

    if (VAR_20 & VAR_14)
 FUNC_3(VAR_18, VAR_19->principal);
    if (VAR_20 & VAR_15)
 FUNC_2(VAR_18, VAR_19->princ_expire_time);
    if (VAR_20 & VAR_16)
 FUNC_2(VAR_18, VAR_19->pw_expiration);
    if (VAR_20 & VAR_6)
 FUNC_2(VAR_18, VAR_19->last_pwd_change);
    if (VAR_20 & VAR_8)
 FUNC_2(VAR_18, VAR_19->max_life);
    if (VAR_20 & VAR_11) {
 FUNC_2(VAR_18, VAR_19->mod_name != ((void*)0));
 if(VAR_19->mod_name)
     FUNC_3(VAR_18, VAR_19->mod_name);
    }
    if (VAR_20 & VAR_12)
 FUNC_2(VAR_18, VAR_19->mod_date);
    if (VAR_20 & VAR_0)
 FUNC_2(VAR_18, VAR_19->attributes);
    if (VAR_20 & VAR_4)
 FUNC_2(VAR_18, VAR_19->kvno);
    if (VAR_20 & VAR_10)
 FUNC_2(VAR_18, VAR_19->mkvno);
    if (VAR_20 & VAR_13) {
 FUNC_2(VAR_18, VAR_19->policy != ((void*)0));
 if(VAR_19->policy)
     FUNC_4(VAR_18, VAR_19->policy);
    }
    if (VAR_20 & VAR_1)
 FUNC_2(VAR_18, VAR_19->aux_attributes);
    if (VAR_20 & VAR_9)
 FUNC_2(VAR_18, VAR_19->max_renewable_life);
    if (VAR_20 & VAR_7)
 FUNC_2(VAR_18, VAR_19->last_success);
    if (VAR_20 & VAR_5)
 FUNC_2(VAR_18, VAR_19->last_failed);
    if (VAR_20 & VAR_2)
 FUNC_2(VAR_18, VAR_19->fail_auth_count);
    if (VAR_20 & VAR_3) {
 FUNC_2(VAR_18, VAR_19->n_key_data);
 for(VAR_21 = 0; VAR_21 < VAR_19->n_key_data; VAR_21++)
     FUNC_0(VAR_18, &VAR_19->key_data[VAR_21]);
    }
    if (VAR_20 & VAR_17) {
 krb5_tl_data *VAR_22;

 FUNC_2(VAR_18, VAR_19->n_tl_data);
 for(VAR_22 = VAR_19->tl_data; VAR_22; VAR_22 = VAR_22->tl_data_next)
     FUNC_1(VAR_18, VAR_22);
    }
    return 0;
}
