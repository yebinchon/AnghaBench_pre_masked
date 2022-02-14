
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int code; int version; } ;
typedef TYPE_1__ serf_status_line ;
struct TYPE_17__ {TYPE_4__* conn; int setup_baton; int setup; scalar_t__ ssltunnel; } ;
typedef TYPE_2__ serf_request_t ;
struct TYPE_21__ {TYPE_5__* scheme; } ;
struct TYPE_18__ {TYPE_8__ proxy_authn_info; } ;
typedef TYPE_3__ serf_context_t ;
struct TYPE_19__ {TYPE_3__* ctx; } ;
typedef TYPE_4__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef scalar_t__ (* serf__validate_response_func_t ) (TYPE_5__*,int ,int,TYPE_4__*,TYPE_2__*,int *,int *) ;
typedef TYPE_8__ serf__authn_info_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_20__ {scalar_t__ (* validate_response_func ) (TYPE_5__*,int ,int,TYPE_4__*,TYPE_2__*,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,TYPE_2__*,int *,void*,int *) ;
 TYPE_8__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;

apr_status_t FUNC_10(int *VAR_4,
                                        serf_request_t *VAR_5,
                                        serf_bucket_t *VAR_6,
                                        void *VAR_7,
                                        apr_pool_t *VAR_8)
{
    apr_status_t VAR_9;
    serf_status_line VAR_10;

    *VAR_4 = 0;



    VAR_9 = FUNC_7(VAR_6, &VAR_10);
    if (FUNC_2(VAR_9)) {
        return VAR_9;
    }
    if (!VAR_10.version && (FUNC_1(VAR_9) ||
                        FUNC_0(VAR_9))) {
        return VAR_9;
    }

    VAR_9 = FUNC_8(VAR_6);
    if (VAR_9) {
        if (!FUNC_1(VAR_9)) {
            return VAR_9;
        }




        return VAR_1;
    }

    if (VAR_10.code == 401 || VAR_10.code == 407) {





        VAR_9 = FUNC_3(VAR_6);
        *VAR_4 = 1;


        if (!FUNC_1(VAR_9)) {
            return VAR_9;
        }

        VAR_9 = FUNC_4(VAR_10.code, VAR_5, VAR_6, VAR_7, VAR_8);
        if (VAR_9 != VAR_1) {
            return VAR_9;
        }



        if (VAR_5->ssltunnel) {
            FUNC_6(VAR_5->conn,
                                           VAR_5->setup,
                                           VAR_5->setup_baton);
        } else {
            FUNC_9(VAR_5->conn,
                                                    VAR_5->setup,
                                                    VAR_5->setup_baton);
        }

        return VAR_0;
    } else {
        serf__validate_response_func_t VAR_11;
        serf_connection_t *VAR_12 = VAR_5->conn;
        serf_context_t *VAR_13 = VAR_12->ctx;
        serf__authn_info_t *VAR_14;
        apr_status_t VAR_15 = VAR_1;



        VAR_14 = FUNC_5(VAR_12);
        if (VAR_14->scheme) {
            VAR_11 = VAR_14->scheme->validate_response_func;
            VAR_15 = VAR_11(VAR_14->scheme, VAR_2, VAR_10.code,
                                        VAR_12, VAR_5, VAR_6, VAR_8);
        }


        VAR_14 = &VAR_13->proxy_authn_info;
        if (!VAR_15 && VAR_14->scheme) {
            VAR_11 = VAR_14->scheme->validate_response_func;
            VAR_15 = VAR_11(VAR_14->scheme, VAR_3, VAR_10.code,
                                        VAR_12, VAR_5, VAR_6, VAR_8);
        }

        if (VAR_15) {


            VAR_9 = FUNC_3(VAR_6);
            *VAR_4 = 1;
            if (!FUNC_1(VAR_9)) {
                return VAR_9;
            }

            return VAR_15;
        }
    }

    return VAR_1;
}
