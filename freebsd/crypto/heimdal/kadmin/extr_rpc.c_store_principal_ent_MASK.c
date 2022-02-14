
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int tl_data_type; int tl_data_contents; int tl_data_length; struct TYPE_8__* tl_data_next; } ;
typedef TYPE_2__ krb5_tl_data ;
typedef int krb5_storage ;
struct TYPE_9__ {int data; int length; } ;
typedef TYPE_3__ krb5_data ;
typedef int krb5_context ;
struct TYPE_10__ {int princ_expire_time; int pw_expiration; int last_pwd_change; int max_life; int mod_date; int attributes; int kvno; int mkvno; int aux_attributes; int max_renewable_life; int last_success; int last_failed; int fail_auth_count; int n_key_data; int n_tl_data; TYPE_1__* key_data; TYPE_2__* tl_data; int policy; int * mod_name; int * principal; } ;
typedef TYPE_4__ kadm5_principal_ent_rec ;
struct TYPE_7__ {int* key_data_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_3__) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(krb5_context VAR_0,
      krb5_storage *VAR_1,
      kadm5_principal_ent_rec *VAR_2)
{
    int VAR_3;

    FUNC_0(FUNC_4(VAR_0, VAR_1, VAR_2->principal));
    FUNC_0(FUNC_2(VAR_1, VAR_2->princ_expire_time));
    FUNC_0(FUNC_2(VAR_1, VAR_2->pw_expiration));
    FUNC_0(FUNC_2(VAR_1, VAR_2->last_pwd_change));
    FUNC_0(FUNC_2(VAR_1, VAR_2->max_life));
    FUNC_0(FUNC_1(VAR_1, VAR_2->mod_name == ((void*)0)));
    if (VAR_2->mod_name)
 FUNC_0(FUNC_4(VAR_0, VAR_1, VAR_2->mod_name));
    FUNC_0(FUNC_2(VAR_1, VAR_2->mod_date));
    FUNC_0(FUNC_2(VAR_1, VAR_2->attributes));
    FUNC_0(FUNC_2(VAR_1, VAR_2->kvno));
    FUNC_0(FUNC_2(VAR_1, VAR_2->mkvno));
    FUNC_0(FUNC_5(VAR_1, VAR_2->policy));
    FUNC_0(FUNC_1(VAR_1, VAR_2->aux_attributes));
    FUNC_0(FUNC_1(VAR_1, VAR_2->max_renewable_life));
    FUNC_0(FUNC_1(VAR_1, VAR_2->last_success));
    FUNC_0(FUNC_1(VAR_1, VAR_2->last_failed));
    FUNC_0(FUNC_1(VAR_1, VAR_2->fail_auth_count));
    FUNC_0(FUNC_1(VAR_1, VAR_2->n_key_data));
    FUNC_0(FUNC_1(VAR_1, VAR_2->n_tl_data));
    FUNC_0(FUNC_1(VAR_1, VAR_2->n_tl_data == 0));
    if (VAR_2->n_tl_data) {
 krb5_tl_data *VAR_4;

 for (VAR_4 = VAR_2->tl_data; VAR_4; VAR_4 = VAR_4->tl_data_next) {
     krb5_data VAR_5;
     VAR_5.length = VAR_4->tl_data_length;
     VAR_5.data = VAR_4->tl_data_contents;

     FUNC_0(FUNC_1(VAR_1, 0));
     FUNC_0(FUNC_1(VAR_1, VAR_4->tl_data_type));
     FUNC_0(FUNC_3(VAR_1, VAR_5));
 }
 FUNC_0(FUNC_1(VAR_1, 1));
    }

    FUNC_0(FUNC_1(VAR_1, VAR_2->n_key_data));
    for (VAR_3 = 0; VAR_3 < VAR_2->n_key_data; VAR_3++) {
 FUNC_0(FUNC_2(VAR_1, 2));
 FUNC_0(FUNC_2(VAR_1, VAR_2->kvno));
 FUNC_0(FUNC_2(VAR_1, VAR_2->key_data[VAR_3].key_data_type[0]));
 FUNC_0(FUNC_2(VAR_1, VAR_2->key_data[VAR_3].key_data_type[1]));
    }

    return 0;
}
