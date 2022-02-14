
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_int8_t ;
typedef int u_int16_t ;
struct TYPE_7__ {int SyncPeriod; } ;
struct TYPE_6__ {int length; int address; } ;
struct TYPE_5__ {int SRBState; int SRBTotalXferLength; scalar_t__ SRBSGIndex; scalar_t__ SRBSGCount; TYPE_2__* pSRBSGL; int SRBStatus; TYPE_3__* pSRBDCB; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PSEG ;
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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(PACB VAR_14, PSRB VAR_15, u_int16_t *VAR_16)
{
 PDCB VAR_17;
 u_int8_t VAR_18,VAR_19;
 u_int16_t VAR_20;
 PSEG VAR_21;
 u_long VAR_22,VAR_23=0;

 VAR_17 = VAR_15->pSRBDCB;
 VAR_20 = *VAR_16;

 if (!(VAR_15->SRBState & VAR_6)) {
  if (VAR_20 & VAR_2)
   VAR_15->SRBStatus |= VAR_3;
  if (!(VAR_20 & VAR_5)) {




     VAR_23 = (u_long)
     (FUNC_1(VAR_12) & 0x3F);
   if (VAR_17->SyncPeriod & VAR_13) {




    VAR_23 <<= 1;
   }
  }
  VAR_23 += FUNC_0(VAR_11);
  if (VAR_23 == 1) {
   VAR_23 = 0;
   FUNC_2(VAR_1,VAR_10);
  }
  if ((VAR_23 == 0) ||
      (VAR_20 & VAR_4)) {
   VAR_18 = FUNC_1(VAR_9);
   while (!(VAR_18 & VAR_0)) {
    VAR_18 =
      FUNC_1(VAR_9);
   }
   VAR_15->SRBTotalXferLength = 0;
  } else {






   if (VAR_15->SRBTotalXferLength != VAR_23) {



    VAR_22 =
      VAR_15->SRBTotalXferLength - VAR_23;



    VAR_15->SRBTotalXferLength = VAR_23;



    VAR_21 =
      VAR_15->pSRBSGL + VAR_15->SRBSGIndex;
    for (VAR_19 = VAR_15->SRBSGIndex;
        VAR_19 < VAR_15->SRBSGCount;
        VAR_19++) {




     if (VAR_22 >=
         VAR_21->length)
      VAR_22 -=
        VAR_21->length;
     else {




      VAR_21->length -=
        VAR_22;

      VAR_21->address +=
        VAR_22;

      VAR_15->SRBSGIndex = VAR_19;
      break;
     }
     VAR_21++;
    }
   }
  }
 }
 FUNC_3(VAR_7 ,VAR_8);
}
