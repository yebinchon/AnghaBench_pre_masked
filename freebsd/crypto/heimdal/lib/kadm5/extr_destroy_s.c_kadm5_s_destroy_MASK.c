
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_context ;
struct TYPE_4__ {scalar_t__ my_context; int caller; int config; int log_context; TYPE_2__* db; int context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef int kadm5_ret_t ;
struct TYPE_5__ {int (* hdb_destroy ) (int ,TYPE_2__*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;

kadm5_ret_t
FUNC_6(void *VAR_0)
{
    kadm5_ret_t VAR_1;
    kadm5_server_context *VAR_2 = VAR_0;
    krb5_context VAR_3 = VAR_2->context;

    VAR_1 = VAR_2->db->hdb_destroy(VAR_3, VAR_2->db);
    FUNC_1 (&VAR_2->log_context);
    FUNC_0 (&VAR_2->config);
    FUNC_4 (VAR_3, VAR_2->caller);
    if(VAR_2->my_context)
 FUNC_3(VAR_3);
    FUNC_2 (VAR_2);
    return VAR_1;
}
