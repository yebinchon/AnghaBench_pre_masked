
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ live_cond; char* part1; char** args; int validated; } ;


 int FUNC_0 (char const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*,int,int *) ;
 unsigned int FUNC_2 (char const*) ;
 char* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_3 (int VAR_3, int VAR_4)
{
  if (VAR_2[VAR_3].live_cond == VAR_0)
    return;

  if (!VAR_4)
    {
      FUNC_1 ("-", 0, ((void*)0));
      FUNC_1 (VAR_2[VAR_3].part1, 1, ((void*)0));
    }

  if (VAR_2[VAR_3].args != 0)
    {
      const char **VAR_5;
      for (VAR_5 = VAR_2[VAR_3].args; *VAR_5; VAR_5++)
 {
   const char *VAR_6 = *VAR_5;

   FUNC_1 (" ", 0, ((void*)0));
   if (VAR_1)
     {
       unsigned VAR_7 = FUNC_2 (VAR_6);
       int VAR_8 = 0;

       while (VAR_7-- && !FUNC_0 (VAR_6[VAR_7]))
  if (VAR_6[VAR_7] == '.')
    {
      ((char *)VAR_6)[VAR_7] = 0;
      VAR_8 = 1;
      break;
    }
       FUNC_1 (VAR_6, 1, ((void*)0));
       if (VAR_8)
  ((char *)VAR_6)[VAR_7] = '.';
       FUNC_1 (VAR_1, 1, ((void*)0));
     }
   else
     FUNC_1 (VAR_6, 1, ((void*)0));
 }
    }

  FUNC_1 (" ", 0, ((void*)0));
  VAR_2[VAR_3].validated = 1;
}
