
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef size_t u_int8_t ;
typedef size_t u_int32_t ;
typedef size_t u_int16_t ;
typedef size_t u_int ;
struct TYPE_20__ {scalar_t__ pLinkDCB; int AdaptType; int Config; TYPE_11__** DCBarray; int DeviceCnt; TYPE_6__* pDCBRunRobin; } ;
struct TYPE_16__ {void* width; scalar_t__ offset; scalar_t__ period; } ;
struct TYPE_15__ {int offset; void* width; int period; } ;
struct TYPE_17__ {TYPE_3__ current; TYPE_2__ user; int disc_tag; } ;
struct TYPE_19__ {size_t TargetID; size_t TargetLUN; int MaxActiveCommandCnt; int DCBstatus; int DevMode; size_t IdentifyMsg; int SyncMode; TYPE_4__ tinfo; int MaxNegoPeriod; scalar_t__ SyncOffset; scalar_t__ SyncPeriod; int AdpMode; scalar_t__ DCBFlag; int * pActiveSRB; scalar_t__ GoingSRBCnt; int * pGoingSRB; int * pWaitingSRB; struct TYPE_19__* pNextDCB; } ;
struct TYPE_18__ {TYPE_1__* NvramTarget; int NvramChannelCfg; } ;
struct TYPE_14__ {int NvmTarCfg0; int NvmTarPeriod; } ;
struct TYPE_13__ {int DCBstatus; } ;
typedef int TRM_DCB ;
typedef TYPE_5__* PNVRAMTYPE ;
typedef TYPE_6__* PDCB ;
typedef TYPE_7__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_11__*,TYPE_6__*,int) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_5__* VAR_14 ;

__attribute__((used)) static void
FUNC_3(PACB VAR_15, PDCB VAR_16, u_int16_t VAR_17,u_int32_t VAR_18,u_int32_t VAR_19)
{
 PNVRAMTYPE VAR_20;
 u_int8_t VAR_21,VAR_22;
 u_int VAR_23,VAR_24;
 PDCB VAR_25;
 int VAR_26;

     VAR_23 = VAR_18;
 VAR_24 = VAR_19;






 if (VAR_24 != 0 &&
     (VAR_15->DCBarray[VAR_23][0].DCBstatus & VAR_0))
  FUNC_0(&VAR_15->DCBarray[VAR_23][0], VAR_16,
      sizeof(TRM_DCB));
 VAR_26 = FUNC_1();
 if (VAR_15->pLinkDCB == 0) {
  VAR_15->pLinkDCB = VAR_16;





  VAR_15->pDCBRunRobin = VAR_16;
  VAR_16->pNextDCB = VAR_16;
 } else {
  VAR_25=VAR_15->pLinkDCB;

  while (VAR_25->pNextDCB != VAR_15->pLinkDCB)
   VAR_25 = VAR_25->pNextDCB;

  VAR_25->pNextDCB = VAR_16;

  VAR_16->pNextDCB=VAR_15->pLinkDCB;
 }
 FUNC_2(VAR_26);

 VAR_15->DeviceCnt++;
 VAR_16->TargetID = VAR_23;
 VAR_16->TargetLUN = VAR_24;
 VAR_16->pWaitingSRB = ((void*)0);
 VAR_16->pGoingSRB = ((void*)0);
 VAR_16->GoingSRBCnt = 0;
 VAR_16->pActiveSRB = ((void*)0);
 VAR_16->MaxActiveCommandCnt = 1;
 VAR_16->DCBFlag = 0;
 VAR_16->DCBstatus |= VAR_0;

 VAR_20 = &VAR_14[VAR_17];
 VAR_16->DevMode = VAR_20->NvramTarget[VAR_23].NvmTarCfg0;
 VAR_16->AdpMode = VAR_20->NvramChannelCfg;




 if (VAR_16->DevMode & VAR_4) {
  VAR_21 = 0xC0;
  VAR_16->tinfo.disc_tag |= VAR_9 ;
 } else {
  VAR_21 = 0x80;
  VAR_16->tinfo.disc_tag &= ~(VAR_9);
 }
 VAR_21 |= VAR_24;
 VAR_16->IdentifyMsg = VAR_21;
 if (VAR_24 != 0 &&
     (VAR_15->DCBarray[VAR_23][0].DCBstatus & VAR_0))
  return;




 if (VAR_16->DevMode & VAR_8) {
  VAR_16->tinfo.disc_tag |= VAR_10 ;
 } else
  VAR_16->tinfo.disc_tag &= ~(VAR_10);




 VAR_16->SyncPeriod = 0;
 VAR_16->SyncOffset = 0;
 VAR_22 = VAR_20->NvramTarget[VAR_23].NvmTarPeriod & 0x07;
 if (VAR_15->AdaptType==1) {
     VAR_16->MaxNegoPeriod=VAR_12[ VAR_22 ];
     VAR_16->tinfo.user.period=VAR_16->MaxNegoPeriod;
     VAR_16->tinfo.user.offset=(VAR_16->SyncMode & VAR_7) ? 31 : 0;
 } else {
        VAR_16->MaxNegoPeriod=VAR_13[ VAR_22 ];
     VAR_16->tinfo.user.period=VAR_16->MaxNegoPeriod;
     VAR_16->tinfo.user.offset=(VAR_16->SyncMode & VAR_7) ? 15 : 0;
 }
 VAR_16->SyncMode = 0;
 if ((VAR_16->DevMode & VAR_6) &&
     (VAR_15->Config & VAR_1))
  VAR_16->SyncMode |= VAR_11;

    if (VAR_16->DevMode & VAR_5)
  VAR_16->SyncMode |= VAR_7;





 VAR_16->tinfo.user.width = (VAR_16->SyncMode & VAR_11) ?
   VAR_2 : VAR_3;

 VAR_16->tinfo.current.period = 0;
 VAR_16->tinfo.current.offset = 0;
 VAR_16->tinfo.current.width = VAR_3;
}
