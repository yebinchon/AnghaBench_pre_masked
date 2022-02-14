
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef scalar_t__ u_int8_t ;
typedef int u_int16_t ;
struct TYPE_5__ {scalar_t__ length; int address; } ;
struct TYPE_4__ {int SRBState; scalar_t__ SRBTotalXferLength; scalar_t__ SRBSGIndex; scalar_t__ SRBSGCount; TYPE_2__* pSRBSGL; int SRBStatus; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PSEG ;
typedef int PACB ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(PACB VAR_7, PSRB VAR_8, u_int16_t *VAR_9)
{
 u_int8_t VAR_10, VAR_11;
 u_int16_t VAR_12;
 PSEG VAR_13;
 u_long VAR_14,VAR_15 = 0;

     VAR_12 = *VAR_9;
 if (!(VAR_8->SRBState & VAR_4)) {
  if (VAR_12 & VAR_1)
   VAR_8->SRBStatus |= VAR_2;
  VAR_15 += FUNC_0(VAR_6);
  if ((VAR_15 == 0) || (VAR_12 & VAR_3)) {
   VAR_10 = FUNC_1(VAR_5);
   while (!(VAR_10 & VAR_0))
    VAR_10 = FUNC_1(VAR_5);
   VAR_8->SRBTotalXferLength = 0;
  } else {
    if (VAR_8->SRBTotalXferLength != VAR_15) {



     VAR_14 =
     VAR_8->SRBTotalXferLength - VAR_15;



   VAR_8->SRBTotalXferLength = VAR_15;



   VAR_13 = VAR_8->pSRBSGL + VAR_8->SRBSGIndex;
   for (VAR_11 = VAR_8->SRBSGIndex;
       VAR_11 < VAR_8->SRBSGCount;
       VAR_11++) {



     if (VAR_14 >= VAR_13->length)
     VAR_14 -= VAR_13->length;
    else {



     VAR_13->length -= VAR_14;

     VAR_13->address += VAR_14;

     VAR_8->SRBSGIndex = VAR_11;
     break;
    }
    VAR_13++;
   }
      }
  }
 }
}
