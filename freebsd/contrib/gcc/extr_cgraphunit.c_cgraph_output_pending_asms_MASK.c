
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_asm_node {int asm_str; struct cgraph_asm_node* next; } ;


 int FUNC_0 (int ) ;
 struct cgraph_asm_node* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  struct cgraph_asm_node *VAR_3;

  if (VAR_1 || VAR_2)
    return;

  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
    FUNC_0 (VAR_3->asm_str);
  VAR_0 = ((void*)0);
}
