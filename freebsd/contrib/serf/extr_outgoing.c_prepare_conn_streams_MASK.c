
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; int * ssltunnel_ostream; int allocator; int skt; int * stream; int * ostream_head; int * ostream_tail; scalar_t__ connect_time; scalar_t__ latency; } ;
typedef TYPE_1__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef scalar_t__ apr_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ,int ) ;

__attribute__((used)) static apr_status_t FUNC_3(serf_connection_t *VAR_2,
                                         serf_bucket_t **VAR_3,
                                         serf_bucket_t **VAR_4,
                                         serf_bucket_t **VAR_5)
{
    apr_status_t VAR_6;

    if (VAR_2->stream == ((void*)0)) {
        VAR_2->latency = FUNC_0() - VAR_2->connect_time;
    }


    if (VAR_2->state == VAR_1) {



        if (VAR_2->stream == ((void*)0)) {
            VAR_6 = FUNC_1(VAR_2);
            if (VAR_6) {
                return VAR_6;
            }
        }
        *VAR_4 = VAR_2->ostream_tail;
        *VAR_5 = VAR_2->ostream_head;
        *VAR_3 = VAR_2->stream;
    } else {


        if (VAR_2->stream == ((void*)0)) {
            *VAR_3 = FUNC_2(VAR_2->skt,
                                                 VAR_2->allocator);
        }



        *VAR_4 = *VAR_5 = VAR_2->ssltunnel_ostream;
    }

    return VAR_0;
}
