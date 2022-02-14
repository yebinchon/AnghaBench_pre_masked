
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {int state; int * last; int * list; } ;
typedef TYPE_1__ headers_context_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_1 ;

serf_bucket_t *FUNC_2(
    serf_bucket_alloc_t *VAR_2)
{
    headers_context_t *VAR_3;

    VAR_3 = FUNC_1(VAR_2, sizeof(*VAR_3));
    VAR_3->list = ((void*)0);
    VAR_3->last = ((void*)0);
    VAR_3->state = VAR_0;

    return FUNC_0(&VAR_1, VAR_2, VAR_3);
}
