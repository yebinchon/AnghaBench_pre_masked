
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg {char const* name; } ;
struct gdbarch_tdep {int wordsize; struct reg* regs; } ;


 int VAR_0 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;
 int FUNC_1 (struct reg const*,int ) ;

__attribute__((used)) static const char *
FUNC_2 (int VAR_1)
{
  struct gdbarch_tdep *VAR_2 = FUNC_0 (VAR_0);
  const struct reg *VAR_3 = VAR_2->regs + VAR_1;

  if (!FUNC_1 (VAR_3, VAR_2->wordsize))
    return ((void*)0);
  return VAR_3->name;
}
