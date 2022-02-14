
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

uint32_t
FUNC_1(uint32_t VAR_0)
{
 int VAR_1;





 for (VAR_1 = 31; VAR_1 > 0; VAR_1--)
  if ((1 << VAR_1) & VAR_0)
   break;
 if (~(1 << VAR_1) & VAR_0)
  VAR_1++;

 return(FUNC_0(VAR_1));
}
