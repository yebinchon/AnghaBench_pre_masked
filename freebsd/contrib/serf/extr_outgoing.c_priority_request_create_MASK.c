
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* next; scalar_t__ priority; int ssltunnel; scalar_t__ writing_started; int * req_bkt; } ;
typedef TYPE_2__ serf_request_t ;
typedef int serf_request_setup_t ;
struct TYPE_10__ {int dirty_conn; TYPE_1__* ctx; TYPE_2__* requests; } ;
typedef TYPE_3__ serf_connection_t ;
struct TYPE_8__ {int dirty_pollset; } ;


 TYPE_2__* FUNC_0 (TYPE_3__*,int ,void*,int,int) ;

__attribute__((used)) static serf_request_t *
FUNC_1(serf_connection_t *VAR_0,
                        int VAR_1,
                        serf_request_setup_t VAR_2,
                        void *VAR_3)
{
    serf_request_t *VAR_4;
    serf_request_t *VAR_5, *VAR_6;

    VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3,
                             1,
                             VAR_1);


    VAR_5 = VAR_0->requests;
    VAR_6 = ((void*)0);


    while (VAR_5 != ((void*)0) && VAR_5->req_bkt == ((void*)0) && VAR_5->writing_started) {
        VAR_6 = VAR_5;
        VAR_5 = VAR_5->next;
    }






    if (!VAR_4->ssltunnel) {

        while (VAR_5 != ((void*)0) && VAR_5->priority) {
            VAR_6 = VAR_5;
            VAR_5 = VAR_5->next;
        }
    }

    if (VAR_6) {
        VAR_4->next = VAR_5;
        VAR_6->next = VAR_4;
    } else {
        VAR_4->next = VAR_5;
        VAR_0->requests = VAR_4;
    }


    VAR_0->ctx->dirty_pollset = 1;
    VAR_0->dirty_conn = 1;

    return VAR_4;
}
