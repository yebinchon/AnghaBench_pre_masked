
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned short *VAR_0,
         unsigned short *VAR_1,
         unsigned short *VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4)
{





 if ((VAR_4 & 1) == 0) {
  while (VAR_3--) {
   *VAR_0-- = *VAR_2++;
   *VAR_1-- = *VAR_2++;
  }
 } else {
  while (VAR_3--) {
   *VAR_1-- = *VAR_2++;
   *VAR_0-- = *VAR_2++;
  }
 }
}
