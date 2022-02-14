
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {scalar_t__ sc_pc_offset; scalar_t__ sc_fpregs_offset; scalar_t__ sc_regs_offset; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gdbarch_tdep* FUNC_0 (int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (CORE_ADDR VAR_3, int VAR_4)
{
  struct gdbarch_tdep *VAR_5 = FUNC_0 (VAR_2);

  if (VAR_4 >= 0 && VAR_4 < 32)
    return VAR_3 + VAR_5->sc_regs_offset + VAR_4 * 8;
  else if (VAR_4 >= VAR_0 && VAR_4 < VAR_0 + 32)
    return VAR_3 + VAR_5->sc_fpregs_offset + VAR_4 * 8;
  else if (VAR_4 == VAR_1)
    return VAR_3 + VAR_5->sc_pc_offset;

  return 0;
}
