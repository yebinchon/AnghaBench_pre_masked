
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef scalar_t__ u_int16_t ;
struct TYPE_9__ {TYPE_2__* pFreeSRB; TYPE_3__* pLinkDCB; } ;
struct TYPE_8__ {scalar_t__ GoingSRBCnt; struct TYPE_8__* pNextDCB; TYPE_2__* pGoingSRB; } ;
struct TYPE_7__ {struct TYPE_7__* pNextSRB; union ccb* pccb; } ;
typedef TYPE_2__* PSRB ;
typedef TYPE_3__* PDCB ;
typedef TYPE_4__* PACB ;


 int VAR_0 ;
 int FUNC_0 (union ccb*) ;

__attribute__((used)) static void
FUNC_1(PACB VAR_1)
{
 PDCB VAR_2, VAR_3;
 PSRB VAR_4, VAR_5;
 u_int16_t VAR_6, VAR_7;
 union ccb *VAR_8;

 VAR_2 = VAR_1->pLinkDCB;
 if (VAR_2 == ((void*)0))
    return;
 VAR_3 = VAR_2;
     do {
  VAR_6 = VAR_3->GoingSRBCnt;
  VAR_4 = VAR_3->pGoingSRB;
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   VAR_5 = VAR_4->pNextSRB;
       VAR_8 = VAR_4->pccb;
   VAR_8->ccb_h.status = VAR_0;

   VAR_4->pNextSRB = VAR_1->pFreeSRB;
   VAR_1->pFreeSRB = VAR_4;
   FUNC_0(VAR_8);
   VAR_4 = VAR_5;
  }
  VAR_3->GoingSRBCnt = 0;
  VAR_3->pGoingSRB = ((void*)0);
  VAR_3 = VAR_3->pNextDCB;
 }
 while (VAR_3 != VAR_2);
}
