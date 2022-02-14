
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int writing_started; int next; int * req_bkt; } ;
typedef TYPE_2__ serf_request_t ;
struct TYPE_14__ {scalar_t__ probable_keepalive_limit; scalar_t__ completed_requests; int dirty_conn; int max_outstanding_requests; scalar_t__ state; int completed_responses; scalar_t__ vec_len; int stop_writing; int requests; scalar_t__ async_responses; scalar_t__ hit_eof; TYPE_1__* ctx; int vec; int stream; } ;
typedef TYPE_3__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef scalar_t__ apr_status_t ;
struct TYPE_12__ {int dirty_pollset; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int *,int **,int **) ;
 int FUNC_8 (TYPE_2__**,TYPE_3__*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;

__attribute__((used)) static apr_status_t FUNC_14(serf_connection_t *VAR_5)
{
    if (VAR_5->probable_keepalive_limit &&
        VAR_5->completed_requests > VAR_5->probable_keepalive_limit) {

        VAR_5->dirty_conn = 1;
        VAR_5->ctx->dirty_pollset = 1;


        return VAR_0;
    }




    while (1) {
        serf_request_t *VAR_6;
        int VAR_7 = 0;
        apr_status_t VAR_8;
        apr_status_t VAR_9;
        serf_bucket_t *VAR_10;
        serf_bucket_t *VAR_11;
        int VAR_12 = VAR_5->max_outstanding_requests;





        if (VAR_5->state != VAR_2)
            VAR_12 = 1;

        if (VAR_12 &&
            VAR_5->completed_requests -
                VAR_5->completed_responses >= VAR_12) {

            return VAR_0;
        }


        while (VAR_5->vec_len) {
            VAR_8 = FUNC_13(VAR_5);




            if (FUNC_0(VAR_8))
                return VAR_0;
            if (FUNC_4(VAR_8) ||
                FUNC_2(VAR_8) ||
                FUNC_1(VAR_8))
                return FUNC_6(VAR_5);
            if (VAR_8)
                return VAR_8;
        }







        if (!FUNC_8(&VAR_6, VAR_5)) {





            VAR_5->dirty_conn = 1;
            VAR_5->ctx->dirty_pollset = 1;
            return VAR_0;
        }

        VAR_8 = FUNC_7(VAR_5, &VAR_5->stream, &VAR_10, &VAR_11);
        if (VAR_8) {
            return VAR_8;
        }

        if (VAR_6) {
            if (VAR_6->req_bkt == ((void*)0)) {
                VAR_9 = FUNC_12(VAR_6);
                if (VAR_9) {

                    return VAR_9;
                }
            }

            if (!VAR_6->writing_started) {
                VAR_6->writing_started = 1;
                FUNC_9(VAR_10, VAR_6->req_bkt);
            }
        }






        VAR_9 = FUNC_11(VAR_11,
                                             VAR_4,
                                             VAR_1,
                                             VAR_5->vec,
                                             &VAR_5->vec_len);

        if (!VAR_5->hit_eof) {
            if (FUNC_0(VAR_9)) {

                VAR_7 = 1;
            }
            else if (VAR_9 == VAR_3) {
                VAR_5->stop_writing = 1;
                VAR_5->dirty_conn = 1;
                VAR_5->ctx->dirty_pollset = 1;
            }
            else if (VAR_9 && !FUNC_3(VAR_9)) {

                return VAR_9;
            }
        }



        if (VAR_5->vec_len > 0) {
            VAR_8 = FUNC_13(VAR_5);




            if (FUNC_0(VAR_8))
                return VAR_0;
            if (FUNC_4(VAR_8))
                return FUNC_6(VAR_5);
            if (FUNC_2(VAR_8) ||
                FUNC_1(VAR_8)) {
                return FUNC_6(VAR_5);
            }
            if (VAR_8)
                return VAR_8;
        }

        if (VAR_9 == VAR_3) {
            VAR_7 = 1;
            VAR_5->stop_writing = 1;
            VAR_5->dirty_conn = 1;
            VAR_5->ctx->dirty_pollset = 1;
        }
        else if (VAR_6 && VAR_9 && VAR_5->hit_eof &&
                 VAR_5->vec_len == 0) {
            VAR_5->hit_eof = 0;
            FUNC_10(VAR_6->req_bkt);
            VAR_6->req_bkt = ((void*)0);




            if (VAR_5->async_responses) {
                VAR_5->requests = VAR_6->next;
                FUNC_5(VAR_6);
            }

            VAR_5->completed_requests++;

            if (VAR_5->probable_keepalive_limit &&
                VAR_5->completed_requests > VAR_5->probable_keepalive_limit) {

                VAR_7 = 1;
            }
        }

        if (VAR_7) {
            return VAR_0;
        }
    }

}
