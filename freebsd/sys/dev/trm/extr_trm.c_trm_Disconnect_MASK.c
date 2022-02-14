
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_int16_t ;
typedef size_t u_int ;
struct TYPE_17__ {int ** scan_devices; TYPE_3__* pFreeSRB; TYPE_4__* pActiveDCB; } ;
struct TYPE_16__ {int GoingSRBCnt; TYPE_3__* pActiveSRB; TYPE_3__* pGoingSRB; scalar_t__ DCBFlag; } ;
struct TYPE_15__ {int SRBState; int* CmdBlock; int TargetStatus; struct TYPE_15__* pNextSRB; int ScsiPhase; TYPE_2__* pccb; } ;
struct TYPE_13__ {size_t target_id; size_t target_lun; } ;
struct TYPE_14__ {TYPE_1__ ccb_h; } ;
typedef TYPE_3__* PSRB ;
typedef TYPE_4__* PDCB ;
typedef TYPE_5__* PACB ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void
FUNC_6(PACB VAR_14)
{
 PDCB VAR_15;
 PSRB VAR_16, VAR_17;
 u_int16_t VAR_18,VAR_19, VAR_20;
 u_int VAR_21,VAR_22;

 FUNC_1("trm_Disconnect...............\n ");

        VAR_15 = VAR_14->pActiveDCB;
 if (!VAR_15) {
  FUNC_1(" Exception Disconnect DCB=NULL..............\n ");
  VAR_19 = 400;
      while (--VAR_19)
   FUNC_0(1);

  FUNC_5((VAR_0 | VAR_1),
      VAR_13);
  return;
 }
 VAR_16 = VAR_15->pActiveSRB;

 VAR_21 = VAR_16->pccb->ccb_h.target_id;
 VAR_22 = VAR_16->pccb->ccb_h.target_lun;
 FUNC_1(":pDCB->pActiveSRB= %8x \n ",(u_int) VAR_15->pActiveSRB);
 VAR_14->pActiveDCB = 0;
 VAR_16->ScsiPhase = VAR_3;

 FUNC_5((VAR_0 | VAR_1), VAR_13);
 if (VAR_16->SRBState & VAR_12) {
  VAR_16->SRBState = 0;
  FUNC_2(VAR_14);
 } else if (VAR_16->SRBState & VAR_5) {
  VAR_15->DCBFlag = 0;
  VAR_20 = VAR_15->GoingSRBCnt;
  VAR_15->GoingSRBCnt = 0;
  VAR_16 = VAR_15->pGoingSRB;
  for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++) {
   VAR_17 = VAR_16->pNextSRB;
   VAR_16->pNextSRB = VAR_14->pFreeSRB;
   VAR_14->pFreeSRB = VAR_16;
   VAR_16 = VAR_17;
  }
  VAR_15->pGoingSRB = 0;
  FUNC_2(VAR_14);
 } else {
  if ((VAR_16->SRBState & (VAR_11+VAR_9)) ||
      !(VAR_16->SRBState & (VAR_7+VAR_6))) {

   if (!(VAR_14->scan_devices[VAR_21][VAR_22]) &&
       VAR_16->CmdBlock[0] != 0x00 &&
       VAR_16->CmdBlock[0] != VAR_2) {
    VAR_16->SRBState = VAR_10;
    FUNC_3(VAR_15, VAR_16);
   } else {
    VAR_16->TargetStatus = VAR_4;
    goto disc1;
   }
  } else if (VAR_16->SRBState & VAR_7) {



   FUNC_2(VAR_14);
  } else if (VAR_16->SRBState & VAR_6) {
disc1:



   VAR_15->pActiveSRB = 0;
   VAR_16->SRBState = VAR_8;
   FUNC_4(VAR_14, VAR_15, VAR_16);
  }
 }
 return;
}
