
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t tl_data_length; struct TYPE_6__* tl_data_next; int * tl_data_contents; int tl_data_type; } ;
typedef TYPE_1__ krb5_tl_data ;
typedef int kadm5_ret_t ;
typedef TYPE_2__* kadm5_principal_ent_t ;
typedef int int16_t ;
struct TYPE_7__ {int n_tl_data; TYPE_1__* tl_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,void const*,size_t) ;

__attribute__((used)) static kadm5_ret_t
FUNC_5(kadm5_principal_ent_t VAR_1, int16_t VAR_2,
     const void *VAR_3, size_t VAR_4)
{
    krb5_tl_data *VAR_5;

    VAR_5 = FUNC_1(1, sizeof(*VAR_5));
    if (VAR_5 == ((void*)0))
 return FUNC_0(VAR_0);

    VAR_5->tl_data_type = VAR_2;
    VAR_5->tl_data_length = VAR_4;
    VAR_5->tl_data_contents = FUNC_3(VAR_4);
    if (VAR_5->tl_data_contents == ((void*)0) && VAR_4 != 0) {
 FUNC_2(VAR_5);
 return FUNC_0(VAR_0);
    }
    FUNC_4(VAR_5->tl_data_contents, VAR_3, VAR_4);

    VAR_5->tl_data_next = VAR_1->tl_data;
    VAR_1->tl_data = VAR_5;
    VAR_1->n_tl_data++;

    return 0;
}
