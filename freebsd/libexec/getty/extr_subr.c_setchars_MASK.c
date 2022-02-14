
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char*** VAR_1 ;
 char** VAR_2 ;

void
FUNC_0(void)
{
 int VAR_3;
 const char *VAR_4;

 for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++) {
  VAR_4 = *VAR_1[VAR_3];
  if (VAR_4 && *VAR_4)
   *VAR_2[VAR_3] = *VAR_4;
  else
   *VAR_2[VAR_3] = VAR_0;
 }
}
