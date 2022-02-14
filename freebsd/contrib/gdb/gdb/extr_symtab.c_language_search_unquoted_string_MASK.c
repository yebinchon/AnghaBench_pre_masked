
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ la_language; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static char *
FUNC_1 (char *VAR_2, char *VAR_3)
{
  for (; VAR_3 > VAR_2; --VAR_3)
    {
      if (FUNC_0 (VAR_3[-1]) || VAR_3[-1] == '_' || VAR_3[-1] == '\0')
 continue;
      else
 {
   if (VAR_0->la_language == VAR_1)
     {
       if (VAR_3[-1] == ':')
  continue;
       else if (VAR_3[-1] == '[' && (VAR_3[-2] == '-' || VAR_3[-2] == '+'))
  VAR_3 -= 2;
       else if (VAR_3[-1] == ' ' || VAR_3[-1] == '(' || VAR_3[-1] == ')')
  {
    char *VAR_4 = VAR_3;






    while (VAR_4 > VAR_2)
      if (FUNC_0 (VAR_4[-1]) || VAR_4[-1] == '_' ||
   VAR_4[-1] == ' ' || VAR_4[-1] == ':' ||
   VAR_4[-1] == '(' || VAR_4[-1] == ')')
        --VAR_4;
      else
        break;

    if (VAR_4[-1] == '[' && (VAR_4[-2] == '-' || VAR_4[-2] == '+'))
      VAR_3 = VAR_4 - 2;

  }
     }
   break;
 }
    }
  return VAR_3;
}
