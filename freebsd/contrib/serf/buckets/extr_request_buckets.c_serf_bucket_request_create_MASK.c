
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {char const* method; char const* uri; int len; int * body; int headers; } ;
typedef TYPE_1__ request_context_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int VAR_1 ;

serf_bucket_t *FUNC_3(
    const char *VAR_2,
    const char *VAR_3,
    serf_bucket_t *VAR_4,
    serf_bucket_alloc_t *VAR_5)
{
    request_context_t *VAR_6;

    VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_6));
    VAR_6->method = VAR_2;
    VAR_6->uri = VAR_3;
    VAR_6->headers = FUNC_1(VAR_5);
    VAR_6->body = VAR_4;
    VAR_6->len = VAR_0;

    return FUNC_0(&VAR_1, VAR_5, VAR_6);
}
