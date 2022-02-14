
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_region {struct mem_region* next; } ;


 int FUNC_0 (struct mem_region*) ;
 struct mem_region* VAR_0 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct mem_region *VAR_1;

  while ((VAR_1 = VAR_0) != 0)
    {
      VAR_0 = VAR_1->next;
      FUNC_0 (VAR_1);
    }
}
