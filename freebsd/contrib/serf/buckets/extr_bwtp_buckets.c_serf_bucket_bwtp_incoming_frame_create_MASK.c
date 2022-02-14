
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {int channel; int linebuf; int * phrase; scalar_t__ length; int state; int headers; int * body; int * stream; } ;
typedef TYPE_1__ incoming_context_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

serf_bucket_t *FUNC_4(
    serf_bucket_t *VAR_2,
    serf_bucket_alloc_t *VAR_3)
{
    incoming_context_t *VAR_4;

    VAR_4 = FUNC_2(VAR_3, sizeof(*VAR_4));
    VAR_4->stream = VAR_2;
    VAR_4->body = ((void*)0);
    VAR_4->headers = FUNC_1(VAR_3);
    VAR_4->state = VAR_0;
    VAR_4->length = 0;
    VAR_4->channel = -1;
    VAR_4->phrase = ((void*)0);

    FUNC_3(&VAR_4->linebuf);

    return FUNC_0(&VAR_1, VAR_3, VAR_4);
}
