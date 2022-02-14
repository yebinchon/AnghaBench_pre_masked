
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath_hal*,scalar_t__) ;
 int FUNC_1 (struct ath_hal*,scalar_t__,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static uint32_t
FUNC_3(struct ath_hal *VAR_1)
{
 uint32_t VAR_2;
 int VAR_3;

 FUNC_1(VAR_1, (VAR_0 + (0x34 << 2)), 0x00001c16);
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  FUNC_1(VAR_1, (VAR_0 + (0x20 << 2)), 0x00010000);
 VAR_2 = (FUNC_0(VAR_1, VAR_0 + (256 << 2)) >> 24) & 0xff;
 VAR_2 = ((VAR_2 & 0xf0) >> 4) | ((VAR_2 & 0x0f) << 4);
 return FUNC_2(VAR_2, 8);
}
