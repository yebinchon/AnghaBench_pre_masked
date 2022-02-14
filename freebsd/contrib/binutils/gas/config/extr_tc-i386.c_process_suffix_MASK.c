
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int opcode_modifier; int base_opcode; int* operand_types; int extension_opcode; int name; } ;
struct TYPE_8__ {scalar_t__ suffix; int* types; int operands; TYPE_2__ tm; int rex; TYPE_1__* op; scalar_t__ reg_operands; } ;
struct TYPE_7__ {int reg_type; } ;
struct TYPE_5__ {TYPE_3__* regs; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_33 ;
 TYPE_4__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;

__attribute__((used)) static int
FUNC_8 (void)
{


  if (VAR_34.tm.opcode_modifier & (VAR_28 | VAR_29 | VAR_30))
    {
      if (VAR_34.tm.opcode_modifier & VAR_28)
 VAR_34.suffix = VAR_32;
      else if (VAR_34.tm.opcode_modifier & VAR_30)
 VAR_34.suffix = VAR_20;
      else
 VAR_34.suffix = VAR_12;
    }
  else if (VAR_34.reg_operands)
    {


      if (!VAR_34.suffix)
 {




   if (VAR_34.tm.base_opcode == 0xf20f38f1)
     {
       if ((VAR_34.types[0] & VAR_22))
  VAR_34.suffix = ((VAR_34.types[0] & VAR_23) ? VAR_32 :
       VAR_12);
     }
   else if (VAR_34.tm.base_opcode == 0xf20f38f0)
     {
       if ((VAR_34.types[0] & VAR_26))
  VAR_34.suffix = VAR_2;
     }

   if (!VAR_34.suffix)
     {
       int VAR_37;

       if (VAR_34.tm.base_opcode == 0xf20f38f1
    || VAR_34.tm.base_opcode == 0xf20f38f0)
  {

    FUNC_3 (FUNC_0("ambiguous memory operand size for `%s`"),
     VAR_34.tm.name);
    return 0;
  }

       for (VAR_37 = VAR_34.operands; --VAR_37 >= 0;)
  if ((VAR_34.types[VAR_37] & VAR_22)
      && !(VAR_34.tm.operand_types[VAR_37] & VAR_7))
    {
      VAR_34.suffix = ((VAR_34.types[VAR_37] & VAR_26) ? VAR_2 :
    (VAR_34.types[VAR_37] & VAR_23) ? VAR_32 :
    (VAR_34.types[VAR_37] & VAR_25) ? VAR_20 :
    VAR_12);
      break;
    }
     }
 }
      else if (VAR_34.suffix == VAR_2)
 {
   if (!FUNC_4 ())
     return 0;
 }
      else if (VAR_34.suffix == VAR_12)
 {
   if (!FUNC_5 ())
     return 0;
 }
      else if (VAR_34.suffix == VAR_20)
 {
   if (!FUNC_6 ())
     return 0;
 }
      else if (VAR_34.suffix == VAR_32)
 {
   if (!FUNC_7 ())
     return 0;
 }
      else if (VAR_35 && (VAR_34.tm.opcode_modifier & VAR_6))

 ;
      else
 FUNC_1 ();
    }
  else if ((VAR_34.tm.opcode_modifier & VAR_4)
    && !VAR_34.suffix

    && (VAR_34.tm.opcode_modifier & VAR_17))
    {
      VAR_34.suffix = VAR_36;
    }
  else if (VAR_35
    && !VAR_34.suffix
    && ((VAR_34.tm.operand_types[0] & VAR_8)
        || (VAR_34.tm.opcode_modifier & (VAR_9|VAR_10))
        || (VAR_34.tm.base_opcode == 0x0f01
     && VAR_34.tm.extension_opcode <= 3)))
    {
      switch (VAR_33)
 {
 case 128:
   if (!(VAR_34.tm.opcode_modifier & VAR_16))
     {
       VAR_34.suffix = VAR_20;
       break;
     }
 case 129:
   if (!(VAR_34.tm.opcode_modifier & VAR_15))
     VAR_34.suffix = VAR_12;
   break;
 case 130:
   if (!(VAR_34.tm.opcode_modifier & VAR_18))
     VAR_34.suffix = VAR_32;
   break;
 }
    }

  if (!VAR_34.suffix)
    {
      if (!VAR_35)
 {
   if (VAR_34.tm.opcode_modifier & VAR_31)
     {
       FUNC_3 (FUNC_0("no instruction mnemonic suffix given and "
   "no register operands; can't size instruction"));
       return 0;
     }
 }
      else
 {
   unsigned int VAR_38 = (~VAR_34.tm.opcode_modifier
       & (VAR_14
          | VAR_18
          | VAR_15
          | VAR_17
          | VAR_19
          | VAR_16));

   if ((VAR_34.tm.opcode_modifier & VAR_31)
       || ((VAR_38 & (VAR_38 - 1))
    && !(VAR_34.tm.opcode_modifier & (VAR_4 | VAR_6))))
     {
       FUNC_3 (FUNC_0("ambiguous operand size for `%s'"), VAR_34.tm.name);
       return 0;
     }
 }
    }




  if (VAR_34.suffix && VAR_34.suffix != VAR_2)
    {

      if (VAR_34.tm.opcode_modifier & VAR_31)
 {
   if (VAR_34.tm.opcode_modifier & VAR_27)
     VAR_34.tm.base_opcode |= 8;
   else
     VAR_34.tm.base_opcode |= 1;
 }




      if (VAR_34.tm.base_opcode == 0x0f01 && VAR_34.tm.extension_opcode == 0xc8)
 {



   if (VAR_34.op->regs[0].reg_type &
       (VAR_33 == 129 ? VAR_23 : VAR_24))
     if (!FUNC_2 (VAR_0))
       return 0;
 }
      else if (VAR_34.suffix != VAR_20
        && VAR_34.suffix != VAR_11
        && !(VAR_34.tm.opcode_modifier & (VAR_6 | VAR_5))
        && ((VAR_34.suffix == VAR_12) == (VAR_33 == 130)
     || (VAR_33 == 128
         && (VAR_34.tm.opcode_modifier & VAR_9))))
 {
   unsigned int VAR_39 = VAR_3;

   if (VAR_34.tm.opcode_modifier & VAR_9)
     VAR_39 = VAR_0;

   if (!FUNC_2 (VAR_39))
     return 0;
 }


      if (VAR_34.suffix == VAR_20
   && VAR_33 == 128
   && (VAR_34.tm.opcode_modifier & VAR_13) == 0)
 {


   if (VAR_34.operands != 2
       || VAR_34.types [0] != (VAR_1 | VAR_25)
       || VAR_34.types [1] != (VAR_1 | VAR_25)
       || VAR_34.tm.base_opcode != 0x90)
     VAR_34.rex |= VAR_21;
 }


      if (VAR_34.suffix == VAR_12)
 if (VAR_34.tm.opcode_modifier & VAR_5)
   VAR_34.tm.base_opcode ^= 4;
    }

  return 1;
}
