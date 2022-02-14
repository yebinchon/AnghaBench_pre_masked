
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_LED_STATE ;


 int VAR_0 ;
 int const VAR_1 ;



 int const VAR_2 ;


 int const FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int ,int const) ;

void
FUNC_2(struct ath_hal *VAR_3, HAL_LED_STATE VAR_4)
{
 static const uint32_t VAR_5[8] = {
  131|129,
  130|129,
  130|129,
  132|129,
  132|129,
  131|128,
  131|128,
  131|128,
 };
 FUNC_1(VAR_3, VAR_0,
  (FUNC_0(VAR_3, VAR_0) &~
   (VAR_1 | VAR_2))
  | VAR_5[VAR_4 & 0x7]
 );
}
