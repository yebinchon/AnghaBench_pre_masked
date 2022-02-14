
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static void FUNC_2(u32 *VAR_8, const u32 *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_12 = VAR_8[0];
 VAR_11 = VAR_8[1];

 VAR_10 = ((VAR_12 >> 4) ^ VAR_11) & 0x0f0f0f0fL;
 VAR_11 ^= VAR_10;
 VAR_12 ^= (VAR_10 << 4);

 VAR_10 = ((VAR_12 >> 16) ^ VAR_11) & 0x0000ffffL;
 VAR_11 ^= VAR_10;
 VAR_12 ^= (VAR_10 << 16);

 VAR_10 = ((VAR_11 >> 2) ^ VAR_12) & 0x33333333L;
 VAR_12 ^= VAR_10;
 VAR_11 ^= (VAR_10 << 2);

 VAR_10 = ((VAR_11 >> 8) ^ VAR_12) & 0x00ff00ffL;
 VAR_12 ^= VAR_10;
 VAR_11 ^= (VAR_10 << 8);

 VAR_11 = FUNC_0(VAR_11, 1);
 VAR_10 = (VAR_12 ^ VAR_11) & 0xaaaaaaaaL;

 VAR_12 ^= VAR_10;
 VAR_11 ^= VAR_10;
 VAR_12 = FUNC_0(VAR_12, 1);

 for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
  VAR_10 = FUNC_1(VAR_11, 4) ^ *VAR_9++;
  VAR_12 ^= VAR_6[VAR_10 & 0x3fL]
   ^ VAR_4[(VAR_10 >> 8) & 0x3fL]
   ^ VAR_2[(VAR_10 >> 16) & 0x3fL]
   ^ VAR_0[(VAR_10 >> 24) & 0x3fL];
  VAR_10 = VAR_11 ^ *VAR_9++;
  VAR_12 ^= VAR_7[ VAR_10 & 0x3fL]
   ^ VAR_5[(VAR_10 >> 8) & 0x3fL]
   ^ VAR_3[(VAR_10 >> 16) & 0x3fL]
   ^ VAR_1[(VAR_10 >> 24) & 0x3fL];

  VAR_10 = FUNC_1(VAR_12, 4) ^ *VAR_9++;
  VAR_11 ^= VAR_6[ VAR_10 & 0x3fL]
   ^ VAR_4[(VAR_10 >> 8) & 0x3fL]
   ^ VAR_2[(VAR_10 >> 16) & 0x3fL]
   ^ VAR_0[(VAR_10 >> 24) & 0x3fL];
  VAR_10 = VAR_12 ^ *VAR_9++;
  VAR_11 ^= VAR_7[ VAR_10 & 0x3fL]
   ^ VAR_5[(VAR_10 >> 8) & 0x3fL]
   ^ VAR_3[(VAR_10 >> 16) & 0x3fL]
   ^ VAR_1[(VAR_10 >> 24) & 0x3fL];
 }

 VAR_11 = FUNC_1(VAR_11, 1);
 VAR_10 = (VAR_12 ^ VAR_11) & 0xaaaaaaaaL;
 VAR_12 ^= VAR_10;
 VAR_11 ^= VAR_10;
 VAR_12 = FUNC_1(VAR_12, 1);
 VAR_10 = ((VAR_12 >> 8) ^ VAR_11) & 0x00ff00ffL;
 VAR_11 ^= VAR_10;
 VAR_12 ^= (VAR_10 << 8);

 VAR_10 = ((VAR_12 >> 2) ^ VAR_11) & 0x33333333L;
 VAR_11 ^= VAR_10;
 VAR_12 ^= (VAR_10 << 2);
 VAR_10 = ((VAR_11 >> 16) ^ VAR_12) & 0x0000ffffL;
 VAR_12 ^= VAR_10;
 VAR_11 ^= (VAR_10 << 16);
 VAR_10 = ((VAR_11 >> 4) ^ VAR_12) & 0x0f0f0f0fL;
 VAR_12 ^= VAR_10;
 VAR_11 ^= (VAR_10 << 4);

 VAR_8[0] = VAR_11;
 VAR_8[1] = VAR_12;
}
