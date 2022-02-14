
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5 (char *VAR_0, char *VAR_1)
{
  if (VAR_1 == ((void*)0))
    return 0;
  else if (VAR_0 == ((void*)0))
    return 1;
  else
    {
      int VAR_2, VAR_3;
      for (VAR_2 = FUNC_4 (VAR_0) - 1; VAR_2 > 0 && FUNC_2 (VAR_0[VAR_2]); VAR_2 -= 1)
 ;
      for (VAR_3 = FUNC_4 (VAR_1) - 1; VAR_3 > 0 && FUNC_2 (VAR_1[VAR_3]); VAR_3 -= 1)
 ;
      if ((VAR_0[VAR_2] == '_' || VAR_0[VAR_2] == '$') && VAR_0[VAR_2 + 1] != '\000'
   && (VAR_1[VAR_3] == '_' || VAR_1[VAR_3] == '$') && VAR_1[VAR_3 + 1] != '\000')
 {
   int VAR_4, VAR_5;
   VAR_4 = VAR_2;
   while (VAR_0[VAR_4] == '_' && VAR_4 > 0 && VAR_0[VAR_4 - 1] == '_')
     VAR_4 -= 1;
   VAR_5 = VAR_3;
   while (VAR_1[VAR_5] == '_' && VAR_5 > 0 && VAR_1[VAR_5 - 1] == '_')
     VAR_5 -= 1;
   if (VAR_4 == VAR_5 && FUNC_0 (VAR_0, VAR_1, VAR_4))
     return (FUNC_1 (VAR_0 + VAR_2 + 1) < FUNC_1 (VAR_1 + VAR_3 + 1));
 }
      return (FUNC_3 (VAR_0, VAR_1) < 0);
    }
}
