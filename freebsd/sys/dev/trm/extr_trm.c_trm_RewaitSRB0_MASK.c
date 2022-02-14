
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


 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(PDCB VAR_0, PSRB VAR_1)
{
 PSRB VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0();
     if ((VAR_2 = VAR_0->pWaitingSRB)) {
  VAR_1->pNextSRB = VAR_2;
  VAR_0->pWaitingSRB = VAR_1;
 } else {
    VAR_1->pNextSRB = ((void*)0);
  VAR_0->pWaitingSRB = VAR_1;
  VAR_0->pWaitingLastSRB = VAR_1;
 }
 FUNC_1(VAR_3);
}
