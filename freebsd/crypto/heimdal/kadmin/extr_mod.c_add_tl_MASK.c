
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* tl_data_next; int tl_data_contents; int tl_data_length; int tl_data_type; } ;
typedef TYPE_1__ krb5_tl_data ;
struct TYPE_8__ {int data; int length; } ;
typedef TYPE_2__ krb5_data ;
struct TYPE_9__ {TYPE_1__* tl_data; int n_tl_data; } ;
typedef TYPE_3__ kadm5_principal_ent_rec ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(kadm5_principal_ent_rec *VAR_1, int VAR_2, krb5_data *VAR_3)
{
    krb5_tl_data *VAR_4, **VAR_5;

    VAR_4 = FUNC_0(1, sizeof(*VAR_4));
    VAR_4->tl_data_next = ((void*)0);
    VAR_4->tl_data_type = VAR_0;
    VAR_4->tl_data_length = VAR_3->length;
    VAR_4->tl_data_contents = VAR_3->data;

    VAR_1->n_tl_data++;
    VAR_5 = &VAR_1->tl_data;
    while (*VAR_5 != ((void*)0))
 VAR_5 = &(*VAR_5)->tl_data_next;
    *VAR_5 = VAR_4;

    return;
}
