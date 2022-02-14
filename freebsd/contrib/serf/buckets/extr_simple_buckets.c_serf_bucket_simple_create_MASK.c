
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* original; char const* current; void* baton; int freefunc; int remaining; } ;
typedef TYPE_1__ simple_context_t ;
typedef int serf_simple_freefunc_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_size_t ;


 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_0 ;

serf_bucket_t *FUNC_2(
    const char *VAR_1,
    apr_size_t VAR_2,
    serf_simple_freefunc_t VAR_3,
    void *VAR_4,
    serf_bucket_alloc_t *VAR_5)
{
    simple_context_t *VAR_6;

    VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));
    VAR_6->original = VAR_6->current = VAR_1;
    VAR_6->remaining = VAR_2;
    VAR_6->freefunc = VAR_3;
    VAR_6->baton = VAR_4;

    return FUNC_0(&VAR_0, VAR_5, VAR_6);
}
