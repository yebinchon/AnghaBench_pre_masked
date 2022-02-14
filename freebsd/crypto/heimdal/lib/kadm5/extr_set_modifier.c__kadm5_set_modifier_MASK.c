
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int caller; int context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef int kadm5_ret_t ;
struct TYPE_8__ {TYPE_3__* modified_by; } ;
typedef TYPE_2__ hdb_entry ;
struct TYPE_9__ {int principal; int time; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int *) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;

kadm5_ret_t
FUNC_4(kadm5_server_context *VAR_1,
      hdb_entry *VAR_2)
{
    kadm5_ret_t VAR_3;
    if(VAR_2->modified_by == ((void*)0)){
 VAR_2->modified_by = FUNC_2(sizeof(*VAR_2->modified_by));
 if(VAR_2->modified_by == ((void*)0))
     return VAR_0;
    } else
 FUNC_0(VAR_2->modified_by);
    VAR_2->modified_by->time = FUNC_3(((void*)0));
    VAR_3 = FUNC_1(VAR_1->context, VAR_1->caller,
         &VAR_2->modified_by->principal);
    return VAR_3;
}
