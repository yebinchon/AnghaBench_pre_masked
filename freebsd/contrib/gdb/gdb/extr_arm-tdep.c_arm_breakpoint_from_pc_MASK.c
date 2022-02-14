
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int thumb_breakpoint_size; unsigned char const* thumb_breakpoint; int arm_breakpoint_size; unsigned char const* arm_breakpoint; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 struct gdbarch_tdep* FUNC_2 (int ) ;

__attribute__((used)) static const unsigned char *
FUNC_3 (CORE_ADDR *VAR_1, int *VAR_2)
{
  struct gdbarch_tdep *VAR_3 = FUNC_2 (VAR_0);

  if (FUNC_1 (*VAR_1))
    {
      *VAR_1 = FUNC_0 (*VAR_1);
      *VAR_2 = VAR_3->thumb_breakpoint_size;
      return VAR_3->thumb_breakpoint;
    }
  else
    {
      *VAR_2 = VAR_3->arm_breakpoint_size;
      return VAR_3->arm_breakpoint;
    }
}
