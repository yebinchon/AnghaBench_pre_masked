
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int allocator; TYPE_3__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_10__ {struct TYPE_10__* next; TYPE_1__* bucket; } ;
typedef TYPE_2__ bucket_list_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_11__ {scalar_t__ (* hold_open ) (int ,TYPE_1__*) ;int hold_open_baton; TYPE_2__* list; TYPE_2__* done; } ;
typedef TYPE_3__ aggregate_context_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int*,char const**,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static apr_status_t FUNC_5(serf_bucket_t *VAR_3,
                                            int VAR_4, int *VAR_5,
                                            const char **VAR_6, apr_size_t *VAR_7)
{
    aggregate_context_t *VAR_8 = VAR_3->data;
    apr_status_t VAR_9;

    FUNC_1(VAR_8, VAR_3->allocator);

    do {
        serf_bucket_t *VAR_10;

        *VAR_7 = 0;

        if (!VAR_8->list) {
            if (VAR_8->hold_open) {
                return VAR_8->hold_open(VAR_8->hold_open_baton, VAR_3);
            }
            else {
                return VAR_1;
            }
        }

        VAR_10 = VAR_8->list->bucket;

        VAR_9 = FUNC_2(VAR_10, VAR_4, VAR_5,
                                      VAR_6, VAR_7);
        if (FUNC_0(VAR_9))
            return VAR_9;

        if (VAR_9 == VAR_1) {
            bucket_list_t *VAR_11;


            VAR_11 = VAR_8->list->next;
            VAR_8->list->next = VAR_8->done;
            VAR_8->done = VAR_8->list;
            VAR_8->list = VAR_11;


            if (!VAR_8->list) {
                if (VAR_8->hold_open) {
                    return VAR_8->hold_open(VAR_8->hold_open_baton, VAR_3);
                }
                else {
                    return VAR_1;
                }
            }


            if (*VAR_7)
                VAR_9 = VAR_2;
        }


    } while (!*VAR_7 && VAR_9 != VAR_0);

    return VAR_9;
}
