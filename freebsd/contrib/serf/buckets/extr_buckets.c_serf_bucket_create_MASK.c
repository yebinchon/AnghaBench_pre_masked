
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_type_t ;
struct TYPE_4__ {int * allocator; void* data; int const* type; } ;
typedef TYPE_1__ serf_bucket_t ;
typedef int serf_bucket_alloc_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

serf_bucket_t *FUNC_1(
    const serf_bucket_type_t *VAR_0,
    serf_bucket_alloc_t *VAR_1,
    void *VAR_2)
{
    serf_bucket_t *VAR_3 = FUNC_0(VAR_1, sizeof(*VAR_3));

    VAR_3->type = VAR_0;
    VAR_3->data = VAR_2;
    VAR_3->allocator = VAR_1;

    return VAR_3;
}
