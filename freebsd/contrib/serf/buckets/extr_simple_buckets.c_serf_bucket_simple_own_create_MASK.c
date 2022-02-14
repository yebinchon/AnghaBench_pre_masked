
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* original; char const* current; int * baton; int freefunc; int remaining; } ;
typedef TYPE_1__ simple_context_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_1 ;

serf_bucket_t *FUNC_2(
    const char *VAR_2, apr_size_t VAR_3,
    serf_bucket_alloc_t *VAR_4)
{
    simple_context_t *VAR_5;

    VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));

    VAR_5->original = VAR_5->current = VAR_2;

    VAR_5->remaining = VAR_3;
    VAR_5->freefunc = VAR_0;
    VAR_5->baton = VAR_4;

    return FUNC_0(&VAR_1, VAR_4, VAR_5);
}
