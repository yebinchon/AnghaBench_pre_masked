
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ bfd_boolean ;
struct TYPE_5__ {scalar_t__ X_op; int X_add_number; } ;
struct TYPE_7__ {int pc_rel; int type; TYPE_1__ exp; } ;
struct TYPE_8__ {int instruction; TYPE_3__ reloc; TYPE_2__* operands; void* error; } ;
struct TYPE_6__ {int reg; int isreg; int preind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_4__ VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_3 (int VAR_18, bfd_boolean VAR_19, bfd_boolean VAR_20)
{
  unsigned long VAR_21;

  if (VAR_19)
    VAR_21 = (VAR_16.instruction > 0xffff) ? VAR_13 : VAR_14;
  else
    VAR_21 = VAR_7;

  if ((VAR_16.instruction & VAR_21) == 0)
    {
      VAR_16.error = FUNC_0("invalid pseudo operation");
      return 1;
    }
  if (VAR_16.reloc.exp.X_op != VAR_10 && VAR_16.reloc.exp.X_op != VAR_11)
    {
      VAR_16.error = FUNC_0("constant expression expected");
      return 1;
    }
  if (VAR_16.reloc.exp.X_op == VAR_10)
    {
      if (VAR_19)
 {
   if (!VAR_17 && (VAR_16.reloc.exp.X_add_number & ~0xFF) == 0)
     {

       VAR_16.instruction = VAR_15 | (VAR_16.operands[VAR_18].reg << 8);
       VAR_16.instruction |= VAR_16.reloc.exp.X_add_number;
       return 1;
     }
 }
      else
 {
   int VAR_22 = FUNC_2 (VAR_16.reloc.exp.X_add_number);
   if (VAR_22 != VAR_4)
     {

       VAR_16.instruction &= VAR_6;
       VAR_16.instruction |= VAR_5 | (VAR_8 << VAR_3);
       VAR_16.instruction |= VAR_22 & 0xfff;
       return 1;
     }

   VAR_22 = FUNC_2 (~VAR_16.reloc.exp.X_add_number);
   if (VAR_22 != VAR_4)
     {

       VAR_16.instruction &= VAR_6;
       VAR_16.instruction |= VAR_5 | (VAR_9 << VAR_3);
       VAR_16.instruction |= VAR_22 & 0xfff;
       return 1;
     }
 }
    }

  if (FUNC_1 () == VAR_4)
    {
      VAR_16.error = FUNC_0("literal pool insertion failed");
      return 1;
    }
  VAR_16.operands[1].reg = VAR_12;
  VAR_16.operands[1].isreg = 1;
  VAR_16.operands[1].preind = 1;
  VAR_16.reloc.pc_rel = 1;
  VAR_16.reloc.type = (VAR_19
       ? VAR_2
       : (VAR_20
   ? VAR_0
   : VAR_1));
  return 0;
}
