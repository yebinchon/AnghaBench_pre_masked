
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0)
{
 char *VAR_1, *VAR_2;


 while ((VAR_1 = FUNC_0(VAR_0, "/./")) != ((void*)0)) {
  for (VAR_2 = VAR_1; VAR_2 > VAR_0 && VAR_2[-1] == '/'; VAR_2--)
   ;
  VAR_1 += 2;
  while (*VAR_1)
   *++VAR_2 = *++VAR_1;
 }


 while ((VAR_1 = FUNC_0(VAR_0, "/../")) != ((void*)0)) {
  if (VAR_1 == VAR_0)
   break;
  for (VAR_2 = VAR_1; VAR_2 > VAR_0 && VAR_2[-1] == '/'; VAR_2--)
   ;
  for (VAR_2--; VAR_2 >= VAR_0; VAR_2--)
   if (*VAR_2 == '/')
    break;
  if (VAR_2 < VAR_0)
   break;
  VAR_1 += 3;
  while (*VAR_1)
   *++VAR_2 = *++VAR_1;
 }
}
