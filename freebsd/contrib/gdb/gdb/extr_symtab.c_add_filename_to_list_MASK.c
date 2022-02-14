
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6 (const char *VAR_0, char *VAR_1, char *VAR_2,
        char ***VAR_3, int *VAR_4, int *VAR_5)
{
  char *VAR_6;
  size_t VAR_7 = FUNC_2 (VAR_0);

  if (*VAR_4 + 1 >= *VAR_5)
    {
      *VAR_5 *= 2;
      *VAR_3 = (char **) FUNC_5 ((char *) *VAR_3,
      *VAR_5 * sizeof (char *));
    }

  if (VAR_2 == VAR_1)
    {

      VAR_6 = FUNC_4 (VAR_7 + 5);
      FUNC_1 (VAR_6, VAR_0);
    }
  else if (VAR_2 > VAR_1)
    {

      VAR_6 = FUNC_4 (VAR_7 + 5);
      FUNC_1 (VAR_6, VAR_0 + (VAR_2 - VAR_1));
    }
  else
    {

      VAR_6 = FUNC_4 (VAR_7 + (VAR_1 - VAR_2) + 5);
      FUNC_3 (VAR_6, VAR_2, VAR_1 - VAR_2);
      VAR_6[VAR_1 - VAR_2] = '\0';
      FUNC_0 (VAR_6, VAR_0);
    }
  (*VAR_3)[*VAR_4] = VAR_6;
  (*VAR_3)[++*VAR_4] = ((void*)0);
}
