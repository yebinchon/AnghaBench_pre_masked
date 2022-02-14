
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct ath_hal {int (* ah_resetKeyCacheEntry ) (struct ath_hal*,int const) ;int (* ah_setKeyCacheEntry ) (struct ath_hal*,int ,int *,int ,int ) ;} ;
struct TYPE_6__ {int ah_11nCompat; int ah_chansurvey; int * ah_fatalState; int ah_devid; } ;
struct TYPE_5__ {int ee_data; int ee_off; } ;
struct TYPE_4__ {int dk_xor; int dk_mac; int dk_keyval; int dk_keyix; } ;
typedef int HAL_REVS ;
typedef TYPE_1__ HAL_DIAG_KEYVAL ;
typedef TYPE_2__ HAL_DIAG_EEVAL ;
typedef int HAL_CHANNEL_SURVEY ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hal*,int const,void*) ;
 int FUNC_2 (struct ath_hal*,int ,int ) ;
 int FUNC_3 (struct ath_hal*,void const*,void*,int) ;
 int FUNC_4 (struct ath_hal*,void const*,int) ;
 int FUNC_5 (struct ath_hal*,int ,int *,int ,int ) ;
 int FUNC_6 (struct ath_hal*,int const) ;

HAL_BOOL
FUNC_7(struct ath_hal *VAR_2, int VAR_3,
 const void *VAR_4, uint32_t VAR_5,
 void **VAR_6, uint32_t *VAR_7)
{

 switch (VAR_3) {
 case 130:
  *VAR_6 = &FUNC_0(VAR_2)->ah_devid;
  *VAR_7 = sizeof(HAL_REVS);
  return VAR_1;
 case 132:
  *VAR_7 = FUNC_3(VAR_2, VAR_4, *VAR_6,*VAR_7);
  return VAR_1;
 case 128:
  FUNC_4(VAR_2, VAR_4, VAR_5);
  *VAR_7 = 0;
  return VAR_1;
 case 133:
  *VAR_6 = &FUNC_0(VAR_2)->ah_fatalState[0];
  *VAR_7 = sizeof(FUNC_0(VAR_2)->ah_fatalState);
  return VAR_1;
 case 135:
  if (VAR_5 != sizeof(uint16_t))
   return VAR_0;
  if (!FUNC_1(VAR_2, *(const uint16_t *)VAR_4, *VAR_6))
   return VAR_0;
  *VAR_7 = sizeof(uint16_t);
  return VAR_1;
 case 137:
  if (VAR_5 == 0) {
   *VAR_7 = sizeof(uint32_t);
   *((uint32_t *)(*VAR_6)) =
    FUNC_0(VAR_2)->ah_11nCompat;
  } else if (VAR_5 == sizeof(uint32_t)) {
   FUNC_0(VAR_2)->ah_11nCompat = *(const uint32_t *)VAR_4;
  } else
   return VAR_0;
  return VAR_1;
 case 136:
  *VAR_6 = &FUNC_0(VAR_2)->ah_chansurvey;
  *VAR_7 = sizeof(HAL_CHANNEL_SURVEY);
  return VAR_1;
 }
 return VAR_0;
}
