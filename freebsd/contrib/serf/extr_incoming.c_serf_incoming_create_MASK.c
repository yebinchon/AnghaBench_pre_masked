
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* client; } ;
struct TYPE_15__ {TYPE_1__ u; int type; } ;
struct TYPE_11__ {int * s; } ;
struct TYPE_14__ {int reqevents; TYPE_2__ desc; int desc_type; } ;
struct TYPE_12__ {TYPE_6__ baton; TYPE_5__ desc; int * skt; int request; void* request_baton; TYPE_4__* ctx; } ;
typedef TYPE_3__ serf_incoming_t ;
typedef int serf_incoming_request_cb_t ;
struct TYPE_13__ {int pollset_baton; int (* pollset_add ) (int ,TYPE_5__*,TYPE_6__*) ;} ;
typedef TYPE_4__ serf_context_t ;
typedef int apr_status_t ;
typedef int apr_socket_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,TYPE_5__*,TYPE_6__*) ;

apr_status_t FUNC_2(
    serf_incoming_t **VAR_3,
    serf_context_t *VAR_4,
    apr_socket_t *VAR_5,
    void *VAR_6,
    serf_incoming_request_cb_t VAR_7,
    apr_pool_t *VAR_8)
{
    apr_status_t VAR_9;
    serf_incoming_t *VAR_10 = FUNC_0(VAR_8, sizeof(*VAR_10));

    VAR_10->ctx = VAR_4;
    VAR_10->baton.type = VAR_2;
    VAR_10->baton.u.client = VAR_10;
    VAR_10->request_baton = VAR_6;
    VAR_10->request = VAR_7;
    VAR_10->skt = VAR_5;
    VAR_10->desc.desc_type = VAR_1;
    VAR_10->desc.desc.s = VAR_10->skt;
    VAR_10->desc.reqevents = VAR_0;

    VAR_9 = VAR_4->pollset_add(VAR_4->pollset_baton,
                         &VAR_10->desc, &VAR_10->baton);
    *VAR_3 = VAR_10;

    return VAR_9;
}
