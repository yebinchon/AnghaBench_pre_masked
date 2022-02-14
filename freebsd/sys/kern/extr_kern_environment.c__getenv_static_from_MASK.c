
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3;
 int VAR_4;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = FUNC_0(VAR_2)) {
  for (VAR_3 = VAR_2; (*VAR_3 != '=') && (*VAR_3 != 0); VAR_3++)
   ;
  if (*VAR_3 != '=')
   continue;
  VAR_4 = VAR_3 - VAR_2;
  VAR_3++;
  if (!FUNC_1(VAR_1, VAR_2, VAR_4) && VAR_1[VAR_4] == 0)
   return (VAR_3);
 }
 return (((void*)0));
}
