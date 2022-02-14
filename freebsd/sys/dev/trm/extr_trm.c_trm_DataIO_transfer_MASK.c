
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct TYPE_7__ {unsigned int SyncPeriod; } ;
struct TYPE_6__ {unsigned int SRBSGIndex; unsigned int SRBSGCount; unsigned int SRBTotalXferLength; unsigned int SRBSGPhyAddr; int SRBState; int SRBStatus; int AdaptStatus; TYPE_1__* pSRBSGL; TYPE_3__* pSRBDCB; } ;
struct TYPE_5__ {unsigned int address; unsigned int length; } ;
typedef TYPE_2__* PSRB ;
typedef TYPE_3__* PDCB ;
typedef int PACB ;


 scalar_t__ VAR_0 ;
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
 int VAR_16 ;
 int FUNC_0 (char*,unsigned int) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(PACB VAR_19, PSRB VAR_20, u_int16_t VAR_21)
{
 u_int8_t VAR_22;
 PDCB VAR_23;

 VAR_23 = VAR_20->pSRBDCB;
 if (VAR_20->SRBSGIndex < VAR_20->SRBSGCount) {
  if (VAR_20->SRBTotalXferLength != 0) {




   FUNC_0(" SG->address=%8x \n",VAR_20->pSRBSGL->address);
   FUNC_0(" SG->length=%8x \n",VAR_20->pSRBSGL->length);
   FUNC_0(" pDCB->SyncPeriod=%x \n",VAR_23->SyncPeriod);
   FUNC_0(" pSRB->pSRBSGL=%8x \n",(unsigned int)VAR_20->pSRBSGL);
   FUNC_0(" pSRB->SRBSGPhyAddr=%8x \n",VAR_20->SRBSGPhyAddr);
   FUNC_0(" pSRB->SRBSGIndex=%d \n",VAR_20->SRBSGIndex);
   FUNC_0(" pSRB->SRBSGCount=%d \n",VAR_20->SRBSGCount);
   FUNC_0(" pSRB->SRBTotalXferLength=%d \n",VAR_20->SRBTotalXferLength);

   VAR_20->SRBState = VAR_7;
   FUNC_3(0, VAR_11);
   FUNC_3(
       (VAR_20->SRBSGPhyAddr +
        ((u_long)VAR_20->SRBSGIndex << 3)),
       VAR_12);




   FUNC_3(
       ((u_long)(VAR_20->SRBSGCount - VAR_20->SRBSGIndex) << 3),
       VAR_10);




   FUNC_3(VAR_20->SRBTotalXferLength,
       VAR_15);

   FUNC_2(VAR_21, VAR_9);

   FUNC_2(VAR_0, VAR_14);




   VAR_22 = (VAR_21 == VAR_18) ?
     VAR_4 : VAR_3;
   FUNC_4(VAR_22, VAR_13);
  } else {

   if (VAR_20->SRBSGCount) {
    VAR_20->AdaptStatus = VAR_1;
    VAR_20->SRBStatus |= VAR_2;
   }
   if (VAR_23->SyncPeriod & VAR_17)
    FUNC_3(2,VAR_15);
   else
    FUNC_3(1,VAR_15);
   if (VAR_21 == VAR_18)
    FUNC_2(0, VAR_16);
   else
    FUNC_1(VAR_16);
   VAR_20->SRBState |= VAR_8;
   FUNC_2(VAR_0, VAR_14);




   VAR_22 = (VAR_21 == VAR_18) ?
     VAR_6 : VAR_5;
   FUNC_4(VAR_22, VAR_13);
  }
 }
}
