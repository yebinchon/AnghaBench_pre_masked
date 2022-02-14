
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pollset; } ;
typedef TYPE_1__ serf_pollset_t ;
typedef int serf_io_baton_t ;
struct TYPE_10__ {scalar_t__ pollset_baton; } ;
typedef TYPE_2__ serf_context_t ;
typedef int apr_status_t ;
typedef int apr_short_interval_time_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int * client_data; } ;
typedef TYPE_3__ apr_pollfd_t ;
typedef int apr_int32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *,TYPE_3__ const**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *,TYPE_3__ const*) ;

apr_status_t FUNC_5(
    serf_context_t *VAR_2,
    apr_short_interval_time_t VAR_3,
    apr_pool_t *VAR_4)
{
    apr_status_t VAR_5;
    apr_int32_t VAR_6;
    const apr_pollfd_t *VAR_7;
    serf_pollset_t *VAR_8 = (serf_pollset_t*)VAR_2->pollset_baton;

    if ((VAR_5 = FUNC_3(VAR_2)) != VAR_0) {
        return VAR_5;
    }

    if ((VAR_5 = FUNC_2(VAR_8->pollset, VAR_3, &VAR_6,
                                   &VAR_7)) != VAR_0) {


        if (FUNC_0(VAR_5))
            return VAR_0;
        if (FUNC_1(VAR_5))
            return VAR_1;
        return VAR_5;
    }

    while (VAR_6--) {
        serf_io_baton_t *VAR_9 = VAR_7->client_data;

        VAR_5 = FUNC_4(VAR_2, VAR_9, VAR_7);
        if (VAR_5) {
            return VAR_5;
        }

        VAR_7++;
    }

    return VAR_0;
}
