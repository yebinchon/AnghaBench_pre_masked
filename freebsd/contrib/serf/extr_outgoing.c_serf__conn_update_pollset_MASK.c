
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int pollset_baton; scalar_t__ (* pollset_add ) (int ,TYPE_4__*,int *) ;scalar_t__ (* pollset_rm ) (int ,TYPE_4__*,int *) ;} ;
typedef TYPE_2__ serf_context_t ;
struct TYPE_11__ {int reqevents; scalar_t__ state; int stop_writing; scalar_t__ probable_keepalive_limit; scalar_t__ completed_requests; scalar_t__ max_outstanding_requests; scalar_t__ completed_responses; int baton; scalar_t__ async_responses; scalar_t__ vec_len; scalar_t__ requests; scalar_t__ skt; TYPE_2__* ctx; } ;
typedef TYPE_3__ serf_connection_t ;
typedef scalar_t__ apr_status_t ;
struct TYPE_9__ {scalar_t__ s; } ;
struct TYPE_12__ {int reqevents; TYPE_1__ desc; int desc_type; int member_0; } ;
typedef TYPE_4__ apr_pollfd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_4__*,int *) ;

apr_status_t FUNC_4(serf_connection_t *VAR_8)
{
    serf_context_t *VAR_9 = VAR_8->ctx;
    apr_status_t VAR_10;
    apr_pollfd_t VAR_11 = { 0 };

    if (!VAR_8->skt) {
        return VAR_5;
    }


    VAR_11.desc_type = VAR_4;
    VAR_11.desc.s = VAR_8->skt;
    VAR_11.reqevents = VAR_8->reqevents;

    VAR_10 = VAR_9->pollset_rm(VAR_9->pollset_baton,
                             &VAR_11, &VAR_8->baton);
    if (VAR_10 && !FUNC_0(VAR_10))
        return VAR_10;


    VAR_11.reqevents = VAR_1 | VAR_0;
    if (VAR_8->requests &&
        VAR_8->state != VAR_7) {


        VAR_11.reqevents |= VAR_2;


        if (VAR_8->stop_writing != 1) {






            if (VAR_8->vec_len &&
                VAR_8->state != VAR_6)
                VAR_11.reqevents |= VAR_3;
            else {

                if ((VAR_8->probable_keepalive_limit &&
                     VAR_8->completed_requests > VAR_8->probable_keepalive_limit) ||
                    (VAR_8->max_outstanding_requests &&
                     VAR_8->completed_requests - VAR_8->completed_responses >=
                     VAR_8->max_outstanding_requests)) {

                }
                else if (FUNC_1(((void*)0), VAR_8)) {
                    VAR_11.reqevents |= VAR_3;
                }
            }
        }
    }


    if (VAR_8->async_responses) {
        VAR_11.reqevents |= VAR_2;
    }


    VAR_8->reqevents = VAR_11.reqevents;




    return VAR_9->pollset_add(VAR_9->pollset_baton,
                            &VAR_11, &VAR_8->baton);
}
