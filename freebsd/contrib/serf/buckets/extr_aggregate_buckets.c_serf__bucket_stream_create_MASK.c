
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int serf_bucket_aggregate_eof_t ;
struct TYPE_7__ {scalar_t__ bucket_owner; } ;
typedef TYPE_2__ aggregate_context_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,void*) ;

serf_bucket_t *FUNC_2(
    serf_bucket_alloc_t *VAR_0,
    serf_bucket_aggregate_eof_t VAR_1,
    void *VAR_2)
{
    serf_bucket_t *VAR_3 = FUNC_0(VAR_0);
    aggregate_context_t *VAR_4 = VAR_3->data;

    FUNC_1(VAR_3, VAR_1, VAR_2);

    VAR_4->bucket_owner = 0;

    return VAR_3;
}
