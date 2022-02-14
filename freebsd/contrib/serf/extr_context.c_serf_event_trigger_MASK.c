
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int serf_listener_t ;
struct TYPE_13__ {int * client; int * listener; TYPE_5__* conn; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ serf_io_baton_t ;
typedef int serf_incoming_t ;
struct TYPE_15__ {int pollset_baton; int (* pollset_rm ) (int ,TYPE_6__*,int *) ;} ;
typedef TYPE_4__ serf_context_t ;
struct TYPE_16__ {scalar_t__ status; int seen_in_pollset; int baton; int reqevents; scalar_t__ skt; TYPE_4__* ctx; } ;
typedef TYPE_5__ serf_connection_t ;
typedef scalar_t__ apr_status_t ;
struct TYPE_12__ {scalar_t__ s; } ;
struct TYPE_17__ {int rtnevents; int reqevents; TYPE_1__ desc; void* desc_type; int member_0; } ;
typedef TYPE_6__ apr_pollfd_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_6__*,int *) ;
 int FUNC_4 (int ,TYPE_6__*,int *) ;

apr_status_t FUNC_5(
    serf_context_t *VAR_6,
    void *VAR_7,
    const apr_pollfd_t *VAR_8)
{
    apr_pollfd_t VAR_9 = { 0 };
    apr_status_t VAR_10 = VAR_2;
    serf_io_baton_t *VAR_11 = VAR_7;

    if (VAR_11->type == VAR_4) {
        serf_connection_t *VAR_12 = VAR_11->u.conn;
        serf_context_t *VAR_13 = VAR_12->ctx;




        if (VAR_12->status) {
            VAR_9.desc_type = VAR_1;
            VAR_9.desc.s = VAR_12->skt;
            VAR_9.reqevents = VAR_12->reqevents;
            VAR_13->pollset_rm(VAR_13->pollset_baton,
                            &VAR_9, &VAR_12->baton);
            return VAR_12->status;
        }

        if ((VAR_12->seen_in_pollset & VAR_8->rtnevents) != 0 ||
            (VAR_12->seen_in_pollset & VAR_0) != 0) {
            return VAR_2;
        }

        VAR_12->seen_in_pollset |= VAR_8->rtnevents;

        if ((VAR_12->status = FUNC_1(VAR_12,
                                         VAR_8->rtnevents)) != VAR_2) {



            if (VAR_12->skt) {
                VAR_9.desc_type = VAR_1;
                VAR_9.desc.s = VAR_12->skt;
                VAR_9.reqevents = VAR_12->reqevents;
                VAR_13->pollset_rm(VAR_13->pollset_baton,
                                &VAR_9, &VAR_12->baton);
            }
            return VAR_12->status;
        }
    }
    else if (VAR_11->type == VAR_5) {
        serf_listener_t *VAR_14 = VAR_11->u.listener;

        VAR_10 = FUNC_2(VAR_14);

        if (VAR_10) {
            return VAR_10;
        }
    }
    else if (VAR_11->type == VAR_3) {
        serf_incoming_t *VAR_15 = VAR_11->u.client;

        VAR_10 = FUNC_0(VAR_15, VAR_8->rtnevents);

        if (VAR_10) {
            return VAR_10;
        }
    }
    return VAR_10;
}
