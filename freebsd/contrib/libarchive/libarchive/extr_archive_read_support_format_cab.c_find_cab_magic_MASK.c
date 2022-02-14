
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 switch (VAR_0[4]) {
 case 0:







  if (FUNC_0(VAR_0, "MSCF\0\0\0\0", 8) == 0)
   return 0;
  return 5;
 case 'F': return 1;
 case 'C': return 2;
 case 'S': return 3;
 case 'M': return 4;
 default: return 5;
 }
}
