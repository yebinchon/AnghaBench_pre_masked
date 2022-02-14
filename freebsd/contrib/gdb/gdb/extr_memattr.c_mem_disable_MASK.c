
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_region {int number; scalar_t__ enabled_p; struct mem_region* next; } ;


 struct mem_region* VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1 (int VAR_1)
{
  struct mem_region *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    if (VAR_2->number == VAR_1)
      {
 VAR_2->enabled_p = 0;
 return;
      }
  FUNC_0 ("No memory region number %d.\n", VAR_1);
}
