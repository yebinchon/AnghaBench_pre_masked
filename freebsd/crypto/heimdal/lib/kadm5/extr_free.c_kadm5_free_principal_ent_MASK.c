
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* tl_data_contents; int tl_data_length; struct TYPE_8__* tl_data_next; } ;
typedef TYPE_1__ krb5_tl_data ;
struct TYPE_9__ {int context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef TYPE_3__* kadm5_principal_ent_t ;
struct TYPE_10__ {TYPE_1__* key_data; scalar_t__ n_tl_data; TYPE_1__* tl_data; int n_key_data; int mod_name; int principal; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,int *,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

void
FUNC_4(void *VAR_0,
    kadm5_principal_ent_t VAR_1)
{
    kadm5_server_context *VAR_2 = VAR_0;
    if(VAR_1->principal)
 FUNC_2(VAR_2->context, VAR_1->principal);
    if(VAR_1->mod_name)
 FUNC_2(VAR_2->context, VAR_1->mod_name);
    FUNC_1(VAR_0, &VAR_1->n_key_data, VAR_1->key_data);
    while(VAR_1->n_tl_data && VAR_1->tl_data) {
 krb5_tl_data *VAR_3;
 VAR_3 = VAR_1->tl_data;
 VAR_1->tl_data = VAR_3->tl_data_next;
 VAR_1->n_tl_data--;
 FUNC_3(VAR_3->tl_data_contents, 0, VAR_3->tl_data_length);
 FUNC_0(VAR_3->tl_data_contents);
 FUNC_0(VAR_3);
    }
    if (VAR_1->key_data != ((void*)0))
 FUNC_0 (VAR_1->key_data);
}
