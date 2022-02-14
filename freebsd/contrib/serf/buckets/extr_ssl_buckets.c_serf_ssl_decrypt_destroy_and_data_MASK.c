
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * our_stream; } ;
typedef TYPE_1__ ssl_context_t ;
struct TYPE_6__ {TYPE_1__* data; } ;
typedef TYPE_2__ serf_bucket_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(serf_bucket_t *VAR_0)
{
    ssl_context_t *VAR_1 = VAR_0->data;

    FUNC_0(*VAR_1->our_stream);

    FUNC_1(VAR_0);
}
