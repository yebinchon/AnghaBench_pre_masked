
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_STATUS ;
typedef int HAL_QUIET_FLAG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hal*,int ,int) ;

HAL_STATUS
FUNC_1(struct ath_hal *VAR_5, uint32_t VAR_6, uint32_t VAR_7,
    uint32_t VAR_8, HAL_QUIET_FLAG VAR_9)
{
 FUNC_0(VAR_5, VAR_1, VAR_6 | (VAR_7 << VAR_2));
 if (VAR_9 & VAR_4) {
  FUNC_0(VAR_5, VAR_0, VAR_8 | (1 << 16));
 }
 else {
  FUNC_0(VAR_5, VAR_0, VAR_8);
 }
 return VAR_3;
}
