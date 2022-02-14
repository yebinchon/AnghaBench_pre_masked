
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
 int VAR_2 ;
 int FUNC_0 (struct ath_hal*,int,int ,int *) ;

HAL_STATUS
FUNC_1(struct ath_hal *VAR_3, HAL_CAPABILITY_TYPE VAR_4,
 uint32_t VAR_5, uint32_t *VAR_6)
{

 switch (VAR_4) {
 case 128:



  return VAR_1;

 default:
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
