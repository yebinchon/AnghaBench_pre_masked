
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {int channel; char const* phrase; int headers; scalar_t__ open; scalar_t__ type; } ;
typedef TYPE_1__ frame_context_t ;


 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int VAR_0 ;

serf_bucket_t *FUNC_3(
    int VAR_1,
    const char *VAR_2,
    serf_bucket_alloc_t *VAR_3)
{
    frame_context_t *VAR_4;

    VAR_4 = FUNC_2(VAR_3, sizeof(*VAR_4));
    VAR_4->type = 0;
    VAR_4->open = 0;
    VAR_4->channel = VAR_1;
    VAR_4->phrase = VAR_2;
    VAR_4->headers = FUNC_1(VAR_3);

    return FUNC_0(&VAR_0, VAR_3, VAR_4);
}
