
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {struct stab_type_stack* type_stack; } ;
struct stab_type_stack {char* string; struct stab_type_stack* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct stab_type_stack*) ;

__attribute__((used)) static char *
FUNC_2 (struct stab_write_handle *VAR_0)
{
  struct stab_type_stack *VAR_1;
  char *VAR_2;

  VAR_1 = VAR_0->type_stack;
  FUNC_0 (VAR_1 != ((void*)0));

  VAR_0->type_stack = VAR_1->next;

  VAR_2 = VAR_1->string;

  FUNC_1 (VAR_1);

  return VAR_2;
}
