
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* operand_types; int name; } ;
struct TYPE_8__ {int operands; int* types; int suffix; TYPE_3__* op; TYPE_1__ tm; } ;
struct TYPE_7__ {TYPE_2__* regs; } ;
struct TYPE_6__ {int reg_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,...) ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2 (void)
{
  int VAR_6;

  for (VAR_6 = VAR_4.operands; --VAR_6 >= 0; )


    if ((VAR_4.types[VAR_6] & VAR_3) != 0
 && (VAR_4.tm.operand_types[VAR_6] & (VAR_1 | VAR_2 | VAR_0)) != 0)
      {
 FUNC_1 (FUNC_0("`%s%s' not allowed with `%s%c'"),
  VAR_5,
  VAR_4.op[VAR_6].regs->reg_name,
  VAR_4.tm.name,
  VAR_4.suffix);
 return 0;
      }

    else if (((VAR_4.types[VAR_6] & VAR_1) != 0
       || (VAR_4.types[VAR_6] & VAR_2) != 0)
      && (VAR_4.tm.operand_types[VAR_6] & (VAR_2 | VAR_0)) != 0)
      {


 FUNC_1 (FUNC_0("Incorrect register `%s%s' used with `%c' suffix"),
  VAR_5, VAR_4.op[VAR_6].regs->reg_name,
  VAR_4.suffix);
 return 0;
      }
  return 1;
}
