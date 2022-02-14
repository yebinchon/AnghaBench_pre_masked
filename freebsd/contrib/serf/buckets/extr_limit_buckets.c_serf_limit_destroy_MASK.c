
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_6__ {int stream; } ;
typedef TYPE_2__ limit_context_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(serf_bucket_t *VAR_0)
{
    limit_context_t *VAR_1 = VAR_0->data;

    FUNC_0(VAR_1->stream);

    FUNC_1(VAR_0);
}
