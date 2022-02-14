
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
 scalar_t__ FUNC_0 (struct ath_hal*,int ) ;

__attribute__((used)) static HAL_BOOL
FUNC_1(struct ath_hal *VAR_5,
 uint16_t VAR_6, uint16_t *VAR_7, uint16_t *VAR_8)
{
 if (VAR_6 & VAR_4) {
  *VAR_7 = 4920;
  *VAR_8 = 6100;
  return VAR_1;
 }
 if (VAR_6 & VAR_3 &&
     FUNC_0(VAR_5, VAR_2)) {
  *VAR_7 = 2312;
  *VAR_8 = 2732;
  return VAR_1;
 }
 return VAR_0;
}
