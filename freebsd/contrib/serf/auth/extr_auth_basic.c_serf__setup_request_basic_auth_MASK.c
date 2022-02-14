
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int serf_request_t ;
struct TYPE_10__ {TYPE_4__* baton; } ;
struct TYPE_8__ {TYPE_3__ proxy_authn_info; } ;
typedef TYPE_1__ serf_context_t ;
struct TYPE_9__ {TYPE_1__* ctx; } ;
typedef TYPE_2__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef TYPE_3__ serf__authn_info_t ;
typedef scalar_t__ peer_t ;
struct TYPE_11__ {scalar_t__ value; scalar_t__ header; } ;
typedef TYPE_4__ basic_authn_info_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;

apr_status_t
FUNC_2(peer_t VAR_3,
                               int VAR_4,
                               serf_connection_t *VAR_5,
                               serf_request_t *VAR_6,
                               const char *VAR_7,
                               const char *VAR_8,
                               serf_bucket_t *VAR_9)
{
    serf_context_t *VAR_10 = VAR_5->ctx;
    serf__authn_info_t *VAR_11;
    basic_authn_info_t *VAR_12;

    if (VAR_3 == VAR_1) {
        VAR_11 = FUNC_0(VAR_5);
    } else {
        VAR_11 = &VAR_10->proxy_authn_info;
    }
    VAR_12 = VAR_11->baton;

    if (VAR_12 && VAR_12->header && VAR_12->value) {
        FUNC_1(VAR_9, VAR_12->header,
                                 VAR_12->value);
        return VAR_0;
    }

    return VAR_2;
}
