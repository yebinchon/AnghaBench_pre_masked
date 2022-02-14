
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int prev_mask; int prev_pos; } ;
typedef TYPE_1__ lzma_simple_x86 ;
typedef scalar_t__ buffer_pos ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(void *VAR_0, uint32_t VAR_1, bool VAR_2,
  uint8_t *VAR_3, size_t VAR_4)
{
 static const bool VAR_5[8]
  = { 1, 1, 1, 0, 1, 0, 0, 0 };

 static const uint32_t VAR_6[8]
   = { 0, 1, 2, 2, 3, 3, 3, 3 };

 lzma_simple_x86 *VAR_7 = VAR_0;
 uint32_t VAR_8 = VAR_7->prev_mask;
 uint32_t VAR_9 = VAR_7->prev_pos;

 if (VAR_4 < 5)
  return 0;

 if (VAR_1 - VAR_9 > 5)
  VAR_9 = VAR_1 - 5;

 const size_t VAR_10 = VAR_4 - 5;
 size_t VAR_11 = 0;

 while (VAR_11 <= VAR_10) {
  uint8_t VAR_12 = VAR_3[VAR_11];
  if (VAR_12 != 0xE8 && VAR_12 != 0xE9) {
   ++VAR_11;
   continue;
  }

  const uint32_t VAR_13 = VAR_1 + (uint32_t)(VAR_11)
    - VAR_9;
  VAR_9 = VAR_1 + (uint32_t)(VAR_11);

  if (VAR_13 > 5) {
   VAR_8 = 0;
  } else {
   for (uint32_t VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14) {
    VAR_8 &= 0x77;
    VAR_8 <<= 1;
   }
  }

  VAR_12 = VAR_3[VAR_11 + 4];

  if (FUNC_0(VAR_12)
   && VAR_5[(VAR_8 >> 1) & 0x7]
    && (VAR_8 >> 1) < 0x10) {

   uint32_t VAR_15 = ((uint32_t)(VAR_12) << 24)
    | ((uint32_t)(VAR_3[VAR_11 + 3]) << 16)
    | ((uint32_t)(VAR_3[VAR_11 + 2]) << 8)
    | (VAR_3[VAR_11 + 1]);

   uint32_t VAR_16;
   while (1) {
    if (VAR_2)
     VAR_16 = VAR_15 + (VAR_1 + (uint32_t)(
       VAR_11) + 5);
    else
     VAR_16 = VAR_15 - (VAR_1 + (uint32_t)(
       VAR_11) + 5);

    if (VAR_8 == 0)
     break;

    const uint32_t VAR_17 = VAR_6[
      VAR_8 >> 1];

    VAR_12 = (uint8_t)(VAR_16 >> (24 - VAR_17 * 8));

    if (!FUNC_0(VAR_12))
     break;

    VAR_15 = VAR_16 ^ ((1 << (32 - VAR_17 * 8)) - 1);
   }

   VAR_3[VAR_11 + 4]
     = (uint8_t)(~(((VAR_16 >> 24) & 1) - 1));
   VAR_3[VAR_11 + 3] = (uint8_t)(VAR_16 >> 16);
   VAR_3[VAR_11 + 2] = (uint8_t)(VAR_16 >> 8);
   VAR_3[VAR_11 + 1] = (uint8_t)(VAR_16);
   VAR_11 += 5;
   VAR_8 = 0;

  } else {
   ++VAR_11;
   VAR_8 |= 1;
   if (FUNC_0(VAR_12))
    VAR_8 |= 0x10;
  }
 }

 VAR_7->prev_mask = VAR_8;
 VAR_7->prev_pos = VAR_9;

 return VAR_11;
}
