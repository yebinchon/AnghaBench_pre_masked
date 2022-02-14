
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int enabled_p; int number; struct display* next; } ;


 int FUNC_0 (char*) ;
 struct display* VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_1, int VAR_2)
{
  char *VAR_3 = VAR_1;
  char *VAR_4;
  int VAR_5;
  struct display *VAR_6;

  if (VAR_3 == 0)
    {
      for (VAR_6 = VAR_0; VAR_6; VAR_6 = VAR_6->next)
 VAR_6->enabled_p = 1;
    }
  else
    while (*VAR_3)
      {
 VAR_4 = VAR_3;
 while (*VAR_4 >= '0' && *VAR_4 <= '9')
   VAR_4++;
 if (*VAR_4 && *VAR_4 != ' ' && *VAR_4 != '\t')
   FUNC_1 ("Arguments must be display numbers.");

 VAR_5 = FUNC_0 (VAR_3);

 for (VAR_6 = VAR_0; VAR_6; VAR_6 = VAR_6->next)
   if (VAR_6->number == VAR_5)
     {
       VAR_6->enabled_p = 1;
       goto win;
     }
 FUNC_2 ("No display number %d.\n", VAR_5);
      win:
 VAR_3 = VAR_4;
 while (*VAR_3 == ' ' || *VAR_3 == '\t')
   VAR_3++;
      }
}
