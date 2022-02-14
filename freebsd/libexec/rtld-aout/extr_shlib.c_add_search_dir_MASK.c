
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char**,int) ;

void
FUNC_3(const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_0(VAR_1[VAR_3], VAR_2) == 0)
   return;
 VAR_0++;
 VAR_1 = (char **)
  FUNC_2(VAR_1, VAR_0 * sizeof VAR_1[0]);
 VAR_1[VAR_0 - 1] = FUNC_1(VAR_2);
}
