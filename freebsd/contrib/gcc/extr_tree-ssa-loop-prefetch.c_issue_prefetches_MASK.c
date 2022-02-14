
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref_group {struct mem_ref* refs; struct mem_ref_group* next; } ;
struct mem_ref {scalar_t__ issue_prefetch_p; struct mem_ref* next; } ;


 int FUNC_0 (struct mem_ref*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_1 (struct mem_ref_group *VAR_0,
    unsigned VAR_1, unsigned VAR_2)
{
  struct mem_ref *VAR_3;

  for (; VAR_0; VAR_0 = VAR_0->next)
    for (VAR_3 = VAR_0->refs; VAR_3; VAR_3 = VAR_3->next)
      if (VAR_3->issue_prefetch_p)
 FUNC_0 (VAR_3, VAR_1, VAR_2);
}
