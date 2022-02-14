
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;

void
FUNC_0(void)
{
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return;

 VAR_1 = (VAR_1 + 1) % VAR_0;
 VAR_2[VAR_1] = 1e9;
 VAR_3 = 1e9;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2[VAR_4] < VAR_3)
   VAR_3 = VAR_2[VAR_4];
 }
}
