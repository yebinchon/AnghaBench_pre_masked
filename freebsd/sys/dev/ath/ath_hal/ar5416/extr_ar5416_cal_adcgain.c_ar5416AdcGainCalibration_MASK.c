
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct ath_hal {int dummy; } ;
struct ar5416PerCal {scalar_t__ (* totalAdcIOddPhase ) (scalar_t__) ;scalar_t__ (* totalAdcIEvenPhase ) (scalar_t__) ;scalar_t__ (* totalAdcQOddPhase ) (scalar_t__) ;scalar_t__ (* totalAdcQEvenPhase ) (scalar_t__) ;} ;
struct TYPE_2__ {struct ar5416PerCal ah_cal; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_hal*,int ,char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (struct ath_hal*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

void
FUNC_10(struct ath_hal *VAR_2, uint8_t VAR_3)
{
 struct ar5416PerCal *VAR_4 = &FUNC_0(VAR_2)->ah_cal;
 uint32_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  uint32_t VAR_6 = VAR_4->totalAdcIOddPhase(VAR_5);
  uint32_t VAR_7 = VAR_4->totalAdcIEvenPhase(VAR_5);
  uint32_t VAR_8 = VAR_4->totalAdcQOddPhase(VAR_5);
  uint32_t VAR_9 = VAR_4->totalAdcQEvenPhase(VAR_5);

  FUNC_2(VAR_2, VAR_1,
      "Start ADC Gain Cal for Chain %d\n", VAR_5);
  FUNC_2(VAR_2, VAR_1,
      "  pwr_meas_odd_i = 0x%08x\n", VAR_6);
  FUNC_2(VAR_2, VAR_1,
      "  pwr_meas_even_i = 0x%08x\n", VAR_7);
  FUNC_2(VAR_2, VAR_1,
      "  pwr_meas_odd_q = 0x%08x\n", VAR_8);
  FUNC_2(VAR_2, VAR_1,
      "  pwr_meas_even_q = 0x%08x\n", VAR_9);

  if (VAR_6 != 0 && VAR_9 != 0) {
   uint32_t VAR_10 =
       ((VAR_7*32)/VAR_6) & 0x3f;
   uint32_t VAR_11 =
       ((VAR_8*32)/VAR_9) & 0x3f;
   uint32_t VAR_12;

   FUNC_2(VAR_2, VAR_1,
       " gain_mismatch_i = 0x%08x\n",
       VAR_10);
   FUNC_2(VAR_2, VAR_1,
       " gain_mismatch_q = 0x%08x\n",
       VAR_11);

   VAR_12 = FUNC_3(VAR_2, FUNC_1(VAR_5));
   VAR_12 &= 0xfffff000;
   VAR_12 |= (VAR_11) | (VAR_10 << 6);
   FUNC_5(VAR_2, FUNC_1(VAR_5), VAR_12);

   FUNC_2(VAR_2, VAR_1,
       "ADC Gain Cal done for Chain %d\n", VAR_5);
  }
 }
 FUNC_4(VAR_2, FUNC_1(0),
     VAR_0);
}
