
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(u_int32_t VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = 0;
 while (VAR_3 < 32) {

  if ((VAR_0 & 0x01) == 0) {
   if (VAR_2 > 1)
    FUNC_0("-%u", VAR_1 + VAR_3 - 1);
   VAR_2 = 0;
   switch (VAR_0 & 0x0f) {
   case 0x00:
    VAR_0 >>= 4;
    VAR_3 += 4;
    continue;
   case 0x08:
    VAR_0 >>= 3;
    VAR_3 += 3;
    continue;
   case 0x04: case 0x0c:
    VAR_0 >>= 2;
    VAR_3 += 2;
    continue;
   default:
    VAR_0 >>= 1;
    VAR_3 += 1;
    continue;
   }
  }


  for (VAR_4 = 0; VAR_4 < 32 - VAR_3; VAR_4++) {
   if ((VAR_0 & (0x01 << VAR_4)) == 0)
    break;
  }
  if (!VAR_2)
   FUNC_0(" %u", VAR_1 + VAR_3);
  VAR_2 += VAR_4;
  VAR_0 >>= VAR_4; VAR_3 += VAR_4;
 }
 return VAR_2;
}
