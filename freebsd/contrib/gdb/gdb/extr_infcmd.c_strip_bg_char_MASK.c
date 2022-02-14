
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2 (char **VAR_0)
{
  char *VAR_1 = ((void*)0);

  VAR_1 = FUNC_0 (*VAR_0, '&');

  if (VAR_1)
    {
      if (VAR_1 == (*VAR_0 + FUNC_1 (*VAR_0) - 1))
 {
   if (FUNC_1 (*VAR_0) > 1)
     {
       do
  VAR_1--;
       while (*VAR_1 == ' ' || *VAR_1 == '\t');
       *(VAR_1 + 1) = '\0';
     }
   else
     *VAR_0 = 0;
   return 1;
 }
    }
  return 0;
}
