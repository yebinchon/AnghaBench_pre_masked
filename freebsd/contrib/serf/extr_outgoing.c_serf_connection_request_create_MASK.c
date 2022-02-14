
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int serf_request_t ;
typedef int serf_request_setup_t ;
struct TYPE_6__ {int dirty_conn; TYPE_1__* ctx; int requests_tail; int requests; } ;
typedef TYPE_2__ serf_connection_t ;
struct TYPE_5__ {int dirty_pollset; } ;


 int * FUNC_0 (TYPE_2__*,int ,void*,int ,int ) ;
 int FUNC_1 (int *,int *,int *) ;

serf_request_t *FUNC_2(
    serf_connection_t *VAR_0,
    serf_request_setup_t VAR_1,
    void *VAR_2)
{
    serf_request_t *VAR_3;

    VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2,
                             0,
                             0 );


    FUNC_1(&VAR_0->requests, &VAR_0->requests_tail, VAR_3);


    VAR_0->ctx->dirty_pollset = 1;
    VAR_0->dirty_conn = 1;

    return VAR_3;
}
