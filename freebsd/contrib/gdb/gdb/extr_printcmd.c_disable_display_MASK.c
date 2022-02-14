
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int number; scalar_t__ enabled_p; struct display* next; } ;


 struct display* VAR_0 ;
 int FUNC_0 (char*,int) ;

void
FUNC_1 (int VAR_1)
{
  struct display *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    if (VAR_2->number == VAR_1)
      {
 VAR_2->enabled_p = 0;
 return;
      }
  FUNC_0 ("No display number %d.\n", VAR_1);
}
