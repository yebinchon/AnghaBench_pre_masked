
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset {struct gdbarch_tdep* descr; } ;
struct regcache {int dummy; } ;
struct gdbarch_tdep {size_t sizeof_fpregset; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regcache*,int,void const*) ;
 int FUNC_2 (struct regcache*,int,void const*) ;

__attribute__((used)) static void
FUNC_3 (const struct regset *VAR_1, struct regcache *VAR_2,
        int VAR_3, const void *VAR_4, size_t VAR_5)
{
  const struct gdbarch_tdep *VAR_6 = VAR_1->descr;

  if (VAR_5 == VAR_0)
    {
      FUNC_2 (VAR_2, VAR_3, VAR_4);
      return;
    }

  FUNC_0 (VAR_5 == VAR_6->sizeof_fpregset);
  FUNC_1 (VAR_2, VAR_3, VAR_4);
}
