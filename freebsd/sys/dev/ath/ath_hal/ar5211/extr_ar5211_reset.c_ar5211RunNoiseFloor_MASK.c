
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ath_hal {int dummy; } ;
typedef int int16_t ;
struct TYPE_4__ {TYPE_1__* ah_curchan; } ;
struct TYPE_3__ {int ic_freq; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath_hal*,int ,char*,int,...) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ath_hal*,int ) ;
 int FUNC_6 (struct ath_hal*,int ,int) ;
 int FUNC_7 (struct ath_hal*) ;

int16_t
FUNC_8(struct ath_hal *VAR_4, uint8_t VAR_5, int16_t VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_2(VAR_5 <= 7);


 FUNC_6(VAR_4, FUNC_1(25),
  (FUNC_5(VAR_4, FUNC_1(25)) & ~0xFFF) |
    ((VAR_5 << 9) & 0xE00) | (VAR_6 & 0x1FF));

 FUNC_6(VAR_4, VAR_1,
  FUNC_5(VAR_4, VAR_1) | VAR_2);


 if (VAR_5 == 0) {

  VAR_8 = 8 * 7;
 } else {

  VAR_8 = (VAR_5 * 512) * 7;
 }
 for (VAR_7 = 0; VAR_7 < 60; VAR_7++) {
  if ((FUNC_5(VAR_4, VAR_1) & VAR_2) == 0)
   break;
  FUNC_4(VAR_8);
 }
 if (VAR_7 >= 60) {
  FUNC_3(VAR_4, VAR_3,
      "NF with runTime %d failed to end on channel %d\n",
      VAR_5, FUNC_0(VAR_4)->ah_curchan->ic_freq);
  FUNC_3(VAR_4, VAR_3,
      "  PHY NF Reg state:	 0x%x\n",
      FUNC_5(VAR_4, VAR_1));
  FUNC_3(VAR_4, VAR_3,
      "  PHY Active Reg state: 0x%x\n",
      FUNC_5(VAR_4, VAR_0));
  return 0;
 }

 return FUNC_7(VAR_4);
}
