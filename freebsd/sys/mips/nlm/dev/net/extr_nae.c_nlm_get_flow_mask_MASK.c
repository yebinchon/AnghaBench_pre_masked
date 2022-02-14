
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(int VAR_0)
{
 const int VAR_1 = 5;
 int VAR_2;



 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0 <= (2 << VAR_2))
   return (VAR_2 + 1);
 }
 return (VAR_1);
}
