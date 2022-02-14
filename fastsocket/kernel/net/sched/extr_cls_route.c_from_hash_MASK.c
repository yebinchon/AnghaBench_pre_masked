
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(u32 VAR_0)
{
 VAR_0 &= 0xFFFF;
 if (VAR_0 == 0xFFFF)
  return 32;
 if (!(VAR_0 & 0x8000)) {
  if (VAR_0 > 255)
   return 256;
  return VAR_0&0xF;
 }
 return 16 + (VAR_0&0xF);
}
