
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_1, int *VAR_2)
{
 char *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 for (VAR_3 = VAR_0[0], VAR_5 = 0; VAR_3 != ((void*)0); VAR_3 = VAR_0[++VAR_5]) {
  if ((FUNC_1(VAR_3, VAR_1, VAR_4) == 0) &&
      (VAR_3[VAR_4] == '=')) {
   if (VAR_2 != ((void*)0))
    *VAR_2 = VAR_5;
   return (VAR_3 + VAR_4 + 1);
  }
 }
 return (((void*)0));
}
