
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,char const) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, const char *VAR_2)
{
 while (VAR_1 < VAR_2) {
  if (FUNC_0(*VAR_1) ||
      FUNC_2(VAR_0, *VAR_1) ||
      *VAR_1 == ':')
   ++VAR_1;
  else if (*VAR_1 == '%' && VAR_1+2 < VAR_2 &&
      FUNC_1(VAR_1[1]) &&
      FUNC_1(VAR_1[2]))
   VAR_1 += 3;
  else
   return 0;
 }
 return 1;
}
