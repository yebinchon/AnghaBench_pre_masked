
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int,int const) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int) ;

uint32_t
FUNC_3(uint16_t *VAR_0, const void *VAR_1, size_t VAR_2, const uint16_t *VAR_3)
{
 const unsigned char *VAR_4;
 size_t VAR_5, VAR_6;
 int VAR_7;
 uint32_t VAR_8;

 VAR_4 = VAR_1;
 VAR_5 = (VAR_3[0] + 15) >> 4;
 VAR_6 = (VAR_5 << 1);
 if (VAR_6 < VAR_2) {
  VAR_6 = VAR_2;
 }
 VAR_6 += 4;
 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < 2; VAR_7 ++) {
  size_t VAR_9, VAR_10;
  uint32_t VAR_11;
  int VAR_12;

  VAR_10 = 1;
  VAR_11 = 0;
  VAR_12 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 ++) {
   uint32_t VAR_13;

   if (VAR_9 < VAR_2) {
    VAR_13 = VAR_4[VAR_2 - 1 - VAR_9];
   } else {
    VAR_13 = 0;
   }
   VAR_11 |= (VAR_13 << VAR_12);
   VAR_12 += 8;
   if (VAR_12 >= 15) {
    uint32_t VAR_14;

    VAR_14 = VAR_11 & (uint32_t)0x7FFF;
    VAR_12 -= 15;
    VAR_11 = VAR_13 >> (8 - VAR_12);
    if (VAR_10 <= VAR_5) {
     if (VAR_7) {
      VAR_0[VAR_10] = VAR_8 & VAR_14;
     } else {
      uint32_t VAR_15;

      VAR_15 = (uint32_t)FUNC_0(VAR_14, VAR_3[VAR_10]);
      VAR_8 = FUNC_2(FUNC_1(VAR_15, 0), VAR_8, VAR_15);
     }
    } else {
     if (!VAR_7) {
      VAR_8 = FUNC_2(FUNC_1(VAR_14, 0), VAR_8, 1);
     }
    }
    VAR_10 ++;
   }
  }
  VAR_8 >>= 1;
  VAR_8 |= (VAR_8 << 1);
 }

 VAR_0[0] = VAR_3[0];
 return VAR_8 & (uint32_t)1;
}
