
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* data; int * type; int allocator; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_7__ {char const* method; char const* uri; TYPE_1__* body; int headers; } ;
typedef TYPE_2__ request_context_t ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int VAR_0 ;

void FUNC_2(
    serf_bucket_t *VAR_1,
    const char *VAR_2,
    const char *VAR_3,
    serf_bucket_t *VAR_4)
{
    request_context_t *VAR_5;

    VAR_5 = FUNC_1(VAR_1->allocator, sizeof(*VAR_5));
    VAR_5->method = VAR_2;
    VAR_5->uri = VAR_3;
    VAR_5->headers = FUNC_0(VAR_1->allocator);
    VAR_5->body = VAR_4;

    VAR_1->type = &VAR_0;
    VAR_1->data = VAR_5;


}
