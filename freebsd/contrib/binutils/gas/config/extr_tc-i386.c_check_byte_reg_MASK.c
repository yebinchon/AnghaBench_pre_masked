
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int base_opcode; int* operand_types; int name; } ;
struct TYPE_8__ {int operands; int* types; int suffix; TYPE_3__ tm; TYPE_2__* op; } ;
struct TYPE_6__ {TYPE_1__* regs; } ;
struct TYPE_5__ {int reg_num; int reg_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_17 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,...) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_18 ;
 TYPE_4__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_3 (void)
{
  int VAR_23;

  for (VAR_23 = VAR_19.operands; --VAR_23 >= 0;)
    {



      if (VAR_19.types[VAR_23] & VAR_11)
 continue;


      if (VAR_20
   && (VAR_19.tm.base_opcode == 0xfb7
       || VAR_19.tm.base_opcode == 0xfb6
       || VAR_19.tm.base_opcode == 0x63
       || VAR_19.tm.base_opcode == 0xfbe
       || VAR_19.tm.base_opcode == 0xfbf))
 continue;


      if (VAR_19.tm.base_opcode == 0xf20f38f0)
 continue;

      if ((VAR_19.types[VAR_23] & VAR_17) && VAR_19.op[VAR_23].regs->reg_num < 4)
 {


   if (VAR_18 == VAR_0
       && (VAR_19.tm.operand_types[VAR_23] & VAR_5) == 0)
     {
       FUNC_1 (FUNC_0("Incorrect register `%s%s' used with `%c' suffix"),
        VAR_22, VAR_19.op[VAR_23].regs->reg_name,
        VAR_19.suffix);
       return 0;
     }
   continue;
 }

      if (VAR_19.types[VAR_23] & (VAR_9 | VAR_12 | VAR_13
    | VAR_14 | VAR_15
    | VAR_1 | VAR_2 | VAR_16
    | VAR_4 | VAR_3))
 {
   FUNC_1 (FUNC_0("`%s%s' not allowed with `%s%c'"),
    VAR_22,
    VAR_19.op[VAR_23].regs->reg_name,
    VAR_19.tm.name,
    VAR_19.suffix);
   return 0;
 }
    }
  return 1;
}
