
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ACBFlag; TYPE_2__* pDCBRunRobin; TYPE_2__* pLinkDCB; int pActiveDCB; } ;
struct TYPE_9__ {scalar_t__ MaxActiveCommandCnt; scalar_t__ GoingSRBCnt; TYPE_1__* pGoingLastSRB; TYPE_1__* pGoingSRB; TYPE_1__* pWaitingSRB; TYPE_1__* pWaitingLastSRB; struct TYPE_9__* pNextDCB; } ;
struct TYPE_8__ {struct TYPE_8__* pNextSRB; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PDCB ;
typedef TYPE_3__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(PACB VAR_3)
{
 int VAR_4;
 PDCB VAR_5, VAR_6;
 PSRB VAR_7;

 VAR_4 = FUNC_0();
     if (!(VAR_3->pActiveDCB) &&
     !(VAR_3->ACBFlag & (VAR_0+VAR_2+VAR_1))) {
  VAR_5 = VAR_3->pDCBRunRobin;
  if (!VAR_5) {
   VAR_5 = VAR_3->pLinkDCB;
   VAR_3->pDCBRunRobin = VAR_5;
  }
  VAR_6 = VAR_5;
  for (;VAR_6 ;) {
   VAR_3->pDCBRunRobin = VAR_6->pNextDCB;
   if (!(VAR_6->MaxActiveCommandCnt > VAR_6->GoingSRBCnt)
       || !(VAR_7 = VAR_6->pWaitingSRB)) {
    if (VAR_3->pDCBRunRobin == VAR_5)
     break;
    VAR_6 = VAR_6->pNextDCB;
   } else {
    if (!FUNC_2(VAR_3, VAR_6, VAR_7)) {





     VAR_6->GoingSRBCnt++;
     if (VAR_6->pWaitingLastSRB == VAR_7) {
      VAR_6->pWaitingSRB = ((void*)0);
      VAR_6->pWaitingLastSRB = ((void*)0);
     } else
      VAR_6->pWaitingSRB = VAR_7->pNextSRB;
     VAR_7->pNextSRB = ((void*)0);
     if (VAR_6->pGoingSRB)
      VAR_6->pGoingLastSRB->pNextSRB = VAR_7;
     else
      VAR_6->pGoingSRB = VAR_7;
     VAR_6->pGoingLastSRB = VAR_7;
    }
    break;
   }
  }
 }
 FUNC_1(VAR_4);
 return;
}
