
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ia64_operand {int (* extract ) (struct ia64_operand const*,scalar_t__,scalar_t__*) ;} ;
typedef scalar_t__ ia64_insn ;
typedef enum ia64_insn_type { ____Placeholder_ia64_insn_type } ia64_insn_type ;
struct TYPE_2__ {int opcode_type; int flags; int* operands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ia64_operand* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (struct ia64_operand const*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct ia64_operand const*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct ia64_operand const*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct ia64_operand const*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4 (ia64_insn VAR_7, int VAR_8, enum ia64_insn_type VAR_9)
{
  if (VAR_6[VAR_8].opcode_type != VAR_9)
    {
      return 0;
    }
  if (VAR_6[VAR_8].flags
      & (VAR_0 | VAR_1))
    {
      const struct ia64_operand *VAR_10, *VAR_11;
      ia64_insn VAR_12, VAR_13;

      if (VAR_6[VAR_8].flags & VAR_0)
 {
   VAR_10 = VAR_5 + VAR_2;
   VAR_11 = VAR_5 + VAR_3;
   (*VAR_10->extract) (VAR_10, VAR_7, &VAR_12);
   (*VAR_11->extract) (VAR_11, VAR_7, &VAR_13);
   if (VAR_12 != VAR_13)
     return 0;
 }
      else
 {
   ia64_insn VAR_14, VAR_15;


   VAR_10 = VAR_5 + VAR_4;
   VAR_11 = VAR_5 + VAR_6[VAR_8].operands[2];
   (*VAR_10->extract) (VAR_10, VAR_7, &VAR_14);
   (*VAR_11->extract) (VAR_11, VAR_7, &VAR_15);
   if (VAR_14 != 64 - VAR_15)
     return 0;
 }
    }
  return 1;
}
