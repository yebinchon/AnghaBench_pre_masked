
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {scalar_t__ sigtramp_start; scalar_t__ sigtramp_end; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;

int
FUNC_1 (CORE_ADDR VAR_1, char *VAR_2)
{
  struct gdbarch_tdep *VAR_3 = FUNC_0 (VAR_0);

  return (VAR_1 >= VAR_3->sigtramp_start && VAR_1 < VAR_3->sigtramp_end);
}
