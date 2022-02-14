
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int original; int baton; int (* freefunc ) (int ,int ) ;} ;
typedef TYPE_1__ simple_context_t ;
struct TYPE_6__ {TYPE_1__* data; } ;
typedef TYPE_2__ serf_bucket_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(serf_bucket_t *VAR_0)
{
    simple_context_t *VAR_1 = VAR_0->data;

    if (VAR_1->freefunc)
        (*VAR_1->freefunc)(VAR_1->baton, VAR_1->original);

    FUNC_0(VAR_0);
}
