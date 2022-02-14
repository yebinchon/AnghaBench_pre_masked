
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct ath_hal_5416 {int * ah_keytype; } ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (struct ath_hal*,size_t) ;
 int * VAR_3 ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_4, uint16_t VAR_5)
{
 struct ath_hal_5416 *VAR_6 = FUNC_0(VAR_4);

 if (FUNC_1(VAR_4, VAR_5)) {
  VAR_6->ah_keytype[VAR_5] = VAR_3[VAR_2];
  return VAR_1;
 } else
  return VAR_0;
}
