
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_15__ {int ACBFlag; scalar_t__ pActiveDCB; } ;
struct TYPE_14__ {scalar_t__ MaxActiveCommandCnt; scalar_t__ GoingSRBCnt; TYPE_1__* pGoingLastSRB; TYPE_1__* pGoingSRB; TYPE_1__* pWaitingSRB; } ;
struct TYPE_13__ {struct TYPE_13__* pNextSRB; TYPE_2__* pSRBDCB; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PDCB ;
typedef TYPE_3__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(PACB VAR_3, PSRB VAR_4)
{
 PDCB VAR_5;

 VAR_5 = VAR_4->pSRBDCB;
 if (!(VAR_5->MaxActiveCommandCnt > VAR_5->GoingSRBCnt) || (VAR_3->pActiveDCB)
     || (VAR_3->ACBFlag & (VAR_0+VAR_2+VAR_1))) {
  FUNC_0("pDCB->MaxCommand=%d \n",VAR_5->MaxActiveCommandCnt);
  FUNC_0("pDCB->GoingSRBCnt=%d \n",VAR_5->GoingSRBCnt);
  FUNC_0("pACB->pActiveDCB=%8x \n",(u_int)VAR_3->pActiveDCB);
  FUNC_0("pACB->ACBFlag=%x \n",VAR_3->ACBFlag);
      FUNC_2(VAR_5, VAR_4);
  goto SND_EXIT;
 }

 if (VAR_5->pWaitingSRB) {
  FUNC_2(VAR_5, VAR_4);
  VAR_4 = VAR_5->pWaitingSRB;
  VAR_5->pWaitingSRB = VAR_4->pNextSRB;
  VAR_4->pNextSRB = ((void*)0);
 }

 if (!FUNC_3(VAR_3, VAR_5, VAR_4)) {





  VAR_5->GoingSRBCnt++;
  if (VAR_5->pGoingSRB) {
   VAR_5->pGoingLastSRB->pNextSRB = VAR_4;
   VAR_5->pGoingLastSRB = VAR_4;
  } else {
   VAR_5->pGoingSRB = VAR_4;
   VAR_5->pGoingLastSRB = VAR_4;
  }
 } else {





  FUNC_1(VAR_5, VAR_4);
 }
SND_EXIT:
 return;
}
