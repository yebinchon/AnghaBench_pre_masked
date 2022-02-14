
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int writing_started; struct TYPE_14__* next; int * resp_bkt; int acceptor_baton; int * (* acceptor ) (TYPE_2__*,int ,int ,int *) ;scalar_t__ req_bkt; } ;
typedef TYPE_2__ serf_request_t ;
struct TYPE_15__ {int dirty_conn; scalar_t__ completed_responses; scalar_t__ probable_keepalive_limit; TYPE_1__* ctx; int * requests_tail; TYPE_2__* requests; int stream; scalar_t__ async_responses; int pool; scalar_t__ stop_writing; } ;
typedef TYPE_3__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int dirty_pollset; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*,int *,int **,int **) ;
 scalar_t__ FUNC_12 (TYPE_2__**,TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (int ,char const**,int *) ;
 int * FUNC_15 (TYPE_2__*,int ,int ,int *) ;

__attribute__((used)) static apr_status_t FUNC_16(serf_connection_t *VAR_5)
{
    apr_status_t VAR_6;
    apr_pool_t *VAR_7;
    int VAR_8 = VAR_1;




    serf_request_t *VAR_9 = VAR_5->requests;



    if (VAR_5->stop_writing) {
        VAR_5->stop_writing = 0;
        VAR_5->dirty_conn = 1;
        VAR_5->ctx->dirty_pollset = 1;
    }



    if ((VAR_6 = FUNC_5(&VAR_7, VAR_5->pool)) != VAR_0)
        goto error;


    while (1) {
        serf_bucket_t *VAR_10, *VAR_11;

        FUNC_4(VAR_7);


        VAR_6 = FUNC_11(VAR_5, &VAR_5->stream, &VAR_10, &VAR_11);
        if (VAR_6) {
            goto error;
        }


        if (VAR_5->async_responses) {

            VAR_6 = FUNC_8(VAR_5, VAR_7);
            if (FUNC_0(VAR_6)) {
                VAR_6 = VAR_0;
                goto error;
            }
            if (VAR_6) {
                goto error;
            }
            continue;
        }
        if (VAR_9->req_bkt || !VAR_9->writing_started) {
            const char *VAR_12;
            apr_size_t VAR_13;

            VAR_6 = FUNC_14(VAR_5->stream, &VAR_12, &VAR_13);

            if (FUNC_3(VAR_6)) {
                FUNC_13(VAR_5, 1);
                VAR_6 = VAR_0;
                goto error;
            }
            else if (FUNC_0(VAR_6) && !VAR_13) {
                VAR_6 = VAR_0;
                goto error;
            } else if (VAR_6 && !FUNC_0(VAR_6)) {

                goto error;
            }



        }




        if (VAR_9->resp_bkt == ((void*)0)) {
            VAR_9->resp_bkt = (*VAR_9->acceptor)(VAR_9, VAR_5->stream,
                                                     VAR_9->acceptor_baton,
                                                     VAR_7);
            FUNC_4(VAR_7);
        }

        VAR_6 = FUNC_9(VAR_9, VAR_7);




        if (FUNC_2(VAR_6) ||
            FUNC_1(VAR_6) ||
            VAR_6 == VAR_4) {



            if (VAR_5->completed_responses) {
                FUNC_13(VAR_5, 1);
                VAR_6 = VAR_0;
            }
            else if (VAR_6 == VAR_4) {
                VAR_6 = VAR_2;
            }
            goto error;
        }




        if (FUNC_0(VAR_6)) {




            if (FUNC_12(&VAR_9, VAR_5) && !VAR_9) {
                VAR_5->dirty_conn = 1;
                VAR_5->ctx->dirty_pollset = 1;
            }
            VAR_6 = VAR_0;
            goto error;
        }


        if (!VAR_6) {
            continue;
        }

        VAR_8 = FUNC_10(VAR_9->resp_bkt);

        if (!FUNC_3(VAR_6) &&
            VAR_8 != VAR_3) {



            goto error;
        }







        VAR_5->requests = VAR_9->next;

        FUNC_7(VAR_9);

        VAR_9 = VAR_5->requests;


        if (VAR_9 == ((void*)0)) {
            VAR_5->requests_tail = ((void*)0);
        }

        VAR_5->completed_responses++;


        VAR_5->dirty_conn = 1;
        VAR_5->ctx->dirty_pollset = 1;


        if (VAR_8 == VAR_3) {
            FUNC_13(VAR_5, 1);
            if (FUNC_3(VAR_6))
                VAR_6 = VAR_0;
            goto error;
        }






        if (VAR_5->probable_keepalive_limit &&
            VAR_5->completed_responses > VAR_5->probable_keepalive_limit) {
            VAR_5->probable_keepalive_limit = 0;
        }





        if (VAR_9 == ((void*)0) || !VAR_9->writing_started) {
            VAR_5->dirty_conn = 1;
            VAR_5->ctx->dirty_pollset = 1;
            VAR_6 = VAR_0;
            goto error;
        }
    }

error:
    FUNC_6(VAR_7);
    return VAR_6;
}
