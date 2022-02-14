
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_4__ {void* type; } ;
struct TYPE_6__ {unsigned long instruction; int size_req; unsigned long relax; TYPE_1__ reloc; TYPE_2__* operands; } ;
struct TYPE_5__ {int reg; int imm; int shift_kind; scalar_t__ isreg; scalar_t__ shifted; scalar_t__ immisreg; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 unsigned long VAR_7 ;
 void* FUNC_0 (unsigned long) ;
 void* FUNC_1 (int) ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 void* VAR_12 ;
 unsigned long VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 unsigned long VAR_17 ;
 void* VAR_18 ;
 unsigned long VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 unsigned long VAR_22 ;
 void* VAR_23 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 scalar_t__ VAR_24 ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 TYPE_3__ VAR_25 ;
 scalar_t__ VAR_26 ;

__attribute__((used)) static void
FUNC_7 (void)
{
  if (VAR_26)
    {
      int VAR_27 = (VAR_25.instruction == 129
     || VAR_25.instruction == 128) ? 8 : 16;
      unsigned long VAR_28;
      bfd_boolean VAR_29;
      bfd_boolean VAR_30;

      VAR_30 = (VAR_25.operands[0].reg <= 7 && VAR_25.operands[1].reg <= 7);
      VAR_28 = VAR_25.instruction;
      if (VAR_24)
 VAR_29 = VAR_28 != 128;
      else
 VAR_29 = VAR_28 != 128 || VAR_30;
      if (VAR_25.size_req == 4
   || VAR_25.operands[1].shifted)
 VAR_29 = VAR_4;


      if (VAR_28 == 128 && VAR_25.operands[1].isreg
   && !VAR_25.operands[1].shifted
   && VAR_25.operands[0].reg == VAR_6
   && VAR_25.operands[1].reg == VAR_5)
 {
   VAR_25.instruction = VAR_7;
   return;
 }

      if (!VAR_25.operands[1].isreg)
 {

   if (VAR_24 == 0 && VAR_28 == 129)
     VAR_29 = 0;
   if (VAR_30 && VAR_29)
     {
       VAR_25.instruction = FUNC_0 (VAR_28);
       VAR_25.instruction |= VAR_25.operands[0].reg << 8;
       if (VAR_25.size_req == 2)
  VAR_25.reloc.type = VAR_1;
       else
  VAR_25.relax = VAR_28;
     }
   else
     {
       VAR_25.instruction = FUNC_1 (VAR_25.instruction);
       VAR_25.instruction = (VAR_25.instruction & 0xe1ffffff) | 0x10000000;
       VAR_25.instruction |= VAR_25.operands[0].reg << VAR_27;
       VAR_25.reloc.type = VAR_0;
     }
 }
      else if (VAR_25.operands[1].shifted && VAR_25.operands[1].immisreg
        && (VAR_25.instruction == 129
     || VAR_25.instruction == 128))
 {

   bfd_boolean VAR_31 = (VAR_25.instruction == 128);

   if (VAR_24)
     VAR_29 = !VAR_31;
   else
     VAR_29 = VAR_31;

   if (VAR_25.size_req == 4)
     VAR_29 = VAR_4;

   if (!VAR_30 || VAR_25.operands[1].imm > 7)
     VAR_29 = VAR_4;

   if (VAR_25.operands[0].reg != VAR_25.operands[1].reg)
     VAR_29 = VAR_4;

   switch (VAR_25.operands[1].shift_kind)
     {
     case 133:
       VAR_28 = VAR_29 ? VAR_18 : FUNC_1 (VAR_9);
       break;
     case 134:
       VAR_28 = VAR_29 ? VAR_14 : FUNC_1 (VAR_8);
       break;
     case 132:
       VAR_28 = VAR_29 ? VAR_20 : FUNC_1 (VAR_10);
       break;
     case 131:
       VAR_28 = VAR_29 ? VAR_23 : FUNC_1 (VAR_11);
       break;
     default:
       FUNC_3();
     }

   VAR_25.instruction = VAR_28;
   if (VAR_29)
     {
       VAR_25.instruction |= VAR_25.operands[0].reg;
       VAR_25.instruction |= VAR_25.operands[1].imm << 3;
     }
   else
     {
       if (VAR_31)
  VAR_25.instruction |= VAR_3;

       VAR_25.instruction |= VAR_25.operands[0].reg << 8;
       VAR_25.instruction |= VAR_25.operands[1].reg << 16;
       VAR_25.instruction |= VAR_25.operands[1].imm;
     }
 }
      else if (!VAR_29)
 {


   if (VAR_30 && VAR_25.operands[1].shifted
       && (VAR_25.instruction == 129
    || VAR_25.instruction == 128))
     {
       if (VAR_24)
  VAR_29 = (VAR_25.instruction == 129);
       else
  VAR_29 = (VAR_25.instruction == 128);
     }

   if (VAR_29)
     {
       switch (VAR_25.operands[1].shift_kind)
  {
  case 133: VAR_25.instruction = VAR_17; break;
  case 132: VAR_25.instruction = VAR_19; break;
  case 134: VAR_25.instruction = VAR_13; break;
  default: VAR_29 = VAR_4; break;
  }
     }

   if (VAR_29)
     {
       VAR_25.instruction |= VAR_25.operands[0].reg;
       VAR_25.instruction |= VAR_25.operands[1].reg << 3;
       VAR_25.reloc.type = VAR_2;
     }
   else
     {
       VAR_25.instruction = FUNC_1 (VAR_25.instruction);
       VAR_25.instruction |= VAR_25.operands[0].reg << VAR_27;
       FUNC_6 (1);
     }
 }
      else
 switch (VAR_25.instruction)
   {
   case 129:
     VAR_25.instruction = VAR_21;
     VAR_25.instruction |= (VAR_25.operands[0].reg & 0x8) << 4;
     VAR_25.instruction |= (VAR_25.operands[0].reg & 0x7);
     VAR_25.instruction |= VAR_25.operands[1].reg << 3;
     break;

   case 128:


     VAR_25.instruction = VAR_12;
     VAR_25.instruction |= VAR_25.operands[0].reg;
     VAR_25.instruction |= VAR_25.operands[1].reg << 3;
     break;

   case 130:
     if (VAR_30)
       {
  VAR_25.instruction = VAR_16;
  VAR_25.instruction |= VAR_25.operands[0].reg;
  VAR_25.instruction |= VAR_25.operands[1].reg << 3;
       }
     else
       {
  VAR_25.instruction = VAR_15;
  VAR_25.instruction |= (VAR_25.operands[0].reg & 0x8) << 4;
  VAR_25.instruction |= (VAR_25.operands[0].reg & 0x7);
  VAR_25.instruction |= VAR_25.operands[1].reg << 3;
       }
     break;
   }
      return;
    }

  VAR_25.instruction = FUNC_0 (VAR_25.instruction);
  if (VAR_25.operands[1].isreg)
    {
      if (VAR_25.operands[0].reg < 8 && VAR_25.operands[1].reg < 8)
 {


   if (VAR_25.instruction == VAR_22)
     VAR_25.instruction = VAR_12;
   else
     VAR_25.instruction = VAR_16;

   VAR_25.instruction |= VAR_25.operands[0].reg;
   VAR_25.instruction |= VAR_25.operands[1].reg << 3;
 }
      else
 {
   if (VAR_25.instruction == VAR_22)
     VAR_25.instruction = VAR_21;
   else
     VAR_25.instruction = VAR_15;
   FUNC_5 ();
 }
    }
  else
    {
      FUNC_4 (VAR_25.operands[0].reg > 7,
    FUNC_2("only lo regs allowed with immediate"));
      VAR_25.instruction |= VAR_25.operands[0].reg << 8;
      VAR_25.reloc.type = VAR_1;
    }
}
