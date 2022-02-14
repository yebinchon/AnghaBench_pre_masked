
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_4, uint16_t VAR_5)
{
 if (VAR_5 < VAR_2) {
  uint32_t VAR_6 = FUNC_1(VAR_4, FUNC_0(VAR_5));
  if (VAR_6 & VAR_3)
   return VAR_1;
 }
 return VAR_0;
}
