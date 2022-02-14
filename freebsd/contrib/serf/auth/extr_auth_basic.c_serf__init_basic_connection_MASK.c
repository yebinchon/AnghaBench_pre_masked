
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ baton; } ;
struct TYPE_7__ {TYPE_3__ proxy_authn_info; } ;
typedef TYPE_1__ serf_context_t ;
struct TYPE_8__ {TYPE_1__* ctx; } ;
typedef TYPE_2__ serf_connection_t ;
typedef int serf__authn_scheme_t ;
typedef TYPE_3__ serf__authn_info_t ;
typedef int basic_authn_info_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;

apr_status_t
FUNC_2(const serf__authn_scheme_t *VAR_1,
                            int VAR_2,
                            serf_connection_t *VAR_3,
                            apr_pool_t *VAR_4)
{
    serf_context_t *VAR_5 = VAR_3->ctx;
    serf__authn_info_t *VAR_6;

    if (VAR_2 == 401) {
        VAR_6 = FUNC_1(VAR_3);
    } else {
        VAR_6 = &VAR_5->proxy_authn_info;
    }

    if (!VAR_6->baton) {
        VAR_6->baton = FUNC_0(VAR_4, sizeof(basic_authn_info_t));
    }

    return VAR_0;
}
