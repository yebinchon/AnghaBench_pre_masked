
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset {struct gdbarch_tdep* descr; } ;
struct regcache {int dummy; } ;
struct gdbarch_tdep {size_t sizeof_fpregset; } ;


 int FUNC_0 (struct regcache*,int,void const*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (const struct regset *VAR_0, struct regcache *VAR_1,
         int VAR_2, const void *VAR_3, size_t VAR_4)
{
  const struct gdbarch_tdep *VAR_5 = VAR_0->descr;

  FUNC_1 (VAR_4 == VAR_5->sizeof_fpregset);
  FUNC_0 (VAR_1, VAR_2, VAR_3);
}
