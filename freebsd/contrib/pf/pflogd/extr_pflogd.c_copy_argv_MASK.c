
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char* const,size_t) ;
 int FUNC_2 (char*,char* const,size_t) ;
 scalar_t__ FUNC_3 (char* const) ;

char *
FUNC_4(char * const *VAR_0)
{
 size_t VAR_1 = 0, VAR_2;
 char *VAR_3;

 if (VAR_0 == ((void*)0))
  return (((void*)0));

 for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
  VAR_1 += FUNC_3(VAR_0[VAR_2])+1;
 if (VAR_1 == 0)
  return (((void*)0));

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 FUNC_2(VAR_3, VAR_0[0], VAR_1);
 for (VAR_2 = 1; VAR_0[VAR_2]; VAR_2++) {
  FUNC_1(VAR_3, " ", VAR_1);
  FUNC_1(VAR_3, VAR_0[VAR_2], VAR_1);
 }
 return (VAR_3);
}
