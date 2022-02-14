
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
typedef void* int32_t ;
struct TYPE_6__ {int n_key_data; int n_tl_data; TYPE_1__* tl_data; int * key_data; void* fail_auth_count; void* last_failed; void* last_success; void* max_renewable_life; void* aux_attributes; int * policy; void* mkvno; void* kvno; void* attributes; void* mod_date; int * mod_name; void* max_life; void* last_pwd_change; void* pw_expiration; void* princ_expire_time; int * principal; } ;


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
 int VAR_18 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,void**) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int **) ;
 void* FUNC_5 (int) ;

__attribute__((used)) static kadm5_ret_t
FUNC_6(krb5_storage *VAR_19,
    kadm5_principal_ent_t VAR_20,
    uint32_t VAR_21)
{
    int VAR_22;
    int32_t VAR_23;

    if (VAR_21 & VAR_15)
 FUNC_3(VAR_19, &VAR_20->principal);

    if (VAR_21 & VAR_16) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->princ_expire_time = VAR_23;
    }
    if (VAR_21 & VAR_17) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->pw_expiration = VAR_23;
    }
    if (VAR_21 & VAR_7) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->last_pwd_change = VAR_23;
    }
    if (VAR_21 & VAR_9) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->max_life = VAR_23;
    }
    if (VAR_21 & VAR_12) {
 FUNC_2(VAR_19, &VAR_23);
 if(VAR_23)
     FUNC_3(VAR_19, &VAR_20->mod_name);
 else
     VAR_20->mod_name = ((void*)0);
    }
    if (VAR_21 & VAR_13) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->mod_date = VAR_23;
    }
    if (VAR_21 & VAR_1) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->attributes = VAR_23;
    }
    if (VAR_21 & VAR_5) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->kvno = VAR_23;
    }
    if (VAR_21 & VAR_11) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->mkvno = VAR_23;
    }
    if (VAR_21 & VAR_14) {
 FUNC_2(VAR_19, &VAR_23);
 if(VAR_23)
     FUNC_4(VAR_19, &VAR_20->policy);
 else
     VAR_20->policy = ((void*)0);
    }
    if (VAR_21 & VAR_2) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->aux_attributes = VAR_23;
    }
    if (VAR_21 & VAR_10) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->max_renewable_life = VAR_23;
    }
    if (VAR_21 & VAR_8) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->last_success = VAR_23;
    }
    if (VAR_21 & VAR_6) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->last_failed = VAR_23;
    }
    if (VAR_21 & VAR_3) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->fail_auth_count = VAR_23;
    }
    if (VAR_21 & VAR_4) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->n_key_data = VAR_23;
 VAR_20->key_data = FUNC_5(VAR_20->n_key_data * sizeof(*VAR_20->key_data));
 if (VAR_20->key_data == ((void*)0) && VAR_20->n_key_data != 0)
     return VAR_0;
 for(VAR_22 = 0; VAR_22 < VAR_20->n_key_data; VAR_22++)
     FUNC_0(VAR_19, &VAR_20->key_data[VAR_22]);
    }
    if (VAR_21 & VAR_18) {
 FUNC_2(VAR_19, &VAR_23);
 VAR_20->n_tl_data = VAR_23;
 VAR_20->tl_data = ((void*)0);
 for(VAR_22 = 0; VAR_22 < VAR_20->n_tl_data; VAR_22++){
     krb5_tl_data *VAR_24 = FUNC_5(sizeof(*VAR_24));
     if (VAR_24 == ((void*)0))
  return VAR_0;
     FUNC_1(VAR_19, VAR_24);
     VAR_24->tl_data_next = VAR_20->tl_data;
     VAR_20->tl_data = VAR_24;
 }
    }
    return 0;
}
