
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_32_t ;



u_32_t
FUNC_0()
{
 static unsigned int VAR_0 = 0xa5a5a5a5;
 static int VAR_1 = 0;
 int VAR_2;

 VAR_1++;





 switch (VAR_1)
 {
 case 1 :
  VAR_2 = 0;
  break;
 case 2 :
  VAR_2 = 4;
  break;
 case 3 :
  VAR_2 = 3999;
  break;
 case 4 :
  VAR_2 = 4000;
  break;
 case 5 :
  VAR_2 = 48999;
  break;
 case 6 :
  VAR_2 = 49000;
  break;
 default :
  VAR_2 = VAR_0;
  VAR_0 *= VAR_1;
  VAR_0++;
  VAR_2 ^= VAR_0;
  break;
 }
 return VAR_2;
}
