
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
 u8 VAR_3 = 0;

 if (VAR_0 > 0) {
  int VAR_4 = VAR_1;

  VAR_3 = 1;
  while (VAR_0 > VAR_4 && VAR_3 < 255) {
   VAR_3++;
   VAR_1 <<= 1;
   if (VAR_1 > VAR_2)
    VAR_1 = VAR_2;
   VAR_4 += VAR_1;
  }
 }
 return VAR_3;
}
