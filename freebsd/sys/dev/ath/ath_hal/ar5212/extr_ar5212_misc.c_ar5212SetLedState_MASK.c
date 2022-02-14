
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_LED_STATE ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;
 int FUNC_3 (int const,int) ;

void
FUNC_4(struct ath_hal *VAR_5, HAL_LED_STATE VAR_6)
{
 static const uint32_t VAR_7[8] = {
  129,
  128,
  128,
  130,
  130,
  129,
  129,
  129,
 };
 uint32_t VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_0);
 if (FUNC_0(VAR_5)) {







  VAR_8 = (VAR_8 &~ VAR_2)
       | FUNC_3(VAR_4, VAR_2)



       | 0x08000000;
 }
 VAR_8 = (VAR_8 &~ VAR_1)
      | FUNC_3(VAR_7[VAR_6 & 0x7], VAR_1);
 FUNC_2(VAR_5, VAR_0, VAR_8);
}
