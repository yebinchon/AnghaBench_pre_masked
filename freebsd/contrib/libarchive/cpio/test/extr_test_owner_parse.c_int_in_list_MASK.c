
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, const int *VAR_1, size_t VAR_2)
{
 while (VAR_2-- > 0)
  if (*VAR_1++ == VAR_0)
   return (1);
 FUNC_0("%d", VAR_0);
 return (0);
}
