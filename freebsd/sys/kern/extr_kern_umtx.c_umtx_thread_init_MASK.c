
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_umtxq; } ;
struct TYPE_2__ {struct thread* uq_thread; } ;


 TYPE_1__* FUNC_0 () ;

void
FUNC_1(struct thread *VAR_0)
{

 VAR_0->td_umtxq = FUNC_0();
 VAR_0->td_umtxq->uq_thread = VAR_0;
}
