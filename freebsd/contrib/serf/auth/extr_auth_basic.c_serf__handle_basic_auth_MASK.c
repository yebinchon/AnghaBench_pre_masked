
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


struct TYPE_14__ {TYPE_4__* conn; } ;
typedef TYPE_2__ serf_request_t ;
struct TYPE_17__ {TYPE_1__* scheme; TYPE_6__* baton; } ;
struct TYPE_15__ {TYPE_5__ proxy_authn_info; int cred_cb; } ;
typedef TYPE_3__ serf_context_t ;
struct TYPE_16__ {int pool; TYPE_3__* ctx; } ;
typedef TYPE_4__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef TYPE_5__ serf__authn_info_t ;
struct TYPE_18__ {char* header; int value; } ;
typedef TYPE_6__ basic_authn_info_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ,char*,char*,char*,int *) ;
 char* FUNC_3 (int *,char const*) ;
 char* FUNC_4 (int ,TYPE_4__*,char*,int *) ;
 int FUNC_5 (int *,int ,char const*,int,int *) ;
 TYPE_5__* FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char**,char**,TYPE_2__*,void*,int,int ,char const*,int *) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;

apr_status_t
FUNC_11(int VAR_5,
                        serf_request_t *VAR_6,
                        serf_bucket_t *VAR_7,
                        const char *VAR_8,
                        const char *VAR_9,
                        void *VAR_10,
                        apr_pool_t *VAR_11)
{
    const char *VAR_12;
    apr_size_t VAR_13;
    serf_connection_t *VAR_14 = VAR_6->conn;
    serf_context_t *VAR_15 = VAR_14->ctx;
    serf__authn_info_t *VAR_16;
    basic_authn_info_t *VAR_17;
    apr_status_t VAR_18;
    apr_pool_t *VAR_19;
    char *VAR_20, *VAR_21, *VAR_22;
    const char *VAR_23, *VAR_24 = ((void*)0);



    if (!VAR_15->cred_cb) {
        return VAR_3;
    }

    if (VAR_5 == 401) {
        VAR_16 = FUNC_6(VAR_14);
    } else {
        VAR_16 = &VAR_15->proxy_authn_info;
    }
    VAR_17 = VAR_16->baton;

    VAR_22 = ((void*)0);
    VAR_23 = FUNC_8(VAR_9, '=');

    if (VAR_23 && FUNC_10(VAR_9, "realm", 5) == 0) {
        VAR_22 = FUNC_3(VAR_11, VAR_23 + 1);
        if (VAR_22[0] == '\"') {
            apr_size_t VAR_25;

            VAR_25 = FUNC_9(VAR_22);
            if (VAR_22[VAR_25 - 1] == '\"') {
                VAR_22[VAR_25 - 1] = '\0';
                VAR_22++;
            }
        }

        if (!VAR_22) {
            return VAR_4;
        }

        VAR_24 = FUNC_4(VAR_5 == 401 ? VAR_1 : VAR_2,
                                      VAR_14, VAR_22,
                                      VAR_11);
    }


    FUNC_0(&VAR_19, VAR_11);
    VAR_18 = FUNC_7(VAR_15,
                                       &VAR_20, &VAR_21,
                                       VAR_6, VAR_10,
                                       VAR_5, VAR_16->scheme->name,
                                       VAR_24, VAR_19);
    if (VAR_18) {
        FUNC_1(VAR_19);
        return VAR_18;
    }

    VAR_12 = FUNC_2(VAR_14->pool, VAR_20, ":", VAR_21, ((void*)0));
    VAR_13 = FUNC_9(VAR_12);
    FUNC_1(VAR_19);

    FUNC_5(&VAR_17->value,
                             VAR_16->scheme->name,
                             VAR_12, VAR_13, VAR_11);
    VAR_17->header = (VAR_5 == 401) ? "Authorization" : "Proxy-Authorization";

    return VAR_0;
}
