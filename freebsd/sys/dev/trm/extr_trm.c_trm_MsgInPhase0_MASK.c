
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef int u_int16_t ;
struct TYPE_19__ {int SRBState; scalar_t__* MsgInBuf; int MsgCnt; scalar_t__* pMsgPtr; scalar_t__ TagNumber; TYPE_5__* pSRBDCB; int * MsgOutBuf; struct TYPE_19__* pNextSRB; } ;
struct TYPE_21__ {int AdaptType; TYPE_4__ TmpSRB; TYPE_5__* pActiveDCB; } ;
struct TYPE_17__ {int offset; void* period; void* width; } ;
struct TYPE_16__ {int offset; void* period; void* width; } ;
struct TYPE_18__ {TYPE_2__ current; TYPE_1__ goal; } ;
struct TYPE_20__ {int SyncMode; int SyncPeriod; int SyncOffset; int DCBFlag; int MaxNegoPeriod; TYPE_3__ tinfo; TYPE_4__* pActiveSRB; TYPE_4__* pGoingLastSRB; TYPE_4__* pGoingSRB; } ;
typedef TYPE_4__* PSRB ;
typedef TYPE_5__* PDCB ;
typedef TYPE_6__* PACB ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (char*,...) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__* VAR_39 ;
 void** VAR_40 ;
 scalar_t__* VAR_41 ;
 void** VAR_42 ;
 int FUNC_1 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void
FUNC_8(PACB VAR_43, PSRB VAR_44, u_int16_t *VAR_45)
{
 u_int8_t VAR_46,VAR_47,VAR_48;
 PDCB VAR_49;
 PSRB VAR_50;

 VAR_49 = VAR_43->pActiveDCB;

 VAR_46 = FUNC_4(VAR_33);
 if (!(VAR_44->SRBState & VAR_24)) {
  if (VAR_46 == VAR_8) {
   VAR_44->SRBState = VAR_21;
   *VAR_45 = VAR_17;

   FUNC_5(VAR_3, VAR_31);



   FUNC_7(VAR_18, VAR_30);
   return;
  } else if (VAR_46 == VAR_15) {
   *VAR_45 = VAR_17;

   FUNC_5(VAR_3, VAR_31);



   FUNC_7(VAR_18, VAR_30);
   return;
  } else if ((VAR_46 == VAR_9) ||
      ((VAR_46 >= VAR_16) &&
       (VAR_46 <= VAR_13))) {
   VAR_44->SRBState |= VAR_24;
       VAR_44->MsgInBuf[0] = VAR_46;

   VAR_44->MsgCnt = 1;
   VAR_44->pMsgPtr = &VAR_44->MsgInBuf[1];

   *VAR_45 = VAR_17;

   FUNC_5(VAR_3, VAR_31);



   FUNC_7(VAR_18, VAR_30);
   return;
  } else if (VAR_46 == VAR_14) {

   if (VAR_49->SyncMode & VAR_37) {

    VAR_49 = VAR_44->pSRBDCB;
    VAR_49->SyncMode |= VAR_36;
    VAR_49->SyncMode &= ~(VAR_28 |
        VAR_5 | VAR_37);
    VAR_44->SRBState &= ~(VAR_23+VAR_25);
    if ((VAR_49->SyncMode & VAR_29)
        && !(VAR_49->SyncMode & VAR_28)) {

     VAR_44->SRBState |= VAR_26;
     FUNC_5(
         VAR_4,
         VAR_31);
    } else {

     FUNC_5(
         VAR_2,
         VAR_31);
    }
   } else if (VAR_49->SyncMode & VAR_29) {

    FUNC_5(VAR_2,VAR_31);
    if (VAR_44->SRBState & VAR_22) {
     VAR_49 = VAR_44->pSRBDCB;
     VAR_49->SyncMode &=
       ~(VAR_29+VAR_28);
     VAR_49->SyncPeriod = 0;
     VAR_49->SyncOffset = 0;





     FUNC_7(VAR_49->SyncPeriod,
         VAR_35);
     FUNC_7(VAR_49->SyncOffset,
         VAR_34);
     FUNC_3(VAR_43,VAR_44,VAR_49);
    }
   }
   *VAR_45 = VAR_17;

   FUNC_5(VAR_3, VAR_31);



   FUNC_7(VAR_18, VAR_30);
   return;
  } else if (VAR_46 == VAR_12) {
   FUNC_6(1, VAR_32);
   FUNC_4(VAR_33);
   *VAR_45 = VAR_17;

   FUNC_5(VAR_3, VAR_31);



   FUNC_7(VAR_18, VAR_30);
   return;
  } else {




   *VAR_45 = VAR_17;

   FUNC_5(VAR_3, VAR_31);



   FUNC_7(VAR_18, VAR_30);
   return;
  }
 } else {



  *VAR_44->pMsgPtr = VAR_46;
  VAR_44->MsgCnt++;
  VAR_44->pMsgPtr++;
  FUNC_0("pSRB->MsgInBuf[0]=%2x \n ",VAR_44->MsgInBuf[0]);
  FUNC_0("pSRB->MsgInBuf[1]=%2x \n ",VAR_44->MsgInBuf[1]);
  FUNC_0("pSRB->MsgInBuf[2]=%2x \n ",VAR_44->MsgInBuf[2]);
  FUNC_0("pSRB->MsgInBuf[3]=%2x \n ",VAR_44->MsgInBuf[3]);
  FUNC_0("pSRB->MsgInBuf[4]=%2x \n ",VAR_44->MsgInBuf[4]);
      if ((VAR_44->MsgInBuf[0] >= VAR_16)
      && (VAR_44->MsgInBuf[0] <= VAR_13)) {
   if (VAR_44->MsgCnt == 2) {
    VAR_44->SRBState = 0;
    VAR_48 = VAR_44->MsgInBuf[1];
    VAR_44 = VAR_49->pGoingSRB;
    VAR_50 = VAR_49->pGoingLastSRB;
    if (VAR_44) {
     for (;;) {
      if (VAR_44->TagNumber !=
          VAR_48) {
       if (VAR_44 == VAR_50) {
        goto mingx0;
       }
       VAR_44 = VAR_44->pNextSRB;
      } else
       break;
     }
     if (VAR_49->DCBFlag & VAR_0) {
      VAR_44->SRBState = VAR_19;
      FUNC_1(
          VAR_43, VAR_44);
     }
     if (!(VAR_44->SRBState & VAR_21)) {
      FUNC_0("SRB not yet disconnect........ \n ");
      goto mingx0;
     }
     VAR_49->pActiveSRB = VAR_44;
     VAR_44->SRBState = VAR_20;
    } else {
mingx0:
          VAR_44 = &VAR_43->TmpSRB;
     VAR_44->SRBState = VAR_27;
     VAR_49->pActiveSRB = VAR_44;
     VAR_44->MsgOutBuf[0] = VAR_7;
     FUNC_2(
         VAR_43,
         VAR_44);
    }
   }
   *VAR_45 = VAR_17;

   FUNC_5(VAR_3, VAR_31);




   FUNC_7(VAR_18, VAR_30);
   return;
  } else if ((VAR_44->MsgInBuf[0] == VAR_9) &&
      (VAR_44->MsgInBuf[2] == 3) && (VAR_44->MsgCnt == 4)) {
   VAR_49 = VAR_44->pSRBDCB;
   VAR_44->SRBState &= ~(VAR_24+VAR_23);
   if ((VAR_44->MsgInBuf[1] != 2)) {

    VAR_49->SyncMode &=
      ~(VAR_37+VAR_36);
    VAR_44->MsgCnt = 1;
    VAR_44->MsgInBuf[0] = VAR_14;
    FUNC_5(VAR_4, VAR_31);
    *VAR_45 = VAR_17;

    FUNC_5(VAR_3, VAR_31);



    FUNC_7(VAR_18, VAR_30);
    return;
   }
   if (VAR_49->SyncMode & VAR_37) {

    if (VAR_44->MsgInBuf[3] > 2) {


     VAR_49->SyncMode &=
       ~(VAR_37+VAR_36);
     VAR_44->MsgCnt = 1;
     VAR_44->MsgInBuf[0] = VAR_14;
     FUNC_5(VAR_4,
         VAR_31);
     *VAR_45 = VAR_17;

     FUNC_5(VAR_3, VAR_31);



     FUNC_7(VAR_18, VAR_30);
     return;
    }
    if (VAR_44->MsgInBuf[3] == 2) {
     VAR_44->MsgInBuf[3] = 1;

    } else {
     if (!(VAR_49->SyncMode
           & VAR_36)) {
      VAR_44->SRBState &=
        ~(VAR_23+VAR_25);
      VAR_49->SyncMode |=
        VAR_36;
      VAR_49->SyncMode &=
        ~(VAR_28 |
            VAR_5 |
            VAR_37);
      if (VAR_44->MsgInBuf[3] != 0) {

       VAR_49->SyncPeriod |=
         VAR_38;
       VAR_49->tinfo.current.width
         = VAR_10;
       VAR_49->tinfo.goal.width
         = VAR_10;
      }
     }
    }
   } else
    VAR_44->MsgInBuf[3] = 0;
   VAR_44->SRBState |= VAR_26;
   FUNC_5(VAR_4,VAR_31);
   *VAR_45 = VAR_17;

   FUNC_5(VAR_3, VAR_31);



   FUNC_7(VAR_18, VAR_30);
   return;
  } else if ((VAR_44->MsgInBuf[0] == VAR_9) &&
      (VAR_44->MsgInBuf[2] == 1) && (VAR_44->MsgCnt == 5)) {
   VAR_44->SRBState &= ~(VAR_24+VAR_22);
   if ((VAR_44->MsgInBuf[1] != 3) ||
       (VAR_44->MsgInBuf[2] != 1)) {

    VAR_44->MsgCnt = 1;
    VAR_44->MsgInBuf[0] = VAR_14;
    FUNC_5(VAR_4, VAR_31);
    *VAR_45 = VAR_17;

    FUNC_5(VAR_3, VAR_31);




    FUNC_7(VAR_18, VAR_30);
    return;
   } else if (!(VAR_44->MsgInBuf[3]) || !(VAR_44->MsgInBuf[4])) {

    VAR_49 = VAR_44->pSRBDCB;

    VAR_49->SyncMode &=
      ~(VAR_29+VAR_28);
    VAR_49->SyncPeriod = 0;
    VAR_49->SyncOffset = 0;
    VAR_49->tinfo.goal.period = 0;
    VAR_49->tinfo.goal.offset = 0;
    VAR_49->tinfo.current.period = 0;
    VAR_49->tinfo.current.offset = 0;
    VAR_49->tinfo.current.width =
      VAR_11;





    FUNC_7(VAR_49->SyncPeriod,VAR_35);
    FUNC_7(VAR_49->SyncOffset,VAR_34);
    FUNC_3(VAR_43,VAR_44,VAR_49);
    *VAR_45 = VAR_17;

    FUNC_5(VAR_3, VAR_31);




    FUNC_7(VAR_18, VAR_30);
    return;
   } else {

    VAR_49 = VAR_44->pSRBDCB;
    VAR_49->SyncMode |=
      VAR_29+VAR_28;
    VAR_49->MaxNegoPeriod = VAR_44->MsgInBuf[3];

    VAR_49->SyncOffset = VAR_44->MsgInBuf[4];

    if (VAR_43->AdaptType == 1) {
     for(VAR_47 = 0; VAR_47 < 7; VAR_47++) {
      if (VAR_44->MsgInBuf[3] <=
        VAR_39[VAR_47]) {
                VAR_49->tinfo.goal.period =
      VAR_40[VAR_47];
                VAR_49->tinfo.current.period =
      VAR_40[VAR_47];
                   VAR_49->tinfo.goal.offset =
         VAR_49->SyncOffset;
     VAR_49->tinfo.current.offset =
         VAR_49->SyncOffset;
     VAR_49->SyncPeriod |= (VAR_47|VAR_6);
     break;
      }
     }
    } else {
     for(VAR_47 = 0; VAR_47 < 7; VAR_47++) {
      if (VAR_44->MsgInBuf[3] <=
       VAR_41[VAR_47]) {
         VAR_49->tinfo.goal.period =
      VAR_42[VAR_47];
         VAR_49->tinfo.current.period =
      VAR_42[VAR_47];
         VAR_49->tinfo.goal.offset =
      VAR_49->SyncOffset;
         VAR_49->tinfo.current.offset =
                  VAR_49->SyncOffset;
              VAR_49->SyncPeriod |=
                  (VAR_47|VAR_1);
              break;
      }
     }
    }





    FUNC_7(VAR_49->SyncPeriod,
        VAR_35);
    FUNC_7(VAR_49->SyncOffset,
        VAR_34);
    FUNC_3(VAR_43,VAR_44,VAR_49);
    *VAR_45=VAR_17;
    FUNC_5(VAR_3,VAR_31);



    FUNC_7(VAR_18,VAR_30);
    return;
   }
  }
 *VAR_45 = VAR_17;

 FUNC_5(VAR_3, VAR_31);




 FUNC_7(VAR_18, VAR_30);
 }
}
