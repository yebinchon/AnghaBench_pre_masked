
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {struct display* next; struct display* exp; } ;


 struct display* VAR_0 ;
 int FUNC_0 (struct display*) ;

void
FUNC_1 (void)
{
  struct display *VAR_1;

  while ((VAR_1 = VAR_0) != ((void*)0))
    {
      FUNC_0 (VAR_1->exp);
      VAR_0 = VAR_1->next;
      FUNC_0 (VAR_1);
    }
}
