
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;



__attribute__((used)) static int FUNC_0(const unsigned char *VAR_0,
    u32 VAR_1,
    u32 VAR_2,
    u8 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 unsigned char VAR_6;
 unsigned char VAR_7;


 VAR_5 = VAR_2 / 8;
 VAR_7 = VAR_0[VAR_5];
 VAR_4 = VAR_2;
 VAR_6 = 0x80 >> (VAR_2 % 8);

 while (VAR_4 < VAR_1) {
  if ((VAR_3 && (VAR_7 & VAR_6) == VAR_6) ||
      (VAR_3 == 0 && (VAR_7 & VAR_6) == 0))
   return VAR_4;

  VAR_4++;
  VAR_6 >>= 1;
  if (VAR_6 == 0) {
   VAR_7 = VAR_0[++VAR_5];
   VAR_6 = 0x80;
  }
 }

 return -1;
}
