
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dwarf_reg_to_regnum; } ;
typedef int gdbarch_dwarf_reg_to_regnum_ftype ;



void
FUNC_0 (struct gdbarch *VAR_0,
                                 gdbarch_dwarf_reg_to_regnum_ftype VAR_1)
{
  VAR_0->dwarf_reg_to_regnum = VAR_1;
}
