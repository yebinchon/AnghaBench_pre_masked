
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_write_handle {struct stab_type_stack* type_stack; } ;
struct stab_type_stack {long index; unsigned int size; struct stab_type_stack* next; int * vtable; int * methods; int * baseclasses; int * fields; int definition; int string; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct stab_write_handle *VAR_1, const char *VAR_2,
    long VAR_3, bfd_boolean VAR_4, unsigned int VAR_5)
{
  struct stab_type_stack *VAR_6;

  VAR_6 = (struct stab_type_stack *) FUNC_0 (sizeof *VAR_6);
  VAR_6->string = FUNC_1 (VAR_2);
  VAR_6->index = VAR_3;
  VAR_6->definition = VAR_4;
  VAR_6->size = VAR_5;

  VAR_6->fields = ((void*)0);
  VAR_6->baseclasses = ((void*)0);
  VAR_6->methods = ((void*)0);
  VAR_6->vtable = ((void*)0);

  VAR_6->next = VAR_1->type_stack;
  VAR_1->type_stack = VAR_6;

  return VAR_0;
}
