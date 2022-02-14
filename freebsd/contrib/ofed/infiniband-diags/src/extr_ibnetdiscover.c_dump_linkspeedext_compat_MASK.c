
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 char* FUNC_0 (int) ;

char *FUNC_1(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 switch (VAR_1) {
 case 0:
  if (VAR_3 & VAR_0)
   return ("FDR10");
  else
   return FUNC_0(VAR_2);
  break;
 case 1:
  return ("FDR");
  break;
 case 2:
  return ("EDR");
  break;
 }
 return ("???");
}
