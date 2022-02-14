
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct _7zip {size_t bcj_prevPosT; int bcj_prevMask; int bcj_ip; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(struct _7zip *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
 static const uint8_t VAR_3[8] = {1, 1, 1, 0, 1, 0, 0, 0};
 static const uint8_t VAR_4[8] = {0, 1, 2, 2, 3, 3, 3, 3};
 size_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8;

 if (VAR_2 < 5)
  return 0;

 VAR_5 = 0;
 VAR_6 = VAR_0->bcj_prevPosT;
 VAR_8 = VAR_0->bcj_prevMask;
 VAR_7 = VAR_0->bcj_ip;

 for (;;) {
  uint8_t *VAR_9 = VAR_1 + VAR_5;
  uint8_t *VAR_10 = VAR_1 + VAR_2 - 4;

  for (; VAR_9 < VAR_10; VAR_9++)
   if ((*VAR_9 & 0xFE) == 0xE8)
    break;
  VAR_5 = (size_t)(VAR_9 - VAR_1);
  if (VAR_9 >= VAR_10)
   break;
  VAR_6 = VAR_5 - VAR_6;
  if (VAR_6 > 3)
   VAR_8 = 0;
  else {
   VAR_8 = (VAR_8 << ((int)VAR_6 - 1)) & 0x7;
   if (VAR_8 != 0) {
    unsigned char VAR_11 =
     VAR_9[4 - VAR_4[VAR_8]];
    if (!VAR_3[VAR_8] ||
        FUNC_0(VAR_11)) {
     VAR_6 = VAR_5;
     VAR_8 = ((VAR_8 << 1) & 0x7) | 1;
     VAR_5++;
     continue;
    }
   }
  }
  VAR_6 = VAR_5;

  if (FUNC_0(VAR_9[4])) {
   uint32_t VAR_12 = ((uint32_t)VAR_9[4] << 24) |
    ((uint32_t)VAR_9[3] << 16) | ((uint32_t)VAR_9[2] << 8) |
    ((uint32_t)VAR_9[1]);
   uint32_t VAR_13;
   for (;;) {
    uint8_t VAR_14;
    int VAR_15;

    VAR_13 = VAR_12 - (VAR_7 + (uint32_t)VAR_5);
    if (VAR_8 == 0)
     break;
    VAR_15 = VAR_4[VAR_8] * 8;
    VAR_14 = (uint8_t)(VAR_13 >> (24 - VAR_15));
    if (!FUNC_0(VAR_14))
     break;
    VAR_12 = VAR_13 ^ ((1 << (32 - VAR_15)) - 1);
   }
   VAR_9[4] = (uint8_t)(~(((VAR_13 >> 24) & 1) - 1));
   VAR_9[3] = (uint8_t)(VAR_13 >> 16);
   VAR_9[2] = (uint8_t)(VAR_13 >> 8);
   VAR_9[1] = (uint8_t)VAR_13;
   VAR_5 += 5;
  } else {
   VAR_8 = ((VAR_8 << 1) & 0x7) | 1;
   VAR_5++;
  }
 }
 VAR_0->bcj_prevPosT = VAR_6;
 VAR_0->bcj_prevMask = VAR_8;
 VAR_0->bcj_ip += (uint32_t)VAR_5;
 return (VAR_5);
}
