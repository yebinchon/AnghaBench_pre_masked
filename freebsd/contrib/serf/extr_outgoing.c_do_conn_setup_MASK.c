
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ostream_head; int * ostream_tail; int pool; int setup_baton; int stream; int skt; scalar_t__ (* setup ) (int ,int *,int **,int ,int ) ;int allocator; } ;
typedef TYPE_1__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef scalar_t__ apr_status_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *,int **,int ,int ) ;

__attribute__((used)) static apr_status_t FUNC_6(serf_connection_t *VAR_1)
{
    apr_status_t VAR_2;
    serf_bucket_t *VAR_3;

    if (VAR_1->ostream_head == ((void*)0)) {
        VAR_1->ostream_head = FUNC_3(VAR_1->allocator);
    }

    if (VAR_1->ostream_tail == ((void*)0)) {
        VAR_1->ostream_tail = FUNC_1(VAR_1->allocator,
                                                        VAR_0,
                                                        VAR_1);
    }

    VAR_3 = VAR_1->ostream_tail;

    VAR_2 = (*VAR_1->setup)(VAR_1->skt,
                            &VAR_1->stream,
                            &VAR_3,
                            VAR_1->setup_baton,
                            VAR_1->pool);
    if (VAR_2) {

        FUNC_4(VAR_1->ostream_tail);
        FUNC_0(VAR_1);
        return VAR_2;
    }

    FUNC_2(VAR_1->ostream_head,
                                 VAR_3);

    return VAR_2;
}
