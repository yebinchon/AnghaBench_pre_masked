
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* part1; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *
FUNC_6 (int VAR_2, const char **VAR_3)
{
  int VAR_4, VAR_5;
  size_t VAR_6;
  const char *VAR_7 = ((void*)0);
  int VAR_8 = 1, VAR_9;
  bool VAR_10;

  if (VAR_2 < 3)
    FUNC_3 ("too few arguments to %%:version-compare");
  if (VAR_3[0][0] == '\0')
    FUNC_0 ();
  if ((VAR_3[0][1] == '<' || VAR_3[0][1] == '>') && VAR_3[0][0] != '!')
    VAR_8 = 2;
  if (VAR_2 != VAR_8 + 3)
    FUNC_3 ("too many arguments to %%:version-compare");

  VAR_6 = FUNC_4 (VAR_3[VAR_8 + 1]);
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    if (!FUNC_5 (VAR_1[VAR_9].part1, VAR_3[VAR_8 + 1], VAR_6)
 && FUNC_1 (VAR_9, VAR_6))
      VAR_7 = VAR_1[VAR_9].part1 + VAR_6;

  if (VAR_7 == ((void*)0))
    VAR_4 = VAR_5 = -1;
  else
    {
      VAR_4 = FUNC_2 (VAR_7, VAR_3[1]);
      if (VAR_8 == 2)
 VAR_5 = FUNC_2 (VAR_7, VAR_3[2]);
      else
 VAR_5 = -1;
    }

  switch (VAR_3[0][0] << 8 | VAR_3[0][1])
    {
    case '>' << 8 | '=':
      VAR_10 = VAR_4 >= 0;
      break;
    case '!' << 8 | '<':
      VAR_10 = VAR_4 >= 0 || VAR_7 == ((void*)0);
      break;
    case '<' << 8:
      VAR_10 = VAR_4 < 0;
      break;
    case '!' << 8 | '>':
      VAR_10 = VAR_4 < 0 || VAR_7 == ((void*)0);
      break;
    case '>' << 8 | '<':
      VAR_10 = VAR_4 >= 0 && VAR_5 < 0;
      break;
    case '<' << 8 | '>':
      VAR_10 = VAR_4 < 0 || VAR_5 >= 0;
      break;

    default:
      FUNC_3 ("unknown operator '%s' in %%:version-compare", VAR_3[0]);
    }
  if (! VAR_10)
    return ((void*)0);

  return VAR_3[VAR_8 + 2];
}
