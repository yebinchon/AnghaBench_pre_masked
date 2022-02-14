
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 double FUNC_2 (char*) ;

double
FUNC_3 (char *VAR_0, char **VAR_1)
{
  char *VAR_2;

  if (VAR_1 == (char **)0)
    return FUNC_2 (VAR_0);

  VAR_2 = VAR_0;

  while (FUNC_1 (*VAR_2))
    ++VAR_2;

  if (*VAR_2 == '+' || *VAR_2 == '-')
    ++VAR_2;


  if ((VAR_2[0] == 'i' || VAR_2[0] == 'I')
      && (VAR_2[1] == 'n' || VAR_2[1] == 'N')
      && (VAR_2[2] == 'f' || VAR_2[2] == 'F'))
    {
      if ((VAR_2[3] == 'i' || VAR_2[3] == 'I')
   && (VAR_2[4] == 'n' || VAR_2[4] == 'N')
   && (VAR_2[5] == 'i' || VAR_2[5] == 'I')
   && (VAR_2[6] == 't' || VAR_2[6] == 'T')
   && (VAR_2[7] == 'y' || VAR_2[7] == 'Y'))
 {
   *VAR_1 = VAR_2 + 8;
   return FUNC_2 (VAR_0);
 }
      else
 {
   *VAR_1 = VAR_2 + 3;
   return FUNC_2 (VAR_0);
 }
    }


  if ((VAR_2[0] == 'n' || VAR_2[0] == 'N')
      && (VAR_2[1] == 'a' || VAR_2[1] == 'A')
      && (VAR_2[2] == 'n' || VAR_2[2] == 'N'))
    {
      VAR_2 += 3;
      if (*VAR_2 == '(')
 {
   ++VAR_2;
   while (*VAR_2 != '\0' && *VAR_2 != ')')
     ++VAR_2;
   if (*VAR_2 == ')')
     ++VAR_2;
 }
      *VAR_1 = VAR_2;
      return FUNC_2 (VAR_0);
    }


  if (FUNC_0 (*VAR_2) || *VAR_2 == '.')
    {
      int VAR_3 = 0;
      while (FUNC_0 (*VAR_2) || (!VAR_3 && *VAR_2 == '.'))
 {
   if (*VAR_2 == '.')
     VAR_3 = 1;
   ++VAR_2;
 }


      if (*VAR_2 == 'e' || *VAR_2 == 'E')
 {
   int VAR_4;
   VAR_4 = 1;
   if (VAR_2[VAR_4] == '+' || VAR_2[VAR_4] == '-')
     ++VAR_4;
   if (FUNC_0 (VAR_2[VAR_4]))
     {
       while (FUNC_0 (VAR_2[VAR_4]))
  ++VAR_4;
       *VAR_1 = VAR_2 + VAR_4;
       return FUNC_2 (VAR_0);
     }
 }
      *VAR_1 = VAR_2;
      return FUNC_2 (VAR_0);
    }

  *VAR_1 = VAR_0;
  return 0.0;
}
