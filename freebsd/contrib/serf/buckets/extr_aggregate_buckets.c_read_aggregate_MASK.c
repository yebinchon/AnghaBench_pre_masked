
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct iovec {scalar_t__ iov_len; } ;
struct TYPE_8__ {TYPE_3__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_1__* bucket; } ;
typedef TYPE_2__ bucket_list_t ;
typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_10__ {int hold_open_baton; int (* hold_open ) (int ,TYPE_1__*) ;TYPE_2__* list; TYPE_2__* done; } ;
typedef TYPE_3__ aggregate_context_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int,struct iovec*,int*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static apr_status_t FUNC_5(serf_bucket_t *VAR_4,
                                   apr_size_t VAR_5,
                                   int VAR_6, struct iovec *VAR_7,
                                   int *VAR_8)
{
    aggregate_context_t *VAR_9 = VAR_4->data;
    int VAR_10;
    apr_status_t VAR_11;

    *VAR_8 = 0;

    if (!VAR_9->list) {
        if (VAR_9->hold_open) {
            return VAR_9->hold_open(VAR_9->hold_open_baton, VAR_4);
        }
        else {
            return VAR_0;
        }
    }

    VAR_11 = VAR_1;
    while (VAR_5) {
        serf_bucket_t *VAR_12 = VAR_9->list->bucket;

        VAR_11 = FUNC_2(VAR_12, VAR_5, VAR_6, VAR_7,
                                        &VAR_10);

        if (FUNC_1(VAR_11))
            return VAR_11;


        *VAR_8 += VAR_10;

        if (VAR_10 > 0 || VAR_11) {
            bucket_list_t *VAR_13;




            if (!VAR_11 || FUNC_0(VAR_11) || VAR_11 == VAR_2) {
                return VAR_11;
            }
            VAR_13 = VAR_9->list->next;
            VAR_9->list->next = VAR_9->done;
            VAR_9->done = VAR_9->list;
            VAR_9->list = VAR_13;


            if (!VAR_9->list) {
                if (VAR_9->hold_open) {
                    return VAR_9->hold_open(VAR_9->hold_open_baton, VAR_4);
                }
                else {
                    return VAR_0;
                }
            }






            if (VAR_5 != VAR_3) {
                int VAR_14;

                for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
                    VAR_5 -= VAR_7[VAR_14].iov_len;
            }


            VAR_6 -= VAR_10;
            VAR_7 += VAR_10;


            if (!VAR_5 || !VAR_6) {
                return VAR_1;
            }
        }
    }

    return VAR_11;
}
