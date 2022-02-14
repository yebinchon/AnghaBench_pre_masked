
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 scalar_t__ FUNC_0 (int ,char* const) ;
 int VAR_1 ;

int
FUNC_1(char * const *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   if (FUNC_0(VAR_0[VAR_4], VAR_2[VAR_5]))
    return 1;
 return 0;
}
