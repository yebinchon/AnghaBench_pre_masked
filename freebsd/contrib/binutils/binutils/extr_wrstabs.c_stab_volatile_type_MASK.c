
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {int size; } ;


 int FUNC_0 (struct stab_write_handle*,char,int ,long**,size_t*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (void *VAR_0)
{
  struct stab_write_handle *VAR_1 = (struct stab_write_handle *) VAR_0;

  return FUNC_0 (VAR_1, 'B', VAR_1->type_stack->size,
      (long **) ((void*)0), (size_t *) ((void*)0));
}
