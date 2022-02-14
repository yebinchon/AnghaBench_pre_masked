
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (char const*,char**,int) ;

int
FUNC_1(const char *VAR_1, uint16_t *VAR_2)
{
 unsigned long VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_4, 10);
 if (VAR_3 > VAR_0 || *VAR_4 != '\0')
  return (0);
 *VAR_2 = (uint16_t)VAR_3;
 return (1);
}
