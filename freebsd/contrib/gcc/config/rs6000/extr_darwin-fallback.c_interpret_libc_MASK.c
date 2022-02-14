
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct _Unwind_Context {int dummy; } ;
typedef int reg_unit ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (struct _Unwind_Context*) ;
 int FUNC_1 (struct _Unwind_Context*,int) ;
 scalar_t__ FUNC_2 (struct _Unwind_Context*) ;

__attribute__((used)) static bool
FUNC_3 (reg_unit VAR_1[32], struct _Unwind_Context *VAR_2)
{
  uint32_t *VAR_3 = (uint32_t *)FUNC_2 (VAR_2);
  uint32_t VAR_4;
  reg_unit VAR_5 = (reg_unit) VAR_3;
  reg_unit VAR_6 = 0;
  uint32_t *VAR_7 = ((void*)0);

  int VAR_8;

  for (VAR_8 = 0; VAR_8 < 13; VAR_8++)
    VAR_1[VAR_8] = 1;
  VAR_1[1] = FUNC_0 (VAR_2);
  for (; VAR_8 < 32; VAR_8++)
    VAR_1[VAR_8] = FUNC_1 (VAR_2, VAR_8);
  VAR_4 = FUNC_1 (VAR_2, VAR_0);
  for (;;)
    {
      uint32_t VAR_9 = *VAR_3++;

      if ((VAR_9 & 0xFC000003) == 0x48000000)
 {
   VAR_3 += ((((int32_t) VAR_9 & 0x3FFFFFC) ^ 0x2000000) - 0x2000004) / 4;
   continue;
 }
      if ((VAR_9 & 0xFC600000) == 0x2C000000)
 {
   int32_t VAR_10 = (int16_t) VAR_9;
   int32_t VAR_11 = VAR_1[VAR_9 >> 16 & 0x1F];


   uint32_t VAR_12 = 0xF << ((VAR_9 >> 21 & 0x1C) ^ 0x1C);
   if (VAR_10 == VAR_11)
     VAR_4 |= VAR_12;
   else
     VAR_4 &= ~VAR_12;
   continue;
 }
      if ((VAR_9 & 0xFEC38003) == 0x40820000)
 {
   if ((VAR_4 >> ((VAR_9 >> 16 & 0x1F) ^ 0x1F) & 1) == (VAR_9 >> 24 & 1))
     VAR_3 += (VAR_9 & 0x7FFC) / 4 - 1;
   continue;
 }
      if ((VAR_9 & 0xFC0007FF) == 0x7C000378)
 {
   VAR_1 [VAR_9 >> 16 & 0x1F] = (VAR_1 [VAR_9 >> 11 & 0x1F]
         | VAR_1 [VAR_9 >> 21 & 0x1F]);
   continue;
 }
      if (VAR_9 >> 26 == 0x0E)
 {
   reg_unit VAR_13 = (VAR_9 >> 16 & 0x1F) == 0 ? 0 : VAR_1 [VAR_9 >> 16 & 0x1F];
   VAR_1 [VAR_9 >> 21 & 0x1F] = VAR_13 + (int16_t) VAR_9;
   continue;
 }
      if (VAR_9 >> 26 == 0x0F)
 {
   reg_unit VAR_14 = (VAR_9 >> 16 & 0x1F) == 0 ? 0 : VAR_1 [VAR_9 >> 16 & 0x1F];
   VAR_1 [VAR_9 >> 21 & 0x1F] = VAR_14 + ((int16_t) VAR_9 << 16);
   continue;
 }
      if (VAR_9 >> 26 == 0x20)
 {
   reg_unit VAR_15 = (VAR_9 >> 16 & 0x1F) == 0 ? 0 : VAR_1 [VAR_9 >> 16 & 0x1F];
   uint32_t *VAR_16 = (uint32_t *)(VAR_15 + (int16_t) VAR_9);
   if (VAR_16 == VAR_7)
     return 0;
   VAR_1 [VAR_9 >> 21 & 0x1F] = *VAR_16;
   continue;
 }
      if (VAR_9 >> 26 == 0x21)
 {
   uint32_t *VAR_17 = (uint32_t *)(VAR_1 [VAR_9 >> 16 & 0x1F] += (int16_t) VAR_9);
   if (VAR_17 == VAR_7)
     return 0;
   VAR_1 [VAR_9 >> 21 & 0x1F] = *VAR_17;
   continue;
 }
      if (VAR_9 >> 26 == 0x24)



 {
   reg_unit VAR_18 = (VAR_9 >> 16 & 0x1F) == 0 ? 0 : VAR_1 [VAR_9 >> 16 & 0x1F];
   uint32_t *VAR_19 = (uint32_t *)(VAR_18 + (int16_t) VAR_9);
   if (VAR_19 == ((void*)0) || VAR_7 != ((void*)0))
     return 0;
   VAR_7 = VAR_19;
   continue;
 }
      if (VAR_9 >> 26 == 0x2E)
 {
   reg_unit VAR_20 = (VAR_9 >> 16 & 0x1F) == 0 ? 0 : VAR_1 [VAR_9 >> 16 & 0x1F];
   uint32_t *VAR_21 = (uint32_t *)(VAR_20 + (int16_t) VAR_9);
   int VAR_22;

   for (VAR_22 = (VAR_9 >> 21 & 0x1F); VAR_22 < 32; VAR_22++)
     {
       if (VAR_21 == VAR_7)
  return 0;
       VAR_1[VAR_22] = *VAR_21++;
     }
   continue;
 }
      if ((VAR_9 & 0xFC1FFFFF) == 0x7c0803a6)
 {
   VAR_5 = VAR_1 [VAR_9 >> 21 & 0x1F];
   continue;
 }
      if ((VAR_9 & 0xFC1FFFFF) == 0x7c0802a6)
 {
   VAR_1 [VAR_9 >> 21 & 0x1F] = VAR_5;
   continue;
 }
      if ((VAR_9 & 0xFC1FFFFF) == 0x7c0903a6)
 {
   VAR_6 = VAR_1 [VAR_9 >> 21 & 0x1F];
   continue;
 }



      if ((VAR_9 & 0xFC000FFF) == 0x7c000120)
 {
   int VAR_23;
   uint32_t VAR_24 = 0;
   for (VAR_23 = 0; VAR_23 < 8; VAR_23++)
     VAR_24 |= ((-(VAR_9 >> (12 + VAR_23) & 1)) & 0xF) << 4 * VAR_23;
   VAR_4 = (VAR_4 & ~VAR_24) | (VAR_1 [VAR_9 >> 21 & 0x1F] & VAR_24);
   continue;
 }
      if (VAR_9 == 0x429f0005)
 {
   VAR_5 = (reg_unit) VAR_3;
   continue;
 }
      if (VAR_9 == 0x4e800420)
 {
   VAR_3 = (uint32_t *) VAR_6;
   continue;
 }
      if (VAR_9 == 0x44000002)
 return 1;

      return 0;
    }
}
