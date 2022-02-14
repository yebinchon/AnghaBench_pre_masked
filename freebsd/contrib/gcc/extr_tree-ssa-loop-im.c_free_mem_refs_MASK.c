
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref {struct mem_ref* next; } ;


 int FUNC_0 (struct mem_ref*) ;

__attribute__((used)) static void
FUNC_1 (struct mem_ref *VAR_0)
{
  struct mem_ref *VAR_1, *VAR_2;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_2)
    {
      VAR_2 = VAR_1->next;
      FUNC_0 (VAR_1);
    }
}
