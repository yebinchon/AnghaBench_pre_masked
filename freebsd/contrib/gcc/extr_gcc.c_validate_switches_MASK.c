
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* part1; int validated; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__*,char const*,size_t) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *
FUNC_3 (const char *VAR_2)
{
  const char *VAR_3 = VAR_2;
  const char *VAR_4;
  size_t VAR_5;
  int VAR_6;
  bool VAR_7 = 0;
  bool VAR_8 = 0;



next_member:
  do { while (*VAR_3 == ' ' || *VAR_3 == '\t') VAR_3++; } while (0);

  if (*VAR_3 == '!')
    VAR_3++;

  do { while (*VAR_3 == ' ' || *VAR_3 == '\t') VAR_3++; } while (0);
  if (*VAR_3 == '.')
    VAR_7 = 1, VAR_3++;

  VAR_4 = VAR_3;
  while (FUNC_0 (*VAR_3) || *VAR_3 == '-' || *VAR_3 == '+' || *VAR_3 == '='
  || *VAR_3 == ',' || *VAR_3 == '.' || *VAR_3 == '@')
    VAR_3++;
  VAR_5 = VAR_3 - VAR_4;

  if (*VAR_3 == '*')
    VAR_8 = 1, VAR_3++;

  do { while (*VAR_3 == ' ' || *VAR_3 == '\t') VAR_3++; } while (0);

  if (!VAR_7)
    {

      for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
 if (!FUNC_2 (VAR_1[VAR_6].part1, VAR_4, VAR_5)
     && (VAR_8 || VAR_1[VAR_6].part1[VAR_5] == 0))
   VAR_1[VAR_6].validated = 1;
    }

  if (*VAR_3) VAR_3++;
  if (*VAR_3 && (VAR_3[-1] == '|' || VAR_3[-1] == '&'))
    goto next_member;

  if (*VAR_3 && VAR_3[-1] == ':')
    {
      while (*VAR_3 && *VAR_3 != ';' && *VAR_3 != '}')
 {
   if (*VAR_3 == '%')
     {
       VAR_3++;
       if (*VAR_3 == '{' || *VAR_3 == '<')
  VAR_3 = FUNC_3 (VAR_3+1);
       else if (VAR_3[0] == 'W' && VAR_3[1] == '{')
  VAR_3 = FUNC_3 (VAR_3+2);
     }
   else
     VAR_3++;
 }

      if (*VAR_3) VAR_3++;
      if (*VAR_3 && VAR_3[-1] == ';')
 goto next_member;
    }

  return VAR_3;

}
