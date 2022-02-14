
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_getNoiseFloor; } ;
typedef int HAL_STATUS ;
typedef scalar_t__ HAL_BOOL ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hal*,int *) ;
 int VAR_2 ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_3, HAL_STATUS *VAR_4)
{
 if (FUNC_1(VAR_3, VAR_4) == VAR_0)
  return VAR_0;

 FUNC_0(VAR_3)->ah_getNoiseFloor = VAR_2;

 return VAR_1;
}
