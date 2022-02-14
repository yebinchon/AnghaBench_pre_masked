
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct ar5416PerCal {int (* totalPowerMeasI ) (int) ;int (* totalPowerMeasQ ) (int) ;int (* totalIqCorrMeas ) (int) ;} ;
typedef int int32_t ;
struct TYPE_2__ {struct ar5416PerCal ah_cal; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ath_hal*,int ,char*,int,...) ;
 int VAR_4 ;
 int FUNC_3 (struct ath_hal*,int ,int ,int) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

void
FUNC_8(struct ath_hal *VAR_5, uint8_t VAR_6)
{
 struct ar5416PerCal *VAR_7 = &FUNC_0(VAR_5)->ah_cal;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  uint32_t VAR_9 = VAR_7->totalPowerMeasI(VAR_8);
  uint32_t VAR_10 = VAR_7->totalPowerMeasQ(VAR_8);
  uint32_t VAR_11 = VAR_7->totalIqCorrMeas(VAR_8);
  uint32_t VAR_12, VAR_13;
  int VAR_14;

  FUNC_2(VAR_5, VAR_4,
      "Start IQ Cal and Correction for Chain %d\n", VAR_8);
  FUNC_2(VAR_5, VAR_4,
      "Orignal: iq_corr_meas = 0x%08x\n", VAR_11);

  VAR_14 = 0;

  if (VAR_11 > 0x80000000) {
   VAR_11 = (0xffffffff - VAR_11) + 1;
   VAR_14 = 1;
  }

  FUNC_2(VAR_5, VAR_4, " pwr_meas_i = 0x%08x\n",
      VAR_9);
  FUNC_2(VAR_5, VAR_4, " pwr_meas_q = 0x%08x\n",
      VAR_10);
  FUNC_2(VAR_5, VAR_4, " iqCorrNeg is 0x%08x\n",
      VAR_14);

  VAR_13 = (VAR_9/2 + VAR_10/2)/ 128;
  VAR_12 = VAR_10 / 64;

  if (VAR_10 != 0) {

   int32_t VAR_15 = VAR_11/VAR_13;
   int32_t VAR_16 = VAR_9/VAR_12 - 64;

   FUNC_2(VAR_5, VAR_4, " iCoff = 0x%08x\n",
       VAR_15);
   FUNC_2(VAR_5, VAR_4, " qCoff = 0x%08x\n",
       VAR_16);


   VAR_15 = VAR_15 & 0x3f;
   FUNC_2(VAR_5, VAR_4,
       "New:  iCoff = 0x%08x\n", VAR_15);

   if (VAR_14 == 0x0)
    VAR_15 = 0x40 - VAR_15;
   if (VAR_16 > 15)
    VAR_16 = 15;
   else if (VAR_16 <= -16)
    VAR_16 = -16;
   FUNC_2(VAR_5, VAR_4,
       " : iCoff = 0x%x  qCoff = 0x%x\n", VAR_15, VAR_16);

   FUNC_3(VAR_5, FUNC_1(VAR_8),
       VAR_2, VAR_15);
   FUNC_3(VAR_5, FUNC_1(VAR_8),
       VAR_3, VAR_16);
   FUNC_2(VAR_5, VAR_4,
       "IQ Cal and Correction done for Chain %d\n", VAR_8);
  }
 }
 FUNC_4(VAR_5, VAR_0,
     VAR_1);
}
