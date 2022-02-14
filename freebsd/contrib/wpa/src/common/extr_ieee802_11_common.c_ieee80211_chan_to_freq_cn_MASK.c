
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static int FUNC_0(u8 VAR_0, u8 VAR_1)
{
 switch (VAR_0) {
 case 7:
 case 8:
 case 9:
  if (VAR_1 < 1 || VAR_1 > 13)
   return -1;
  return 2407 + 5 * VAR_1;
 case 1:
 case 2:
 case 4:
 case 5:
  if (VAR_1 < 36 || VAR_1 > 64)
   return -1;
  return 5000 + 5 * VAR_1;
 case 3:
 case 6:
  if (VAR_1 < 149 || VAR_1 > 165)
   return -1;
  return 5000 + 5 * VAR_1;
 }
 return -1;
}
