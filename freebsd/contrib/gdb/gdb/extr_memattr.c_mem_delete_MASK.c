
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_region {int number; struct mem_region* next; } ;


 int FUNC_0 (struct mem_region*) ;
 struct mem_region* VAR_0 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2 (int VAR_1)
{
  struct mem_region *VAR_2, *VAR_3;

  if (!VAR_0)
    {
      FUNC_1 ("No memory region number %d.\n", VAR_1);
      return;
    }

  if (VAR_0->number == VAR_1)
    {
      VAR_2 = VAR_0;
      VAR_0 = VAR_2->next;
      FUNC_0 (VAR_2);
    }
  else
    for (VAR_3 = VAR_0; VAR_3->next; VAR_3 = VAR_3->next)
      {
 if (VAR_3->next->number == VAR_1)
   {
     VAR_2 = VAR_3->next;
     VAR_3->next = VAR_2->next;
     FUNC_0 (VAR_2);
     break;
   }
      }
}
