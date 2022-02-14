
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset {int dummy; } ;
struct gdbarch_tdep {size_t sizeof_gregset; size_t sizeof_fpregset; struct regset const* fpregset; struct regset const* gregset; } ;
struct gdbarch {int dummy; } ;


 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

const struct regset *
FUNC_2 (struct gdbarch *VAR_0,
          const char *VAR_1, size_t VAR_2)
{
  struct gdbarch_tdep *VAR_3 = FUNC_0 (VAR_0);

  if (FUNC_1 (VAR_1, ".reg") == 0 && VAR_2 == VAR_3->sizeof_gregset)
    return VAR_3->gregset;

  if (FUNC_1 (VAR_1, ".reg2") == 0 && VAR_2 == VAR_3->sizeof_fpregset)
    return VAR_3->fpregset;

  return ((void*)0);
}
