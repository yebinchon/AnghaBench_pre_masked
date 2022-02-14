
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stab_write_handle {TYPE_1__* type_stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {int * methods; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_1)
{
  struct stab_write_handle *VAR_2 = (struct stab_write_handle *) VAR_1;

  FUNC_0 (VAR_2->type_stack != ((void*)0) && VAR_2->type_stack->methods != ((void*)0));



  FUNC_1 (VAR_2->type_stack->methods, ";");

  return VAR_0;
}
