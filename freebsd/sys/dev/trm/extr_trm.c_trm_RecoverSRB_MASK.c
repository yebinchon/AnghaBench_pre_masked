
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct TYPE_7__ {TYPE_2__* pLinkDCB; } ;
struct TYPE_6__ {scalar_t__ GoingSRBCnt; struct TYPE_6__* pNextDCB; TYPE_1__* pGoingSRB; TYPE_1__* pWaitingLastSRB; TYPE_1__* pWaitingSRB; } ;
struct TYPE_5__ {struct TYPE_5__* pNextSRB; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PDCB ;
typedef TYPE_3__* PACB ;



__attribute__((used)) static void
FUNC_0(PACB VAR_0)
{
 PDCB VAR_1, VAR_2;
 PSRB VAR_3, VAR_4;
        u_int16_t VAR_5, VAR_6;

 VAR_1 = VAR_0->pLinkDCB;
 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = VAR_1;
 do {
  VAR_5 = VAR_2->GoingSRBCnt;
  VAR_3 = VAR_2->pGoingSRB;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_4 = VAR_3;
   VAR_3 = VAR_3->pNextSRB;
   if (VAR_2->pWaitingSRB) {
    VAR_4->pNextSRB = VAR_2->pWaitingSRB;
    VAR_2->pWaitingSRB = VAR_4;
   } else {
    VAR_2->pWaitingSRB = VAR_4;
    VAR_2->pWaitingLastSRB = VAR_4;
    VAR_4->pNextSRB = ((void*)0);
   }
  }
  VAR_2->GoingSRBCnt = 0;
  VAR_2->pGoingSRB = ((void*)0);
  VAR_2 = VAR_2->pNextDCB;
 }
 while (VAR_2 != VAR_1);
}
