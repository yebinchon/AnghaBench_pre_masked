
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_4__ {void* type; } ;
struct TYPE_6__ {int instruction; int size_req; TYPE_2__* operands; TYPE_1__ reloc; int error; } ;
struct TYPE_5__ {int reg; int shifted; int shift_kind; scalar_t__ isreg; int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;




 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;






 int VAR_5 ;
 int VAR_6 ;


 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (int) ;
 TYPE_3__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  if (!VAR_15.operands[1].present)
    VAR_15.operands[1].reg = VAR_15.operands[0].reg;

  if (VAR_16)
    {
      bfd_boolean VAR_17;
      int VAR_18;

      switch (VAR_15.instruction)
 {
 case 135:
 case 134: VAR_18 = 139; break;
 case 133:
 case 132: VAR_18 = 138; break;
 case 131:
 case 130: VAR_18 = 137; break;
 case 129:
 case 128: VAR_18 = 136; break;
 default: FUNC_3 ();
 }

      if (FUNC_1 (VAR_15.instruction))
 VAR_17 = (VAR_14 == 0);
      else
 VAR_17 = (VAR_14 != 0);
      if (VAR_15.operands[0].reg > 7 || VAR_15.operands[1].reg > 7)
 VAR_17 = VAR_4;
      if (!VAR_15.operands[2].isreg && VAR_18 == 136)
 VAR_17 = VAR_4;
      if (VAR_15.operands[2].isreg
   && (VAR_15.operands[1].reg != VAR_15.operands[0].reg
       || VAR_15.operands[2].reg > 7))
 VAR_17 = VAR_4;
      if (VAR_15.size_req == 4)
 VAR_17 = VAR_4;

      if (!VAR_17)
 {
   if (VAR_15.operands[2].isreg)
     {
       VAR_15.instruction = FUNC_0 (VAR_15.instruction);
       VAR_15.instruction |= VAR_15.operands[0].reg << 8;
       VAR_15.instruction |= VAR_15.operands[1].reg << 16;
       VAR_15.instruction |= VAR_15.operands[2].reg;
     }
   else
     {
       VAR_15.operands[1].shifted = 1;
       VAR_15.operands[1].shift_kind = VAR_18;
       VAR_15.instruction = FUNC_0 (FUNC_1 (VAR_15.instruction)
          ? VAR_6 : VAR_5);
       VAR_15.instruction |= VAR_15.operands[0].reg << 8;
       FUNC_5 (1);

       VAR_15.reloc.type = VAR_3;
     }
 }
      else
 {
   if (VAR_15.operands[2].isreg)
     {
       switch (VAR_18)
  {
  case 139: VAR_15.instruction = VAR_8; break;
  case 138: VAR_15.instruction = VAR_10; break;
  case 137: VAR_15.instruction = VAR_12; break;
  case 136: VAR_15.instruction = VAR_13; break;
  default: FUNC_3 ();
  }

       VAR_15.instruction |= VAR_15.operands[0].reg;
       VAR_15.instruction |= VAR_15.operands[2].reg << 3;
     }
   else
     {
       switch (VAR_18)
  {
  case 139: VAR_15.instruction = VAR_7; break;
  case 138: VAR_15.instruction = VAR_9; break;
  case 137: VAR_15.instruction = VAR_11; break;
  default: FUNC_3 ();
  }
       VAR_15.reloc.type = VAR_2;
       VAR_15.instruction |= VAR_15.operands[0].reg;
       VAR_15.instruction |= VAR_15.operands[1].reg << 3;
     }
 }
    }
  else
    {
      FUNC_4 (VAR_15.operands[0].reg > 7
    || VAR_15.operands[1].reg > 7, VAR_0);
      FUNC_4 (FUNC_1 (VAR_15.instruction), VAR_1);

      if (VAR_15.operands[2].isreg)
 {
   FUNC_4 (VAR_15.operands[2].reg > 7, VAR_0);
   FUNC_4 (VAR_15.operands[0].reg != VAR_15.operands[1].reg,
        FUNC_2("source1 and dest must be same register"));

   switch (VAR_15.instruction)
     {
     case 135: VAR_15.instruction = VAR_8; break;
     case 133: VAR_15.instruction = VAR_10; break;
     case 131: VAR_15.instruction = VAR_12; break;
     case 129: VAR_15.instruction = VAR_13; break;
     default: FUNC_3 ();
     }

   VAR_15.instruction |= VAR_15.operands[0].reg;
   VAR_15.instruction |= VAR_15.operands[2].reg << 3;
 }
      else
 {
   switch (VAR_15.instruction)
     {
     case 135: VAR_15.instruction = VAR_7; break;
     case 133: VAR_15.instruction = VAR_9; break;
     case 131: VAR_15.instruction = VAR_11; break;
     case 129: VAR_15.error = FUNC_2("ror #imm not supported"); return;
     default: FUNC_3 ();
     }
   VAR_15.reloc.type = VAR_2;
   VAR_15.instruction |= VAR_15.operands[0].reg;
   VAR_15.instruction |= VAR_15.operands[1].reg << 3;
 }
    }
}
