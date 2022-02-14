
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_fde {int dummy; } ;
struct dwarf_eh_bases {void* func; } ;


 struct dwarf_fde* FUNC_0 (void*,struct dwarf_eh_bases*) ;

void *
FUNC_1 (void *VAR_0)
{
  struct dwarf_eh_bases VAR_1;
  const struct dwarf_fde *VAR_2 = FUNC_0 (VAR_0-1, &VAR_1);
  if (VAR_2)
    return VAR_1.func;
  else
    return ((void*)0);
}
