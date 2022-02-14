
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_diagreg; } ;
typedef int HAL_STATUS ;
typedef int HAL_CAPABILITY_TYPE ;
typedef int HAL_BOOL ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (struct ath_hal*,int ,int) ;
 int FUNC_2 (struct ath_hal*,int,int,int,int *) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_2, HAL_CAPABILITY_TYPE VAR_3,
 uint32_t VAR_4, uint32_t VAR_5, HAL_STATUS *VAR_6)
{
 switch (VAR_3) {
 case 128:
  FUNC_0(VAR_2)->ah_diagreg = VAR_5 & 0x6;

  FUNC_1(VAR_2, VAR_1, FUNC_0(VAR_2)->ah_diagreg);
  return VAR_0;
 default:
  return FUNC_2(VAR_2, VAR_3, VAR_4,
   VAR_5, VAR_6);
 }
}
