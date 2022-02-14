
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct ath_hal_5416 {int * ah_keytype; } ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {size_t kv_type; } ;
typedef TYPE_1__ HAL_KEYVAL ;
typedef int HAL_BOOL ;


 struct ath_hal_5416* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ath_hal*,size_t,TYPE_1__ const*,int const*,int) ;
 int * VAR_2 ;

HAL_BOOL
FUNC_2(struct ath_hal *VAR_3, uint16_t VAR_4,
                       const HAL_KEYVAL *VAR_5, const uint8_t *VAR_6,
                       int VAR_7)
{
 struct ath_hal_5416 *VAR_8 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)) {
  VAR_8->ah_keytype[VAR_4] = VAR_2[VAR_5->kv_type];
  return VAR_1;
 } else
  return VAR_0;
}
