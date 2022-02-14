
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ssltunnel; int handler_baton; int req_bkt; struct TYPE_8__* next; TYPE_3__* conn; } ;
typedef TYPE_1__ serf_request_t ;
struct TYPE_9__ {scalar_t__ (* cred_cb ) (char**,char**,TYPE_1__*,int ,int,char const*,char const*,int *) ;} ;
typedef TYPE_2__ serf_context_t ;
struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_3__ serf_connection_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (char**,char**,TYPE_1__*,int ,int,char const*,char const*,int *) ;

apr_status_t
FUNC_2(serf_context_t *VAR_3,
                          char **VAR_4,
                          char **VAR_5,
                          serf_request_t *VAR_6, void *VAR_7,
                          int VAR_8, const char *VAR_9,
                          const char *VAR_10,
                          apr_pool_t *VAR_11)
{
    serf_connection_t *VAR_12 = VAR_6->conn;
    serf_request_t *VAR_13 = VAR_6;
    apr_status_t VAR_14;

    if (VAR_6->ssltunnel == 1 &&
        VAR_12->state == VAR_2) {
        VAR_13 = VAR_6->next;

        if (!VAR_13)
            return VAR_0;

        if (!VAR_13->req_bkt) {
            apr_status_t VAR_15;

            VAR_15 = FUNC_0(VAR_13);


            if (VAR_15)
                return VAR_15;
        }
    }


    VAR_14 = (*VAR_3->cred_cb)(VAR_4, VAR_5,
                             VAR_13, VAR_13->handler_baton,
                             VAR_8, VAR_9, VAR_10, VAR_11);
    if (VAR_14)
        return VAR_14;

    return VAR_1;
}
