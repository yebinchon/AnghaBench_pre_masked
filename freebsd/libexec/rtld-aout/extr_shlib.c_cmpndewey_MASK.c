
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;

int
FUNC_1(int VAR_0[], int VAR_1, int VAR_2[], int VAR_3)
{
 register int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1 && VAR_4 < VAR_3; VAR_4++) {
  if (VAR_0[VAR_4] < VAR_2[VAR_4])
   return -1;
  if (VAR_0[VAR_4] > VAR_2[VAR_4])
   return 1;
 }

 if (VAR_1 == VAR_3)
  return 0;

 if (VAR_4 == VAR_1)
  return -1;

 if (VAR_4 == VAR_3)
  return 1;

 FUNC_0(1, "cmpndewey: can't happen");
 return 0;
}
