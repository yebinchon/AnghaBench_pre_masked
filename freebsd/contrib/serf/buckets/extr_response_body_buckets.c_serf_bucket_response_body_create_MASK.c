
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {int remaining; int * stream; } ;
typedef TYPE_1__ body_context_t ;
typedef int apr_uint64_t ;


 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_0 ;

serf_bucket_t *FUNC_2(
    serf_bucket_t *VAR_1, apr_uint64_t VAR_2, serf_bucket_alloc_t *VAR_3)
{
    body_context_t *VAR_4;

    VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4));
    VAR_4->stream = VAR_1;
    VAR_4->remaining = VAR_2;

    return FUNC_0(&VAR_0, VAR_3, VAR_4);
}
