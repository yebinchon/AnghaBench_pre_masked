
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct function_info {void* visit1; void* non_root; struct call_info* call_list; } ;
struct call_info {struct function_info* fun; struct call_info* next; } ;


 void* VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct function_info *VAR_1)
{
  struct call_info *VAR_2;

  VAR_1->visit1 = VAR_0;
  for (VAR_2 = VAR_1->call_list; VAR_2; VAR_2 = VAR_2->next)
    {
      VAR_2->fun->non_root = VAR_0;
      if (!VAR_2->fun->visit1)
 FUNC_0 (VAR_2->fun);
    }
}
