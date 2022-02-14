
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static unsigned int
FUNC_2(const char *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = 0;
 int VAR_4 = 0;
 if (FUNC_1(VAR_1) < 4)
  return VAR_0;
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  VAR_3 *= 64;
  if (VAR_1[VAR_2] == '=')
   VAR_4++;
  else if (VAR_4 > 0)
   return VAR_0;
  else
   VAR_3 += FUNC_0(VAR_1[VAR_2]);
 }
 if (VAR_4 > 2)
  return VAR_0;
 return (VAR_4 << 24) | VAR_3;
}
