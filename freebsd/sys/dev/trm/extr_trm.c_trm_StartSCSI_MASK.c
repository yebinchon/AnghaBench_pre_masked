
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ccb_scsiio {int sense_len; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef int u_int8_t ;
typedef int u_int16_t ;
struct TYPE_9__ {int AdaptSCSIID; TYPE_2__* pActiveDCB; } ;
struct TYPE_8__ {int TargetID; int SyncPeriod; int SyncOffset; int IdentifyMsg; int SyncMode; TYPE_1__* pActiveSRB; } ;
struct TYPE_7__ {scalar_t__* CmdBlock; int SRBFlag; int TagNumber; int ScsiCmdLen; int ScsiPhase; void* SRBState; union ccb* pccb; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PDCB ;
typedef TYPE_3__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static u_int16_t
FUNC_3(PACB VAR_29, PDCB VAR_30, PSRB VAR_31)
{
 u_int16_t VAR_32;
 u_int8_t VAR_33, VAR_34,VAR_35,VAR_36;
 u_int8_t * VAR_37;
 union ccb *VAR_38;
 struct ccb_scsiio *VAR_39;

 VAR_38 = VAR_31->pccb;
 VAR_39 = &VAR_38->csio;

 FUNC_2(VAR_29->AdaptSCSIID, VAR_22);
 FUNC_2(VAR_30->TargetID, VAR_26);
 FUNC_2(VAR_30->SyncPeriod, VAR_25);
 FUNC_2(VAR_30->SyncOffset, VAR_23);
 VAR_31->ScsiPhase = VAR_7;

 FUNC_1(VAR_1, VAR_20);

 VAR_36 = VAR_30->IdentifyMsg;

    if ((VAR_31->CmdBlock[0] == VAR_5) ||
     (VAR_31->CmdBlock[0] == VAR_8) ||
     (VAR_31->SRBFlag & VAR_0)) {
  if (((VAR_30->SyncMode & VAR_28) &&
        !(VAR_30->SyncMode & VAR_27))
  || ((VAR_30->SyncMode & VAR_18) &&
    !(VAR_30->SyncMode & VAR_17))) {
   if (!(VAR_30->IdentifyMsg & 7) ||
       (VAR_31->CmdBlock[0] != VAR_5)) {
    VAR_33 = VAR_11;
    VAR_31->SRBState = VAR_14;
    goto polling;
   }
  }



  FUNC_2((VAR_36 & 0xBF) ,VAR_21);
  VAR_33 = VAR_9;
  VAR_31->SRBState = VAR_16;
 } else {




  FUNC_2(VAR_36,VAR_21);
  VAR_33 = VAR_9;
  VAR_31->SRBState = VAR_16;
  if (VAR_30->SyncMode & VAR_4) {

    FUNC_2(VAR_6, VAR_21);
   FUNC_2(VAR_31->TagNumber, VAR_21);
   VAR_33 = VAR_10;
  }
 }
polling:



    if (VAR_31->SRBFlag & VAR_0) {
  FUNC_2(VAR_8, VAR_21);
  FUNC_2((VAR_30->IdentifyMsg << 5), VAR_21);
  FUNC_2(0, VAR_21);
  FUNC_2(0, VAR_21);
  FUNC_2(VAR_39->sense_len, VAR_21);
  FUNC_2(0, VAR_21);
 } else {
  VAR_37 = (u_int8_t *) VAR_31->CmdBlock;
  for (VAR_34 = 0; VAR_34 < VAR_31->ScsiCmdLen ; VAR_34++) {
   VAR_35 = *VAR_37++;
   FUNC_2(VAR_35,VAR_21);
  }
 }
 if (FUNC_0(VAR_24) & VAR_12) {






  VAR_31->SRBState = VAR_15;
  VAR_32 = 1;
 } else {





  VAR_31->ScsiPhase = VAR_13;
  VAR_29->pActiveDCB = VAR_30;
  VAR_30->pActiveSRB = VAR_31;
  VAR_32 = 0;
  FUNC_1(VAR_2 | VAR_3,
      VAR_20);



  FUNC_2(VAR_33,VAR_19);
 }
 return (VAR_32);
}
