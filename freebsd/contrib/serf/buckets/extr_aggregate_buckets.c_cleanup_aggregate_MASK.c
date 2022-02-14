
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int serf_bucket_alloc_t ;
struct TYPE_5__ {int bucket; struct TYPE_5__* next; } ;
typedef TYPE_1__ bucket_list_t ;
struct TYPE_6__ {TYPE_1__* done; scalar_t__ bucket_owner; } ;
typedef TYPE_2__ aggregate_context_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(aggregate_context_t *VAR_0,
                              serf_bucket_alloc_t *VAR_1)
{
    bucket_list_t *VAR_2;




    while (VAR_0->done != ((void*)0)) {
        VAR_2 = VAR_0->done->next;

        if (VAR_0->bucket_owner) {
            FUNC_0(VAR_0->done->bucket);
        }
        FUNC_1(VAR_1, VAR_0->done);

        VAR_0->done = VAR_2;
    }
}
