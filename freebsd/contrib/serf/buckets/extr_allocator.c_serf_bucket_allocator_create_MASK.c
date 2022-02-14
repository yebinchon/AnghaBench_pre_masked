
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ num_used; scalar_t__ next_index; } ;
typedef TYPE_1__ track_state_t ;
typedef int serf_unfreed_func_t ;
struct TYPE_8__ {int own_allocator; TYPE_1__* track; void* unfreed_baton; int unfreed; int * allocator; int * pool; } ;
typedef TYPE_2__ serf_bucket_alloc_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int * FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,TYPE_2__*,int ,int ) ;

serf_bucket_alloc_t *FUNC_5(
    apr_pool_t *VAR_2,
    serf_unfreed_func_t VAR_3,
    void *VAR_4)
{
    serf_bucket_alloc_t *VAR_5 = FUNC_2(VAR_2, sizeof(*VAR_5));

    VAR_5->pool = VAR_2;
    VAR_5->allocator = FUNC_3(VAR_2);
    if (VAR_5->allocator == ((void*)0)) {


        FUNC_0(&VAR_5->allocator);
        VAR_5->own_allocator = 1;
    }
    VAR_5->unfreed = VAR_3;
    VAR_5->unfreed_baton = VAR_4;
    FUNC_4(VAR_2, VAR_5,
                              VAR_0, VAR_1);

    return VAR_5;
}
