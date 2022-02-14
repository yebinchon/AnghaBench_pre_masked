
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {int linebuf; int state; int * stream; } ;
typedef TYPE_1__ dechunk_context_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

serf_bucket_t *FUNC_3(
    serf_bucket_t *VAR_2,
    serf_bucket_alloc_t *VAR_3)
{
    dechunk_context_t *VAR_4;

    VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4));
    VAR_4->stream = VAR_2;
    VAR_4->state = VAR_0;

    FUNC_2(&VAR_4->linebuf);

    return FUNC_0(&VAR_1, VAR_3, VAR_4);
}
