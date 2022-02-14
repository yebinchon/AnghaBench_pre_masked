
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int allocator; TYPE_3__* data; } ;
typedef TYPE_2__ serf_bucket_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_11__ {scalar_t__ (* hold_open ) (int ,TYPE_2__*) ;int hold_open_baton; TYPE_1__* list; } ;
typedef TYPE_3__ aggregate_context_t ;
struct TYPE_9__ {scalar_t__ next; TYPE_2__* bucket; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char const**,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static apr_status_t FUNC_4(serf_bucket_t *VAR_3,
                                        const char **VAR_4,
                                        apr_size_t *VAR_5)
{
    aggregate_context_t *VAR_6 = VAR_3->data;
    serf_bucket_t *VAR_7;
    apr_status_t VAR_8;

    FUNC_0(VAR_6, VAR_3->allocator);


    if (!VAR_6->list) {
        *VAR_5 = 0;
        if (VAR_6->hold_open) {
            VAR_8 = VAR_6->hold_open(VAR_6->hold_open_baton, VAR_3);
            if (VAR_8 == VAR_0)
                VAR_8 = VAR_2;
            return VAR_8;
        }
        else {
            return VAR_1;
        }
    }

    VAR_7 = VAR_6->list->bucket;

    VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5);

    if (VAR_8 == VAR_1) {
        if (VAR_6->list->next) {
            VAR_8 = VAR_2;
        } else {
            if (VAR_6->hold_open) {
                VAR_8 = VAR_6->hold_open(VAR_6->hold_open_baton, VAR_3);
                if (VAR_8 == VAR_0)
                    VAR_8 = VAR_2;
                return VAR_8;
            }
        }
    }

    return VAR_8;
}
