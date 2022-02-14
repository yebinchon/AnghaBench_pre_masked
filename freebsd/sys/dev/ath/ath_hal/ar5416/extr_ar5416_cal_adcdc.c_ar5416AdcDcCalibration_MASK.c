
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct ar5416PerCal {int (* totalAdcDcOffsetIOddPhase ) (int) ;int (* totalAdcDcOffsetIEvenPhase ) (int) ;int (* totalAdcDcOffsetQOddPhase ) (int) ;int (* totalAdcDcOffsetQEvenPhase ) (int) ;TYPE_1__* cal_curr; } ;
typedef int int32_t ;
struct TYPE_6__ {struct ar5416PerCal ah_cal; } ;
struct TYPE_5__ {int calCountMax; int calNumSamples; } ;
struct TYPE_4__ {TYPE_2__* calData; } ;
typedef TYPE_2__ HAL_PERCAL_DATA ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath_hal*,int ,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (struct ath_hal*,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

void
FUNC_11(struct ath_hal *VAR_2, uint8_t VAR_3)
{
 struct ar5416PerCal *VAR_4 = &FUNC_0(VAR_2)->ah_cal;
 const HAL_PERCAL_DATA *VAR_5 = VAR_4->cal_curr->calData;
 uint32_t VAR_6;
 int VAR_7;

 VAR_6 = (1 << (VAR_5->calCountMax + 5)) * VAR_5->calNumSamples;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  uint32_t VAR_8 = VAR_4->totalAdcDcOffsetIOddPhase(VAR_7);
  uint32_t VAR_9 = VAR_4->totalAdcDcOffsetIEvenPhase(VAR_7);
  int32_t VAR_10 = VAR_4->totalAdcDcOffsetQOddPhase(VAR_7);
  int32_t VAR_11 = VAR_4->totalAdcDcOffsetQEvenPhase(VAR_7);
  int32_t VAR_12, VAR_13;
  uint32_t VAR_14;

  FUNC_3(VAR_2, VAR_1,
      "Starting ADC DC Offset Cal for Chain %d\n", VAR_7);

  FUNC_3(VAR_2, VAR_1, " pwr_meas_odd_i = %d\n",
      VAR_8);
  FUNC_3(VAR_2, VAR_1, " pwr_meas_even_i = %d\n",
      VAR_9);
  FUNC_3(VAR_2, VAR_1, " pwr_meas_odd_q = %d\n",
      VAR_10);
  FUNC_3(VAR_2, VAR_1, " pwr_meas_even_q = %d\n",
      VAR_11);

  FUNC_2(VAR_6);

  VAR_13 = (((VAR_9 - VAR_8) * 2) /
      VAR_6) & 0x1ff;
  VAR_12 = (((VAR_10 - VAR_11) * 2) /
      VAR_6) & 0x1ff;
  FUNC_3(VAR_2, VAR_1,
      " dc_offset_mismatch_i = 0x%08x\n", VAR_13);
  FUNC_3(VAR_2, VAR_1,
      " dc_offset_mismatch_q = 0x%08x\n", VAR_12);

  VAR_14 = FUNC_4(VAR_2, FUNC_1(VAR_7));
  VAR_14 &= 0xc0000fff;
  VAR_14 |= (VAR_12 << 12) | (VAR_13 << 21);
  FUNC_6(VAR_2, FUNC_1(VAR_7), VAR_14);

  FUNC_3(VAR_2, VAR_1,
      "ADC DC Offset Cal done for Chain %d\n", VAR_7);
 }
 FUNC_5(VAR_2, FUNC_1(0),
     VAR_0);
}
