
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mips_cl_insn {TYPE_1__* insn_mo; } ;
typedef enum mips_regclass { ____Placeholder_mips_regclass } mips_regclass ;
struct TYPE_4__ {int mips16; } ;
struct TYPE_3__ {int pinfo; } ;


 unsigned int FUNC_0 (int ,struct mips_cl_insn const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (int ,struct mips_cl_insn const) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int FUNC_2 (int) ;
 unsigned int* VAR_26 ;
 TYPE_2__ VAR_27 ;

__attribute__((used)) static int
FUNC_3 (const struct mips_cl_insn *VAR_28, unsigned int VAR_29,
        enum mips_regclass VAR_30)
{
  if (VAR_30 == VAR_13)
    {
      FUNC_2 (VAR_27.mips16);
      VAR_29 = VAR_26[VAR_29];
      VAR_30 = VAR_15;
    }


  if (VAR_30 == VAR_15 && VAR_29 == VAR_25)
    return 0;

  if (VAR_30 == VAR_14)
    {
      FUNC_2 (! VAR_27.mips16);







      if ((VAR_28->insn_mo->pinfo & VAR_2)
   && ((FUNC_0 (VAR_0, *VAR_28) & ~(unsigned) 1)
       == (VAR_29 &~ (unsigned) 1)))
 return 1;
      if ((VAR_28->insn_mo->pinfo & VAR_3)
   && ((FUNC_0 (VAR_1, *VAR_28) & ~(unsigned) 1)
       == (VAR_29 &~ (unsigned) 1)))
 return 1;
    }
  else if (! VAR_27.mips16)
    {
      if ((VAR_28->insn_mo->pinfo & VAR_4)
   && FUNC_0 (VAR_19, *VAR_28) == VAR_29)
 return 1;
      if ((VAR_28->insn_mo->pinfo & VAR_5)
   && FUNC_0 (VAR_20, *VAR_28) == VAR_29)
 return 1;
    }
  else
    {
      if ((VAR_28->insn_mo->pinfo & VAR_10)
   && VAR_26[FUNC_1 (VAR_21, *VAR_28)] == VAR_29)
 return 1;
      if ((VAR_28->insn_mo->pinfo & VAR_11)
   && VAR_26[FUNC_1 (VAR_22, *VAR_28)] == VAR_29)
 return 1;
      if ((VAR_28->insn_mo->pinfo & VAR_12)
   && (VAR_26[FUNC_1 (VAR_16, *VAR_28)]
       == VAR_29))
 return 1;
      if ((VAR_28->insn_mo->pinfo & VAR_9) && VAR_29 == VAR_24)
 return 1;
      if ((VAR_28->insn_mo->pinfo & VAR_8) && VAR_29 == VAR_23)
 return 1;
      if ((VAR_28->insn_mo->pinfo & VAR_6) && VAR_29 == VAR_17)
 return 1;
      if ((VAR_28->insn_mo->pinfo & VAR_7)
   && FUNC_1 (VAR_18, *VAR_28) == VAR_29)
 return 1;
    }

  return 0;
}
