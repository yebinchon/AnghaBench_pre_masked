
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {scalar_t__ enabled_p; struct display* next; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct display* VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_1, int VAR_2)
{
  char *VAR_3 = VAR_1;
  char *VAR_4;
  struct display *VAR_5;

  if (VAR_3 == 0)
    {
      for (VAR_5 = VAR_0; VAR_5; VAR_5 = VAR_5->next)
 VAR_5->enabled_p = 0;
    }
  else
    while (*VAR_3)
      {
 VAR_4 = VAR_3;
 while (*VAR_4 >= '0' && *VAR_4 <= '9')
   VAR_4++;
 if (*VAR_4 && *VAR_4 != ' ' && *VAR_4 != '\t')
   FUNC_2 ("Arguments must be display numbers.");

 FUNC_1 (FUNC_0 (VAR_3));

 VAR_3 = VAR_4;
 while (*VAR_3 == ' ' || *VAR_3 == '\t')
   VAR_3++;
      }
}
