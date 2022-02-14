
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_1 (char*,struct objfile**) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 struct minimal_symbol* FUNC_4 (char*,int *,struct objfile*) ;

CORE_ADDR
FUNC_5 (struct gdbarch *VAR_0, CORE_ADDR VAR_1)
{
  struct objfile *VAR_2;
  struct minimal_symbol *VAR_3
    = FUNC_1 ("_dl_runtime_resolve", &VAR_2);

  if (VAR_3)
    {
      struct minimal_symbol *VAR_4
 = FUNC_4 ("fixup", ((void*)0), VAR_2);

      if (VAR_4 && FUNC_0 (VAR_4) == VAR_1)
 return FUNC_2 (FUNC_3 ());
    }

  return 0;
}
