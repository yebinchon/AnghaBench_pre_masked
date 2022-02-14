
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* mvChannel; } ;
struct TYPE_15__ {int adapterId; scalar_t__ IALData; } ;
struct TYPE_14__ {int maxUltraDmaModeSupported; int maxPioModeSupported; } ;
typedef size_t MV_U8 ;
typedef TYPE_2__ MV_SATA_ADAPTER ;
typedef TYPE_3__ IAL_ADAPTER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_4 (TYPE_2__*,size_t) ;
 int FUNC_5 (TYPE_2__*,size_t,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,size_t) ;
 int FUNC_7 (TYPE_2__*,size_t,int ,scalar_t__,int *,int ,int ,int ,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,size_t,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*,size_t) ;

int
FUNC_10(MV_SATA_ADAPTER *VAR_5, MV_U8 VAR_6)
{
 IAL_ADAPTER_T *VAR_7 = (IAL_ADAPTER_T *)VAR_5->IALData;

 FUNC_3(VAR_5, VAR_6);

 FUNC_5 (VAR_5, VAR_6, VAR_3);


 if (FUNC_9(VAR_5, VAR_6) == VAR_2)
 {
  FUNC_0("RR18xx [%d,%d]: failed to perform Software reset\n",
     VAR_5->adapterId, VAR_6);
  FUNC_1(VAR_7, VAR_6);
  return -1;
 }


 if (FUNC_2(VAR_5, VAR_6)== VAR_2)
 {
  FUNC_0("RR18xx [%d,%d] Failed to Hard reser the SATA channel\n",
     VAR_5->adapterId, VAR_6);
  FUNC_1(VAR_7, VAR_6);
  return -1;
 }

 if (FUNC_6(VAR_5, VAR_6) == VAR_2)
 {
   FUNC_0("RR18xx [%d,%d] Failed to Connect Device\n",
     VAR_5->adapterId, VAR_6);
  FUNC_1(VAR_7, VAR_6);
  return -1;
 }else
 {
  FUNC_0("channel %d: perform recalibrate command", VAR_6);
  if (!FUNC_7(VAR_5, VAR_6,
        VAR_4,
        VAR_2,
        ((void*)0),
        0,
        0,

        0,
        0,
        0,

        0,
        0,

        0x10))
   FUNC_0("channel %d: recalibrate failed", VAR_6);


  if((FUNC_8(VAR_5, VAR_6,
      VAR_0,
      VAR_1, 0, 0, 0) == VAR_2) ||
   (FUNC_8(VAR_5, VAR_6,
      VAR_0,
      VAR_7->mvChannel[VAR_6].maxPioModeSupported, 0, 0, 0) == VAR_2) ||
   (FUNC_8(VAR_5, VAR_6,
      VAR_0,
      VAR_7->mvChannel[VAR_6].maxUltraDmaModeSupported, 0, 0, 0) == VAR_2) )
  {
   FUNC_0("channel %d: Set Features failed", VAR_6);
   FUNC_1(VAR_7, VAR_6);
   return -1;
  }

  if (FUNC_4(VAR_5, VAR_6) == VAR_2)
  {
   FUNC_0("Failed to enable DMA, channel=%d", VAR_6);
   FUNC_1(VAR_7, VAR_6);
   return -1;
  }
 }
 return 0;
}
