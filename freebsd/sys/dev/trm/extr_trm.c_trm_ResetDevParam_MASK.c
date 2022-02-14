
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct TYPE_10__ {size_t AdapterUnit; int AdaptType; int Config; TYPE_3__* pLinkDCB; } ;
struct TYPE_9__ {int DevMode; size_t TargetID; struct TYPE_9__* pNextDCB; int SyncMode; int MaxNegoPeriod; int AdpMode; scalar_t__ SyncOffset; scalar_t__ SyncPeriod; } ;
struct TYPE_8__ {TYPE_1__* NvramTarget; int NvramChannelCfg; } ;
struct TYPE_7__ {int NvmTarCfg0; int NvmTarPeriod; } ;
typedef TYPE_2__* PNVRAMTYPE ;
typedef TYPE_3__* PDCB ;
typedef TYPE_4__* PACB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 TYPE_2__* VAR_7 ;

__attribute__((used)) static void
FUNC_0(PACB VAR_8)
{
 PDCB VAR_9, VAR_10;
 PNVRAMTYPE VAR_11;
 u_int8_t VAR_12;

 VAR_9 = VAR_8->pLinkDCB;
 if (VAR_9 == ((void*)0))
  return;
 VAR_10 = VAR_9;
 do {
  VAR_9->SyncMode &= ~(VAR_2+ VAR_3);
  VAR_9->SyncPeriod = 0;
  VAR_9->SyncOffset = 0;
  VAR_11 = &VAR_7[VAR_8->AdapterUnit];
  VAR_9->DevMode =
    VAR_11->NvramTarget[VAR_9->TargetID].NvmTarCfg0;
  VAR_9->AdpMode = VAR_11->NvramChannelCfg;
  VAR_12 =
     VAR_11->NvramTarget[VAR_9->TargetID].NvmTarPeriod & 0x07;
  if (VAR_8->AdaptType == 1)
   VAR_9->MaxNegoPeriod = VAR_5[VAR_12];
  else
   VAR_9->MaxNegoPeriod = VAR_6[VAR_12];
  if ((VAR_9->DevMode & VAR_1) &&
      (VAR_8->Config & VAR_0))
   VAR_9->SyncMode |= VAR_4;
  VAR_9 = VAR_9->pNextDCB;
 }
 while (VAR_10 != VAR_9);
}
