
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 char* FUNC_0 (struct type*) ;
 int FUNC_1 (char) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,int) ;

__attribute__((used)) static char *
FUNC_6 (struct type *VAR_2)
{
  if (FUNC_0 (VAR_2) == ((void*)0))
    return ((void*)0);
  else
    {
      char *VAR_3 = FUNC_0 (VAR_2);
      char *VAR_4, *VAR_5;

      if (VAR_0 == ((void*)0) || VAR_1 <= FUNC_3 (VAR_3))
 {
   VAR_1 = 16 + 2 * FUNC_3 (VAR_3);
   VAR_0 = FUNC_5 (VAR_0, VAR_1);
 }
      FUNC_2 (VAR_0, VAR_3);

      VAR_4 = (char *) FUNC_4 (VAR_0, "___");
      if (VAR_4 != ((void*)0))
 *VAR_4 = '\0';

      VAR_4 = VAR_0 + FUNC_3 (VAR_0) - 1;
      while (VAR_4 > VAR_0 && (VAR_4[0] != '_' || VAR_4[-1] != '_'))
 VAR_4 -= 1;

      if (VAR_4 == VAR_0)
 return VAR_0;

      if (!FUNC_1 (VAR_4[1]))
 return ((void*)0);

      for (VAR_4 = VAR_5 = VAR_0; *VAR_4 != '\0'; VAR_5 += 1)
 {
   if (VAR_4[0] == '_' && VAR_4[1] == '_')
     {
       *VAR_5 = '.';
       VAR_4 += 2;
     }
   else
     {
       *VAR_5 = *VAR_4;
       VAR_4 += 1;
     }
 }
      *VAR_5 = '\0';
      return VAR_0;
    }
}
