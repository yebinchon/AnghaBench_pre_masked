
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int allocator; TYPE_3__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_1__* bucket; } ;
typedef TYPE_2__ bucket_list_t ;
struct TYPE_9__ {TYPE_2__* list; } ;
typedef TYPE_3__ aggregate_context_t ;


 TYPE_2__* FUNC_0 (int ,int) ;

void FUNC_1(
    serf_bucket_t *VAR_0,
    serf_bucket_t *VAR_1)
{
    aggregate_context_t *VAR_2 = VAR_0->data;
    bucket_list_t *VAR_3;

    VAR_3 = FUNC_0(VAR_0->allocator,
                                     sizeof(*VAR_3));
    VAR_3->bucket = VAR_1;
    VAR_3->next = VAR_2->list;

    VAR_2->list = VAR_3;
}
