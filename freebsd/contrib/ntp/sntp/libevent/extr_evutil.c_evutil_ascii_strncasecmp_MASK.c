
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int ) ;

int FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 char VAR_3, VAR_4;
 while (VAR_2--) {
  VAR_3 = FUNC_0(*VAR_0++);
  VAR_4 = FUNC_0(*VAR_1++);
  if (VAR_3 < VAR_4)
   return -1;
  else if (VAR_3 > VAR_4)
   return 1;
  else if (VAR_3 == 0)
   return 0;
 }
 return 0;
}
