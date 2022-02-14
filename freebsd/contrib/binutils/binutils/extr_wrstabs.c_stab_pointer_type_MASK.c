
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pointer_types_alloc; int pointer_types; } ;
struct stab_write_handle {TYPE_1__ type_cache; } ;
typedef int bfd_boolean ;


 int FUNC_0 (struct stab_write_handle*,char,int,int *,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (void *VAR_0)
{
  struct stab_write_handle *VAR_1 = (struct stab_write_handle *) VAR_0;


  return FUNC_0 (VAR_1, '*', 4, &VAR_1->type_cache.pointer_types,
      &VAR_1->type_cache.pointer_types_alloc);
}
