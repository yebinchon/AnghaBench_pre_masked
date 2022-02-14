
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int serf_bucket_type_t ;
struct TYPE_9__ {int const* type; TYPE_3__* data; } ;
typedef TYPE_2__ serf_bucket_t ;
struct TYPE_10__ {TYPE_1__* list; } ;
typedef TYPE_3__ aggregate_context_t ;
struct TYPE_8__ {TYPE_2__* bucket; struct TYPE_8__* next; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int const*) ;

__attribute__((used)) static serf_bucket_t * FUNC_1(
    serf_bucket_t *VAR_0,
    const serf_bucket_type_t *VAR_1)
{
    aggregate_context_t *VAR_2 = VAR_0->data;
    serf_bucket_t *VAR_3;

    if (!VAR_2->list) {
        return ((void*)0);
    }

    if (VAR_2->list->bucket->type == VAR_1) {

        VAR_3 = VAR_2->list->bucket;
        VAR_2->list = VAR_2->list->next;
        return VAR_3;
    }


    return FUNC_0(VAR_2->list->bucket, VAR_1);
}
