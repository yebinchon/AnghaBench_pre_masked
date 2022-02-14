
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref_group {struct mem_ref_group* next; } ;


 int FUNC_0 (struct mem_ref_group*) ;

__attribute__((used)) static void
FUNC_1 (struct mem_ref_group *VAR_0)
{
  for (; VAR_0; VAR_0 = VAR_0->next)
    FUNC_0 (VAR_0);
}
