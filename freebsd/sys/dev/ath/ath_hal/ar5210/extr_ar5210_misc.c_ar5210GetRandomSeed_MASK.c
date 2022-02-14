
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath_hal*,scalar_t__) ;

uint32_t
FUNC_1(struct ath_hal *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = (FUNC_0(VAR_3, VAR_0 + (25 << 2)) >> 19) & 0x1ff;
 if (VAR_4 & 0x100)
  VAR_4 = 0 - ((VAR_4 ^ 0x1ff) + 1);
 return (FUNC_0(VAR_3, VAR_2) ^
  FUNC_0(VAR_3, VAR_1) ^ VAR_4);
}
