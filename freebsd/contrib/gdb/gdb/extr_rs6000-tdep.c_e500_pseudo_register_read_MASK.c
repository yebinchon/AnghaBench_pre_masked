
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch_tdep {int ppc_gp0_regnum; int ppc_gplast_regnum; int ppc_ev0_regnum; } ;
struct gdbarch {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct regcache*,int,char*) ;

__attribute__((used)) static void
FUNC_3 (struct gdbarch *VAR_3, struct regcache *VAR_4,
      int VAR_5, void *VAR_6)
{
  int VAR_7;
  int VAR_8 = 0;
  char VAR_9[VAR_1];
  struct gdbarch_tdep *VAR_10 = FUNC_0 (VAR_3);

  if (VAR_5 >= VAR_10->ppc_gp0_regnum
      && VAR_5 <= VAR_10->ppc_gplast_regnum)
    {
      VAR_7 = VAR_5 - VAR_10->ppc_gp0_regnum + VAR_10->ppc_ev0_regnum;



      FUNC_2 (VAR_4, VAR_7, VAR_9);
      if (VAR_2 == VAR_0)
 VAR_8 = 4;
      FUNC_1 ((char *) VAR_6, VAR_9 + VAR_8, 4);
    }
}
