
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float32 ;



int
FUNC_0(float32 VAR_0, float32 VAR_1)
{
 int VAR_2 = 0;


 if ((VAR_0 << 1) > 0xff000000u) {

  if ((VAR_0 & 0x00400000u) == 0)
   return (0);

  VAR_2 = 1;
 }


 if ((VAR_1 << 1) > 0xff000000u) {

  if ((VAR_1 & 0x00400000u) == 0)
   return (0);

  VAR_2 = 1;
 }

 return (VAR_2);
}
