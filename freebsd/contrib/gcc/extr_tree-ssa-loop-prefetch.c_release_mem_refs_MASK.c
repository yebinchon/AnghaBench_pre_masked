
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref_group {struct mem_ref_group* next; struct mem_ref_group* refs; } ;
struct mem_ref {struct mem_ref* next; struct mem_ref* refs; } ;


 int FUNC_0 (struct mem_ref_group*) ;

__attribute__((used)) static void
FUNC_1 (struct mem_ref_group *VAR_0)
{
  struct mem_ref_group *VAR_1;
  struct mem_ref *VAR_2, *VAR_3;

  for (; VAR_0; VAR_0 = VAR_1)
    {
      VAR_1 = VAR_0->next;
      for (VAR_2 = VAR_0->refs; VAR_2; VAR_2 = VAR_3)
 {
   VAR_3 = VAR_2->next;
   FUNC_0 (VAR_2);
 }
      FUNC_0 (VAR_0);
    }
}
