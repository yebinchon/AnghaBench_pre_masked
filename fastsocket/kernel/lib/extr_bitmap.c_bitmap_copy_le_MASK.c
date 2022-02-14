
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long const) ;
 unsigned long FUNC_1 (unsigned long const) ;

void FUNC_2(void *VAR_1, const unsigned long *VAR_2, int VAR_3)
{
 unsigned long *VAR_4 = VAR_1;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3/VAR_0; VAR_5++) {
  if (VAR_0 == 64)
   VAR_4[VAR_5] = FUNC_1(VAR_2[VAR_5]);
  else
   VAR_4[VAR_5] = FUNC_0(VAR_2[VAR_5]);
 }
}
