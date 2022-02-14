
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {scalar_t__ ah_currentRD; } ;
typedef int HAL_STATUS ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_5,
 uint16_t VAR_6, HAL_STATUS *VAR_7)
{
 HAL_STATUS VAR_8;

 if (FUNC_0(VAR_5)->ah_currentRD == VAR_6) {
  VAR_8 = VAR_3;
  goto bad;
 }





 if (FUNC_1(VAR_5, VAR_1)) {
  VAR_8 = VAR_2;
  goto bad;
 }
 VAR_8 = VAR_4;
bad:
 if (VAR_7)
  *VAR_7 = VAR_8;
 return VAR_0;
}
