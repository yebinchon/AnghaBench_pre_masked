
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_LED_STATE ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int const VAR_3 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ,int ,int const) ;

void
FUNC_2(struct ath_hal *VAR_4, HAL_LED_STATE VAR_5)
{
 static const uint32_t VAR_6[8] = {
  129,
  128,
  128,
  130,
  130,
  129,
  129,
  129,
 };

 if (FUNC_0(VAR_4))
  return;




 FUNC_1(VAR_4, VAR_0,
     VAR_1, VAR_6[VAR_5 & 0x7]);
 FUNC_1(VAR_4, VAR_0, VAR_2,
     VAR_3);
}
