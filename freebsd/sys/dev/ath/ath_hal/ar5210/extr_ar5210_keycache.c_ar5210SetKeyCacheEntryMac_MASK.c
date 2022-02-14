
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int const* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ath_hal*,int ,int) ;

HAL_BOOL
FUNC_3(struct ath_hal *VAR_5, uint16_t VAR_6, const uint8_t *VAR_7)
{
 uint32_t VAR_8, VAR_9;

 if (VAR_6 < VAR_3) {




  if (VAR_7 != VAR_1) {
   VAR_8 = (VAR_7[5] << 8) | VAR_7[4];
   VAR_9 = (VAR_7[3] << 24)| (VAR_7[2] << 16)
         | (VAR_7[1] << 8) | VAR_7[0];
   VAR_9 >>= 1;
   VAR_9 |= (VAR_8 & 1) << 31;
   VAR_8 >>= 1;
  } else {
   VAR_9 = VAR_8 = 0;
  }

  FUNC_2(VAR_5, FUNC_0(VAR_6), VAR_9);
  FUNC_2(VAR_5, FUNC_1(VAR_6),
   VAR_8 | VAR_4);
  return VAR_2;
 }
 return VAR_0;
}
