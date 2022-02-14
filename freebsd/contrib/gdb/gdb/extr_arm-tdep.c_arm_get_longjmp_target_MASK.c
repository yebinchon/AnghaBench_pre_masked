
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int jb_pc; int jb_elt_size; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int) ;
 struct gdbarch_tdep* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_4 (CORE_ADDR *VAR_3)
{
  CORE_ADDR VAR_4;
  char VAR_5[VAR_1];
  struct gdbarch_tdep *VAR_6 = FUNC_1 (VAR_2);

  VAR_4 = FUNC_2 (VAR_0);

  if (FUNC_3 (VAR_4 + VAR_6->jb_pc * VAR_6->jb_elt_size, VAR_5,
     VAR_1))
    return 0;

  *VAR_3 = FUNC_0 (VAR_5, VAR_1);
  return 1;
}
