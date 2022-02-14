
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mips_cl_insn {TYPE_1__* insn_mo; } ;
struct TYPE_4__ {scalar_t__ mips16; } ;
struct TYPE_3__ {int pinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (struct mips_cl_insn const*,struct mips_cl_insn const*) ;
 int FUNC_1 (int,struct mips_cl_insn const*,struct mips_cl_insn const*,...) ;

__attribute__((used)) static int
FUNC_2 (const struct mips_cl_insn *VAR_6,
    const struct mips_cl_insn *VAR_7)
{
  int VAR_8, VAR_9;

  VAR_8 = FUNC_0 (VAR_6, VAR_7);
  if (VAR_7->insn_mo->pinfo & (VAR_2
         | VAR_0
         | VAR_1))
    {
      VAR_9 = FUNC_1 (2, VAR_6, VAR_7, VAR_4);
      if (VAR_9 > VAR_8)
 VAR_8 = VAR_9;
    }
  else if (VAR_5.mips16 && (VAR_7->insn_mo->pinfo & VAR_3))
    {
      VAR_9 = FUNC_1 (1, VAR_6, VAR_7);
      if (VAR_9 > VAR_8)
 VAR_8 = VAR_9;
    }
  return VAR_8;
}
