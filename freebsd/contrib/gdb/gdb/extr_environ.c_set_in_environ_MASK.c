
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct environ {char** vector; int allocated; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*,int) ;

void
FUNC_7 (struct environ *VAR_0, const char *VAR_1, const char *VAR_2)
{
  int VAR_3;
  int VAR_4 = FUNC_2 (VAR_1);
  char **VAR_5 = VAR_0->vector;
  char *VAR_6;

  for (VAR_3 = 0; (VAR_6 = VAR_5[VAR_3]) != ((void*)0); VAR_3++)
    if (FUNC_3 (VAR_6, VAR_1, VAR_4) == 0 && VAR_6[VAR_4] == '=')
      break;

  if (VAR_6 == 0)
    {
      if (VAR_3 == VAR_0->allocated)
 {
   VAR_0->allocated += 10;
   VAR_5 = (char **) FUNC_6 ((char *) VAR_5,
           (VAR_0->allocated + 1) * sizeof (char *));
   VAR_0->vector = VAR_5;
 }
      VAR_5[VAR_3 + 1] = 0;
    }
  else
    FUNC_4 (VAR_6);

  VAR_6 = (char *) FUNC_5 (VAR_4 + FUNC_2 (VAR_2) + 2);
  FUNC_1 (VAR_6, VAR_1);
  FUNC_0 (VAR_6, "=");
  FUNC_0 (VAR_6, VAR_2);
  VAR_5[VAR_3] = VAR_6;
  return;
}
