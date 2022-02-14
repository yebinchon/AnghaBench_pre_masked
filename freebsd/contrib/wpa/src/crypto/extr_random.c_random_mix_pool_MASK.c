
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,void const*,size_t) ;

__attribute__((used)) static void FUNC_2(const void *VAR_10, size_t VAR_11)
{
 static const u32 VAR_12[8] = {
  0x00000000, 0x3b6e20c8, 0x76dc4190, 0x4db26158,
  0xedb88320, 0xd6d6a3e8, 0x9b64c2b0, 0xa00ae278
 };
 const u8 *VAR_13 = VAR_10;
 u32 VAR_14;

 FUNC_1(VAR_0, "random_mix_pool", VAR_10, VAR_11);

 while (VAR_11--) {
  VAR_14 = FUNC_0(*VAR_13++, VAR_7 & 31);
  VAR_7 += VAR_9 ? 7 : 14;
  VAR_9 = (VAR_9 - 1) & VAR_6;
  VAR_14 ^= VAR_8[VAR_9];
  VAR_14 ^= VAR_8[(VAR_9 + VAR_1) & VAR_6];
  VAR_14 ^= VAR_8[(VAR_9 + VAR_2) & VAR_6];
  VAR_14 ^= VAR_8[(VAR_9 + VAR_3) & VAR_6];
  VAR_14 ^= VAR_8[(VAR_9 + VAR_4) & VAR_6];
  VAR_14 ^= VAR_8[(VAR_9 + VAR_5) & VAR_6];
  VAR_8[VAR_9] = (VAR_14 >> 3) ^ VAR_12[VAR_14 & 7];
 }
}
