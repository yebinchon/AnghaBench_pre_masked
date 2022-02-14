
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pWaitingLastSRB; TYPE_1__* pWaitingSRB; } ;
struct TYPE_5__ {struct TYPE_5__* pNextSRB; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PDCB ;



__attribute__((used)) static void
FUNC_0(PDCB VAR_0, PSRB VAR_1)
{

 if (VAR_0->pWaitingSRB) {
  VAR_0->pWaitingLastSRB->pNextSRB = VAR_1;
  VAR_0->pWaitingLastSRB = VAR_1;
  VAR_1->pNextSRB = ((void*)0);
 } else {
  VAR_0->pWaitingSRB = VAR_1;
  VAR_0->pWaitingLastSRB = VAR_1;
 }
}
