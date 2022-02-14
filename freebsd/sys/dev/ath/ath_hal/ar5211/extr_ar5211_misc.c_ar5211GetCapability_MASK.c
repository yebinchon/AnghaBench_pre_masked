
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_STATUS ;
typedef int HAL_CAPABILITY_TYPE ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hal*,int,int ,int *) ;

HAL_STATUS
FUNC_1(struct ath_hal *VAR_2, HAL_CAPABILITY_TYPE VAR_3,
 uint32_t VAR_4, uint32_t *VAR_5)
{

 switch (VAR_3) {
 case 131:
  switch (VAR_4) {
  case 130:
  case 128:
  case 129:
   return VAR_1;
  default:
   return VAR_0;
  }
 default:
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 }
}
