
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {int number; struct display* next; } ;


 struct display* VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct display*) ;

__attribute__((used)) static void
FUNC_2 (int VAR_1)
{
  struct display *VAR_2, *VAR_3;

  if (!VAR_0)
    FUNC_0 ("No display number %d.", VAR_1);

  if (VAR_0->number == VAR_1)
    {
      VAR_2 = VAR_0;
      VAR_0 = VAR_2->next;
      FUNC_1 (VAR_2);
    }
  else
    for (VAR_3 = VAR_0;; VAR_3 = VAR_3->next)
      {
 if (VAR_3->next == 0)
   FUNC_0 ("No display number %d.", VAR_1);
 if (VAR_3->next->number == VAR_1)
   {
     VAR_2 = VAR_3->next;
     VAR_3->next = VAR_2->next;
     FUNC_1 (VAR_2);
     break;
   }
      }
}
