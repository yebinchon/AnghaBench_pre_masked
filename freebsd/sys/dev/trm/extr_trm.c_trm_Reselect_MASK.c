
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int16_t ;
struct TYPE_9__ {int SRBState; int ScsiPhase; } ;
struct TYPE_11__ {int AdaptSCSIID; TYPE_1__ TmpSRB; TYPE_2__* pActiveDCB; TYPE_2__* pLinkDCB; } ;
struct TYPE_10__ {int SyncMode; int DCBFlag; int SyncOffset; int SyncPeriod; TYPE_1__* pActiveSRB; struct TYPE_10__* pNextDCB; int TargetID; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PDCB ;
typedef TYPE_3__* PACB ;


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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(PACB VAR_16)
{
 PDCB VAR_17;
 PSRB VAR_18;
 u_int16_t VAR_19;

 FUNC_0("trm_Reselect................. \n");
 VAR_17 = VAR_16->pActiveDCB;
 if (VAR_17) {

  VAR_18 = VAR_17->pActiveSRB;
  VAR_18->SRBState = VAR_8;
  FUNC_2(VAR_17, VAR_18);
 }

 VAR_19 = FUNC_3(VAR_15) & 0x1FFF;
 VAR_17 = VAR_16->pLinkDCB;
 while (VAR_19 != *((u_int16_t *) &VAR_17->TargetID)) {

  VAR_17 = VAR_17->pNextDCB;
 }

 VAR_16->pActiveDCB = VAR_17;
 if (VAR_17->SyncMode & VAR_2) {
  VAR_18 = &VAR_16->TmpSRB;
  VAR_17->pActiveSRB = VAR_18;
 } else {
  VAR_18 = VAR_17->pActiveSRB;
  if (!VAR_18 || !(VAR_18->SRBState & VAR_7)) {



   VAR_18 = &VAR_16->TmpSRB;
   VAR_18->SRBState = VAR_9;
   VAR_17->pActiveSRB = VAR_18;
   FUNC_1(VAR_16, VAR_18);
  } else {
   if (VAR_17->DCBFlag & VAR_0) {
    VAR_18->SRBState = VAR_5;
    FUNC_1(VAR_16, VAR_18);
   } else
    VAR_18->SRBState = VAR_6;
  }
 }
 VAR_18->ScsiPhase = VAR_3;




 FUNC_5((u_int8_t) VAR_19,VAR_15);

 FUNC_5(VAR_16->AdaptSCSIID,VAR_12);

 FUNC_5(VAR_17->SyncPeriod,VAR_14);

 FUNC_5(VAR_17->SyncOffset,VAR_13);

 FUNC_4(VAR_1, VAR_11);




 FUNC_5(VAR_4, VAR_10);

}
