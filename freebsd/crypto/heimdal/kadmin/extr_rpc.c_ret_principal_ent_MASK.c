
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int tl_data_type; struct TYPE_9__* tl_data_next; int tl_data_contents; int tl_data_length; } ;
typedef TYPE_2__ krb5_tl_data ;
typedef int krb5_storage ;
struct TYPE_10__ {int data; int length; } ;
typedef TYPE_3__ krb5_data ;
typedef int krb5_context ;
struct TYPE_11__ {int princ_expire_time; int pw_expiration; int last_pwd_change; int max_life; int mod_date; int attributes; int kvno; int mkvno; int aux_attributes; int max_renewable_life; int last_success; int last_failed; int fail_auth_count; int n_key_data; int n_tl_data; TYPE_1__* key_data; TYPE_2__* tl_data; int policy; int mod_name; int principal; } ;
typedef TYPE_4__ kadm5_principal_ent_rec ;
struct TYPE_8__ {int* key_data_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int
FUNC_8(krb5_context VAR_0,
    krb5_storage *VAR_1,
    kadm5_principal_ent_rec *VAR_2)
{
    uint32_t VAR_3, VAR_4;
    size_t VAR_5;

    FUNC_4(VAR_2, 0, sizeof(*VAR_2));

    FUNC_0(FUNC_6(VAR_0, VAR_1, &VAR_2->principal));
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->princ_expire_time = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->pw_expiration = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->last_pwd_change = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->max_life = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    if (VAR_3 == 0)
 FUNC_6(VAR_0, VAR_1, &VAR_2->mod_name);
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->mod_date = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->attributes = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->kvno = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->mkvno = VAR_3;
    FUNC_0(FUNC_7(VAR_1, &VAR_2->policy));
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->aux_attributes = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->max_renewable_life = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->last_success = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->last_failed = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->fail_auth_count = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->n_key_data = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    VAR_2->n_tl_data = VAR_3;
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    if (VAR_3 == 0) {
 krb5_tl_data **VAR_6 = &VAR_2->tl_data;
 size_t VAR_7 = 0;

 while(1) {
     krb5_data VAR_8;
     FUNC_0(FUNC_3(VAR_1, &VAR_3));
     if (VAR_3)
  break;
     *VAR_6 = FUNC_2(1, sizeof(**VAR_6));
     FUNC_1(*VAR_6 != ((void*)0));
     FUNC_0(FUNC_3(VAR_1, &VAR_3));
     (*VAR_6)->tl_data_type = VAR_3;
     FUNC_0(FUNC_5(VAR_1, &VAR_8));
     (*VAR_6)->tl_data_length = VAR_8.length;
     (*VAR_6)->tl_data_contents = VAR_8.data;
     VAR_6 = &(*VAR_6)->tl_data_next;

     VAR_7++;
 }
 FUNC_1((size_t)VAR_2->n_tl_data == VAR_7);
    } else {
 FUNC_1(VAR_2->n_tl_data == 0);
    }

    FUNC_0(FUNC_3(VAR_1, &VAR_4));
    FUNC_1(VAR_4 == (uint32_t)VAR_2->n_key_data);

    VAR_2->key_data = FUNC_2(VAR_4, sizeof(VAR_2->key_data[0]));
    FUNC_1(VAR_2->key_data != ((void*)0));

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
 FUNC_0(FUNC_3(VAR_1, &VAR_3));
 FUNC_1(VAR_3 > 1);
 FUNC_0(FUNC_3(VAR_1, &VAR_3));
 VAR_2->kvno = VAR_3;
 FUNC_0(FUNC_3(VAR_1, &VAR_3));
 VAR_2->key_data[VAR_5].key_data_type[0] = VAR_3;
 FUNC_0(FUNC_3(VAR_1, &VAR_3));
 VAR_2->key_data[VAR_5].key_data_type[1] = VAR_3;
    }

    return 0;
}
