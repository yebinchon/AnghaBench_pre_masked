
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
__attribute__((used)) static u8
FUNC_0(u8 VAR_0, bool VAR_1)
{
 static u16 VAR_2[6] = {
  (133 | (0x1 << 8)),
  (131 | (0x2 << 8)),
  (132 | (0x4 << 8)),
  (130 | (0x8 << 8)),
  (129 | (0x10 << 8)),
  (128 | (0x20 << 8))
 };
 u8 VAR_3 = 0;

 for (int VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  if (VAR_1)
   VAR_3 |= (VAR_0 & (VAR_2[VAR_4] >> 8)) ? (VAR_2[VAR_4] & 0xff) : 0;
  else
   VAR_3 |= (VAR_0 & VAR_2[VAR_4]) ? (VAR_2[VAR_4] >> 8) : 0;
 }

 return (VAR_3);
}
