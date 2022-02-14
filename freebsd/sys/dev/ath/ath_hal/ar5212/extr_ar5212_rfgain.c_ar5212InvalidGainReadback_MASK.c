
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {int hiTrig; int loTrig; int currGain; } ;
typedef int HAL_BOOL ;
typedef TYPE_1__ GAIN_VALUES ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int) ;
 int FUNC_2 (int ,int,int,int ) ;

__attribute__((used)) static HAL_BOOL
FUNC_3(struct ath_hal *VAR_2, GAIN_VALUES *VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;

 if (FUNC_0(VAR_2)) {
  VAR_6 = FUNC_2(FUNC_1(VAR_2, 7), 1, 36, 0);
  VAR_7 = 0;
  VAR_8 = 107;
  VAR_9 = 0;
  VAR_10 = 107;
  if (VAR_6 == 1) {
   VAR_8 = 83;
   VAR_10 = 83;
   VAR_3->hiTrig = 55;
  }
 } else {
  VAR_4 = FUNC_2(FUNC_1(VAR_2, 7), 6, 37, 0);

  VAR_7 = 0;
  VAR_8 = (VAR_4 == 0x3f) ? 50 : VAR_4 + 4;
  VAR_9 = (VAR_4 != 0x3f) ? 0x40 : VAR_7;
  VAR_10 = VAR_9 + 50;

  VAR_3->loTrig = VAR_7 + (VAR_4 == 0x3f ? VAR_0 : 0);

  VAR_3->hiTrig = VAR_10 - (VAR_4 == 0x3f ? VAR_1 : -5);
 }
 VAR_5 = VAR_3->currGain;

 return !((VAR_5 >= VAR_7 && VAR_5<= VAR_8) || (VAR_5 >= VAR_9 && VAR_5 <= VAR_10));
}
