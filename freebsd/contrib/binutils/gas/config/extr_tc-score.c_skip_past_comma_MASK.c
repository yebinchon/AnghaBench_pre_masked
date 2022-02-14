
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* error; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int
FUNC_0 (char **VAR_4)
{
  char *VAR_5 = *VAR_4;
  char VAR_6;
  int VAR_7 = 0;

  while ((VAR_6 = *VAR_5) == ' ' || VAR_6 == ',')
    {
      VAR_5++;
      if (VAR_6 == ',' && VAR_7++)
        {
          VAR_3.error = VAR_0;
          return (int) VAR_1;
        }
    }

  if ((VAR_6 == '\0') || (VAR_7 == 0))
    {
      VAR_3.error = VAR_0;
      return (int) VAR_1;
    }

  *VAR_4 = VAR_5;
  return VAR_7 ? VAR_2 : (int) VAR_1;
}
