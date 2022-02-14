
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_6__ {scalar_t__ X_op; int X_add_number; } ;
struct TYPE_7__ {void* type; TYPE_2__ exp; } ;
struct TYPE_8__ {int instruction; int size_req; int relax; TYPE_1__* operands; TYPE_3__ reloc; } ;
struct TYPE_5__ {int reg; int shifted; int isreg; scalar_t__ immisreg; scalar_t__ present; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_28 ;
 int FUNC_4 (int) ;
 TYPE_4__ VAR_29 ;
 scalar_t__ VAR_30 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  int VAR_31, VAR_32, VAR_33;

  VAR_31 = VAR_29.operands[0].reg;
  VAR_32 = (VAR_29.operands[1].present
 ? VAR_29.operands[1].reg
 : VAR_29.operands[0].reg);

  if (VAR_30)
    {
      bfd_boolean VAR_34;
      bfd_boolean VAR_35;
      int VAR_36;

      VAR_34 = (VAR_29.instruction == VAR_18
        || VAR_29.instruction == VAR_24);
      if (VAR_34)
 VAR_35 = (VAR_28 == 0);
      else
 VAR_35 = (VAR_28 != 0);
      if (!VAR_29.operands[2].isreg)
 {
   int VAR_37;

   VAR_37 = (VAR_29.instruction == VAR_13
   || VAR_29.instruction == VAR_18);
   VAR_36 = 0;
   if (VAR_29.size_req != 4)
     {


       if (VAR_31 == VAR_11 && VAR_32 == VAR_11 && !VAR_34)
  VAR_36 = VAR_37 ? VAR_20 : VAR_19;
       else if (VAR_31 <= 7 && VAR_32 == VAR_11 && VAR_37 && !VAR_34)
  VAR_36 = VAR_15;
       else if (VAR_31 <= 7 && VAR_32 == VAR_10 && VAR_37 && !VAR_34)
  VAR_36 = VAR_14;
       else if (VAR_31 <= 7 && VAR_32 <= 7 && VAR_35)
  {
    if (VAR_34)
      VAR_36 = VAR_37 ? VAR_17 : VAR_23;
    else
      VAR_36 = VAR_37 ? VAR_16 : VAR_22;
  }
       if (VAR_36)
  {
    VAR_29.instruction = FUNC_0(VAR_36);
    VAR_29.instruction |= (VAR_31 << 4) | VAR_32;
    VAR_29.reloc.type = VAR_5;
    if (VAR_29.size_req != 2)
      VAR_29.relax = VAR_36;
  }
       else
  FUNC_3 (VAR_29.size_req == 2, VAR_0);
     }
   if (VAR_29.size_req == 4
       || (VAR_29.size_req != 2 && !VAR_36))
     {
       if (VAR_31 == VAR_10)
  {
    FUNC_3 (VAR_32 != VAR_9 || VAR_29.instruction != VAR_24,
        FUNC_2("only SUBS PC, LR, #const allowed"));
    FUNC_3 (VAR_29.reloc.exp.X_op != VAR_8,
         FUNC_2("expression too complex"));
    FUNC_3 (VAR_29.reloc.exp.X_add_number < 0
         || VAR_29.reloc.exp.X_add_number > 0xff,
        FUNC_2("immediate value out of range"));
    VAR_29.instruction = VAR_12
         | VAR_29.reloc.exp.X_add_number;
    VAR_29.reloc.type = VAR_6;
    return;
  }
       else if (VAR_32 == VAR_10)
  {

    VAR_29.instruction = VAR_37 ? 0xf20f0000 : 0xf2af0000;
    VAR_29.reloc.type = VAR_3;
  }
       else
  {
    VAR_29.instruction = FUNC_1 (VAR_29.instruction);
    VAR_29.instruction = (VAR_29.instruction & 0xe1ffffff)
         | 0x10000000;
    if (VAR_34)
      VAR_29.reloc.type = VAR_4;
    else
      VAR_29.reloc.type = VAR_2;
  }
       VAR_29.instruction |= VAR_31 << 8;
       VAR_29.instruction |= VAR_32 << 16;
     }
 }
      else
 {
   VAR_33 = VAR_29.operands[2].reg;

   if (!VAR_29.operands[2].shifted && VAR_29.size_req != 4)
     {
       if (VAR_31 > 7 || VAR_32 > 7 || VAR_33 > 7)
  VAR_35 = VAR_7;

       if (VAR_35)
  {
    VAR_29.instruction = ((VAR_29.instruction == VAR_18
           || VAR_29.instruction == VAR_13)
          ? VAR_26
          : VAR_27);
    VAR_29.instruction |= VAR_31 | (VAR_32 << 3) | (VAR_33 << 6);
    return;
  }

       if (VAR_29.instruction == VAR_13)
  {
    if (VAR_31 == VAR_32)
      {
        VAR_29.instruction = VAR_25;
        VAR_29.instruction |= (VAR_31 & 8) << 4;
        VAR_29.instruction |= (VAR_31 & 7);
        VAR_29.instruction |= VAR_33 << 3;
        return;
      }

    else if (VAR_31 == VAR_33)
      {
        VAR_29.instruction = VAR_25;
        VAR_29.instruction |= (VAR_31 & 8) << 4;
        VAR_29.instruction |= (VAR_31 & 7);
        VAR_29.instruction |= VAR_32 << 3;
        return;
      }
  }
     }

   FUNC_3 (VAR_29.operands[2].shifted && VAR_29.operands[2].immisreg,
        FUNC_2("shift must be constant"));
   VAR_29.instruction = FUNC_1 (VAR_29.instruction);
   VAR_29.instruction |= VAR_31 << 8;
   VAR_29.instruction |= VAR_32 << 16;
   FUNC_4 (2);
 }
    }
  else
    {
      FUNC_3 (VAR_29.instruction == VAR_18
    || VAR_29.instruction == VAR_24,
    VAR_1);

      if (!VAR_29.operands[2].isreg)
 {
   FUNC_3 ((VAR_31 > 7 && (VAR_31 != VAR_11 || VAR_32 != VAR_11))
        || (VAR_32 > 7 && VAR_32 != VAR_11 && VAR_32 != VAR_10),
        VAR_0);

   VAR_29.instruction = (VAR_29.instruction == VAR_13
         ? 0x0000 : 0x8000);
   VAR_29.instruction |= (VAR_31 << 4) | VAR_32;
   VAR_29.reloc.type = VAR_5;
   return;
 }

      VAR_33 = VAR_29.operands[2].reg;
      FUNC_3 (VAR_29.operands[2].shifted, FUNC_2("unshifted register required"));


      if (VAR_31 > 7 || VAR_32 > 7 || VAR_33 > 7)
 {

   FUNC_3 (VAR_29.instruction == VAR_21, VAR_0);
   VAR_29.instruction = VAR_25;
   VAR_29.instruction |= (VAR_31 & 8) << 4;
   VAR_29.instruction |= (VAR_31 & 7);
   if (VAR_32 == VAR_31)
     VAR_29.instruction |= VAR_33 << 3;
   else if (VAR_33 == VAR_31)
     VAR_29.instruction |= VAR_32 << 3;
   else
     FUNC_3 (1, FUNC_2("dest must overlap one source register"));
 }
      else
 {
   VAR_29.instruction = (VAR_29.instruction == VAR_13
         ? VAR_26 : VAR_27);
   VAR_29.instruction |= VAR_31 | (VAR_32 << 3) | (VAR_33 << 6);
 }
    }
}
