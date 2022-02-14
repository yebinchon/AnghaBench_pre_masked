
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


 int FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ath_hal*,int ,int) ;

void
FUNC_2(struct ath_hal *VAR_3, HAL_LED_STATE VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 switch (VAR_4) {
 case 129:
  VAR_5 &= ~(VAR_2 | VAR_1);
  break;
 case 128:

  VAR_5 &= ~VAR_2;
  VAR_5 |= VAR_1;
  break;
 default:
  VAR_5 |= VAR_2;
  VAR_5 &= ~VAR_1;
  break;
 }
 FUNC_1(VAR_3, VAR_0, VAR_5);
}
