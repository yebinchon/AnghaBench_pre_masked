
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;
struct symbol_stack_entry {struct symbol_stack_entry* next; int * value; } ;


 int FUNC_0 (int *,struct symbol_stack_entry*) ;
 struct symbol_stack_entry* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static symbol *
FUNC_1 (void)
{
  struct symbol_stack_entry *VAR_2 = VAR_0;
  symbol *VAR_3;
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  VAR_3 = VAR_2->value;
  VAR_0 = VAR_2->next;
  FUNC_0 (&VAR_1, VAR_2);
  return VAR_3;
}
