
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset {int dummy; } ;
struct gdbarch_tdep {int dummy; } ;
struct gdbarch {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;
 struct regset const VAR_2 ;
 struct regset const VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

const struct regset *
FUNC_2 (struct gdbarch *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
  struct gdbarch_tdep *VAR_7 = FUNC_0 (VAR_4);

  if (FUNC_1 (VAR_5, ".reg") == 0 && VAR_6 >= VAR_1)
    return &VAR_3;

  if (FUNC_1 (VAR_5, ".reg2") == 0 && VAR_6 >= VAR_0)
    return &VAR_2;

  return ((void*)0);
}
