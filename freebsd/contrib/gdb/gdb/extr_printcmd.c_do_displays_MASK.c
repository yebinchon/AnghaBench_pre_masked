
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {struct display* next; } ;


 struct display* VAR_0 ;
 int FUNC_0 (struct display*) ;

void
FUNC_1 (void)
{
  struct display *VAR_1;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    FUNC_0 (VAR_1);
}
