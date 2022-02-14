
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int dummy; } ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct gdbarch_tdep*) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_1)
{
  struct gdbarch_tdep *VAR_2 = FUNC_0 (VAR_0);
  if (FUNC_1 (VAR_2) && (((ULONGEST) VAR_1) >> 32 == 0xffffffffUL))
    return VAR_1 &= 0xffffffffUL;
  else
    return VAR_1;
}
