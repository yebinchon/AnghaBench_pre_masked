
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {int bucket_owner; int * hold_open_baton; int * hold_open; int * done; int * last; int * list; } ;
typedef TYPE_1__ aggregate_context_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static aggregate_context_t *FUNC_1(serf_bucket_alloc_t *VAR_0)
{
    aggregate_context_t *VAR_1;

    VAR_1 = FUNC_0(VAR_0, sizeof(*VAR_1));

    VAR_1->list = ((void*)0);
    VAR_1->last = ((void*)0);
    VAR_1->done = ((void*)0);
    VAR_1->hold_open = ((void*)0);
    VAR_1->hold_open_baton = ((void*)0);
    VAR_1->bucket_owner = 1;

    return VAR_1;
}
