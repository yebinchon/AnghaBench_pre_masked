
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (char*,size_t,char*,int) ;

int
FUNC_1(char *VAR_0, size_t VAR_1, uint16_t VAR_2)
{

 if (VAR_2 >= 0x4000 && VAR_2 <= 0x9C3F)
  return (FUNC_0(VAR_0, VAR_1, "BCM%hX", VAR_2));
 else
  return (FUNC_0(VAR_0, VAR_1, "BCM%hu", VAR_2));
}
