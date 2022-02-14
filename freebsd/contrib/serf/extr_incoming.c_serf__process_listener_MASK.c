
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int accept_baton; int ctx; scalar_t__ (* accept_func ) (int ,TYPE_1__*,int ,int *,int *) ;int skt; int pool; } ;
typedef TYPE_1__ serf_listener_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_socket_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int **,int ,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int ,int *,int *) ;

apr_status_t FUNC_4(serf_listener_t *VAR_0)
{
    apr_status_t VAR_1;
    apr_socket_t *VAR_2;
    apr_pool_t *VAR_3;

    FUNC_0(&VAR_3, VAR_0->pool);

    VAR_1 = FUNC_2(&VAR_2, VAR_0->skt, VAR_3);

    if (VAR_1) {
        FUNC_1(VAR_3);
        return VAR_1;
    }

    VAR_1 = VAR_0->accept_func(VAR_0->ctx, VAR_0, VAR_0->accept_baton, VAR_2, VAR_3);

    if (VAR_1) {
        FUNC_1(VAR_3);
        return VAR_1;
    }

    return VAR_1;
}
