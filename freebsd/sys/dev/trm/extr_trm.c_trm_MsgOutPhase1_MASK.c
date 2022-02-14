
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct TYPE_8__ {int AdaptType; TYPE_2__* pActiveDCB; } ;
struct TYPE_7__ {int DCBFlag; int SyncMode; int IdentifyMsg; int MaxNegoPeriod; } ;
struct TYPE_6__ {int SRBState; scalar_t__ MsgCnt; scalar_t__* MsgOutBuf; scalar_t__* CmdBlock; int SRBFlag; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PDCB ;
typedef TYPE_3__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(PACB VAR_21, PSRB VAR_22, u_int16_t *VAR_23)
{
 u_int8_t VAR_24;
 u_int16_t VAR_25, VAR_26;
 u_int8_t * VAR_27;
 PDCB VAR_28;

 FUNC_0(VAR_2, VAR_17);
 VAR_28 = VAR_21->pActiveDCB;
 if (!(VAR_22->SRBState & VAR_13)) {
  VAR_26 = VAR_22->MsgCnt;
  if (VAR_26) {
   VAR_27 = (u_int8_t *) VAR_22->MsgOutBuf;
   for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++) {
    FUNC_1(*VAR_27, VAR_18);
    VAR_27++;
   }
   VAR_22->MsgCnt = 0;
   if ((VAR_28->DCBFlag & VAR_0) &&
       (VAR_22->MsgOutBuf[0] == VAR_6)) {
    VAR_22->SRBState = VAR_10;
   }
  } else {
   VAR_24 = VAR_6;
   if ((VAR_22->CmdBlock[0] == VAR_5) ||
     (VAR_22->CmdBlock[0] == VAR_8) ||
     (VAR_22->SRBFlag & VAR_1)) {
    if (VAR_28->SyncMode & VAR_15) {
     goto mop1;
    }
   }
   FUNC_1(VAR_24, VAR_18);
  }
 } else {
mop1:
  if (!(VAR_22->SRBState & VAR_12)
      && (VAR_28->SyncMode & VAR_20)) {



   VAR_28->SyncMode &= ~(VAR_14 | VAR_4);
   FUNC_1((VAR_28->IdentifyMsg & 0xBF),
       VAR_18);
   FUNC_1(VAR_7,VAR_18);

   FUNC_1(2,VAR_18);

   FUNC_1(3,VAR_18);

   FUNC_1(1,VAR_18);

   VAR_22->SRBState |= VAR_12;
  } else if (!(VAR_22->SRBState & VAR_11)
      && (VAR_28->SyncMode & VAR_15)) {



   if (!(VAR_28->SyncMode & VAR_19))
    FUNC_1((VAR_28->IdentifyMsg & 0xBF),
      VAR_18);
   FUNC_1(VAR_7,VAR_18);

   FUNC_1(3,VAR_18);

   FUNC_1(1,VAR_18);

   FUNC_1(VAR_28->MaxNegoPeriod,VAR_18);

   FUNC_1((VAR_21->AdaptType == 1) ? 31 : 15,
       VAR_18);

   VAR_22->SRBState |= VAR_11;
  }
 }
 FUNC_0(VAR_3, VAR_17);




 FUNC_1(VAR_9, VAR_16);
}
