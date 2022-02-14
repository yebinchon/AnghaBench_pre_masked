
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_macVersion; int ah_macRev; } ;
typedef int HAL_BOOL ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_4)
{
 uint16_t VAR_5, VAR_6;
 uint32_t VAR_7;






 VAR_7 = FUNC_1(VAR_4, VAR_0) & VAR_1;
 VAR_5 = VAR_7 >> VAR_2;
 VAR_6 = VAR_7 & VAR_3;
 return (FUNC_0(VAR_4)->ah_macVersion == VAR_5 &&
  FUNC_0(VAR_4)->ah_macRev == VAR_6);
}
