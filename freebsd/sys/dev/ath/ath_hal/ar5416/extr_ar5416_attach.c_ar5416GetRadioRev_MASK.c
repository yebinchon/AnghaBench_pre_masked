
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;
 int FUNC_3 (int,int) ;

uint32_t
FUNC_4(struct ath_hal *VAR_0)
{
 uint32_t VAR_1;
 int VAR_2;


 FUNC_2(VAR_0, FUNC_0(0x36), 0x00007058);
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  FUNC_2(VAR_0, FUNC_0(0x20), 0x00010000);
 VAR_1 = (FUNC_1(VAR_0, FUNC_0(256)) >> 24) & 0xff;
 VAR_1 = ((VAR_1 & 0xf0) >> 4) | ((VAR_1 & 0x0f) << 4);
 return FUNC_3(VAR_1, 8);
}
