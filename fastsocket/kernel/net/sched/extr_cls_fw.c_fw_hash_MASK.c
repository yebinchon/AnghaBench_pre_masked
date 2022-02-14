
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static __inline__ int FUNC_0(u32 VAR_1)
{
 if (VAR_0 == 4096)
  return ((VAR_1 >> 24) & 0xFFF) ^
         ((VAR_1 >> 12) & 0xFFF) ^
         (VAR_1 & 0xFFF);
 else if (VAR_0 == 2048)
  return ((VAR_1 >> 22) & 0x7FF) ^
         ((VAR_1 >> 11) & 0x7FF) ^
         (VAR_1 & 0x7FF);
 else if (VAR_0 == 1024)
  return ((VAR_1 >> 20) & 0x3FF) ^
         ((VAR_1 >> 10) & 0x3FF) ^
         (VAR_1 & 0x3FF);
 else if (VAR_0 == 512)
  return (VAR_1 >> 27) ^
         ((VAR_1 >> 18) & 0x1FF) ^
         ((VAR_1 >> 9) & 0x1FF) ^
         (VAR_1 & 0x1FF);
 else if (VAR_0 == 256) {
  u8 *VAR_2 = (u8 *) &VAR_1;
  return VAR_2[0] ^ VAR_2[1] ^ VAR_2[2] ^ VAR_2[3];
 } else
  return VAR_1 & (VAR_0 - 1);
}
