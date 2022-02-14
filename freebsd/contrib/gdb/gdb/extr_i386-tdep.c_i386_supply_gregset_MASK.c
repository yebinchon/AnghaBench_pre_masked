
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset {struct gdbarch_tdep* descr; } ;
struct regcache {int dummy; } ;
struct gdbarch_tdep {size_t sizeof_gregset; int gregset_num_regs; int* gregset_reg_offset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct regcache*,int,char const*) ;

void
FUNC_2 (const struct regset *VAR_0, struct regcache *VAR_1,
       int VAR_2, const void *VAR_3, size_t VAR_4)
{
  const struct gdbarch_tdep *VAR_5 = VAR_0->descr;
  const char *VAR_6 = VAR_3;
  int VAR_7;

  FUNC_0 (VAR_4 == VAR_5->sizeof_gregset);

  for (VAR_7 = 0; VAR_7 < VAR_5->gregset_num_regs; VAR_7++)
    {
      if ((VAR_2 == VAR_7 || VAR_2 == -1)
   && VAR_5->gregset_reg_offset[VAR_7] != -1)
 FUNC_1 (VAR_1, VAR_7, VAR_6 + VAR_5->gregset_reg_offset[VAR_7]);
    }
}
