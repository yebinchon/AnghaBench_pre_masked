
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;
struct symbol_stack_entry {struct symbol_stack_entry* next; int * value; } ;


 struct symbol_stack_entry* FUNC_0 (int *,int) ;
 struct symbol_stack_entry* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1 (symbol *VAR_2)
{
  struct symbol_stack_entry *VAR_3 = FUNC_0
    (&VAR_1, sizeof (struct symbol_stack_entry));
  VAR_3->value = VAR_2;
  VAR_3->next = VAR_0;
  VAR_0 = VAR_3;
}
