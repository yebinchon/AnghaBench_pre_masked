
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int allocator; scalar_t__ data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {char* uri; } ;
typedef TYPE_2__ request_context_t ;


 char const* FUNC_0 (int ,char const*,char const*,int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(
    serf_bucket_t *VAR_0,
    const char *VAR_1)
{
    request_context_t *VAR_2 = (request_context_t *)VAR_0->data;


    if (VAR_2->uri[0] != '/')
        return;


    if (VAR_2->uri[1] == '\0')
        VAR_2->uri = VAR_1;
    else
        VAR_2->uri =
            FUNC_0(FUNC_1(VAR_0->allocator),
                        VAR_1,
                        VAR_2->uri,
                        ((void*)0));
}
