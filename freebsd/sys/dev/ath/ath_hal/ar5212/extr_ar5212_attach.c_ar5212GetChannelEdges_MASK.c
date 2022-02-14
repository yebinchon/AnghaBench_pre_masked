
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_1(struct ath_hal *VAR_6,
 uint16_t VAR_7, uint16_t *VAR_8, uint16_t *VAR_9)
{
 if (VAR_7 & VAR_5) {
  *VAR_8 = 4915;
  *VAR_9 = 6100;
  return VAR_1;
 }
 if ((VAR_7 & VAR_4) &&
     (FUNC_0(VAR_6, VAR_2) ||
      FUNC_0(VAR_6, VAR_3))) {
  *VAR_8 = 2312;
  *VAR_9 = 2732;
  return VAR_1;
 }
 return VAR_0;
}
