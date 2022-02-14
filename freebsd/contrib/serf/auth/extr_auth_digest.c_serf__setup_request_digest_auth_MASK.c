
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {void* auth_baton; } ;
typedef TYPE_1__ serf_request_t ;
struct TYPE_16__ {TYPE_5__* baton; } ;
struct TYPE_14__ {TYPE_4__ proxy_authn_info; } ;
typedef TYPE_2__ serf_context_t ;
struct TYPE_15__ {int pool; TYPE_2__* ctx; } ;
typedef TYPE_3__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef TYPE_4__ serf__authn_info_t ;
typedef scalar_t__ peer_t ;
struct TYPE_17__ {char* header; int digest_nc; scalar_t__ realm; } ;
typedef TYPE_5__ digest_authn_info_t ;
struct TYPE_18__ {char* path; } ;
typedef TYPE_6__ apr_uri_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char const*,TYPE_6__*) ;
 int FUNC_1 (char const**,TYPE_5__*,char const*,char const*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,char*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

apr_status_t
FUNC_5(peer_t VAR_2,
                                int VAR_3,
                                serf_connection_t *VAR_4,
                                serf_request_t *VAR_5,
                                const char *VAR_6,
                                const char *VAR_7,
                                serf_bucket_t *VAR_8)
{
    serf_context_t *VAR_9 = VAR_4->ctx;
    serf__authn_info_t *VAR_10;
    digest_authn_info_t *VAR_11;
    apr_status_t VAR_12;

    if (VAR_2 == VAR_1) {
        VAR_10 = FUNC_2(VAR_4);
    } else {
        VAR_10 = &VAR_9->proxy_authn_info;
    }
    VAR_11 = VAR_10->baton;

    if (VAR_11 && VAR_11->realm) {
        const char *VAR_13;
        const char *VAR_14;






        if (FUNC_4(VAR_6, "CONNECT") == 0)
            VAR_14 = VAR_7;
        else {
            apr_uri_t VAR_15;


            VAR_12 = FUNC_0(VAR_4->pool, VAR_7, &VAR_15);
            if (VAR_12)
                return VAR_12;

            VAR_14 = VAR_15.path;
        }


        VAR_11->header = (VAR_2 == VAR_1) ? "Authorization" :
            "Proxy-Authorization";
        VAR_12 = FUNC_1(&VAR_13, VAR_11, VAR_14, VAR_6,
                                   VAR_4->pool);
        if (VAR_12)
            return VAR_12;

        FUNC_3(VAR_8, VAR_11->header,
                                 VAR_13);
        VAR_11->digest_nc++;




        VAR_5->auth_baton = (void *)VAR_14;
    }

    return VAR_0;
}
