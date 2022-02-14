
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {char code; } ;
struct TYPE_11__ {TYPE_1__* start; } ;
struct TYPE_10__ {int* types; char suffix; scalar_t__ base_reg; } ;
struct TYPE_9__ {int op_modifier; int got_a_float; char* next_operand; char* op_string; scalar_t__ in_offset; scalar_t__ in_bracket; int disp; } ;
struct TYPE_8__ {scalar_t__ code; int str; } ;
struct TYPE_7__ {char* name; int opcode_modifier; int base_opcode; int* operand_types; } ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 char VAR_10 ;
 scalar_t__ VAR_11 ;
 char VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 char VAR_17 ;
 int VAR_18 ;
 char VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 char VAR_26 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,...) ;
 TYPE_6__ VAR_27 ;
 TYPE_5__* VAR_28 ;
 scalar_t__ VAR_29 ;
 TYPE_4__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_3 () ;
 int FUNC_4 (char) ;
 TYPE_3__ VAR_32 ;
 int FUNC_5 () ;
 TYPE_2__ VAR_33 ;
 int FUNC_6 (int ,char*) ;
 size_t VAR_34 ;

__attribute__((used)) static int
FUNC_7 (void)
{
  int VAR_35 = ~VAR_9;
  int VAR_36 = 0;

  for (;;)
    {

      if (VAR_27.code == '+' || VAR_27.code == '-')
 {


   int VAR_37;

   FUNC_4 (VAR_27.code);
   VAR_37 = VAR_27.code;
   FUNC_5 ();
   if (VAR_37 == VAR_14)
     break;
 }


      if (VAR_27.code == VAR_18)
 {
   if (!VAR_36++)
     ++VAR_32.in_offset;
 }


      else if (VAR_27.code == VAR_22)
 VAR_32.op_modifier |= 1 << VAR_22;


      else if (VAR_27.code == '+')
 FUNC_6 (VAR_32.disp, "+");




      else if (VAR_27.code == '-' || VAR_27.code == '~')
 {
   char VAR_38[2];

   if (VAR_35 < 0)
     VAR_35 = ~VAR_35;
   VAR_38[0] = VAR_27.code;
   VAR_38[1] = 0;
   FUNC_6 (VAR_32.disp, VAR_38);
 }


      else
 break;

      FUNC_4 (VAR_27.code);
    }

  for (;;)
    {
      if (!FUNC_3 ())
 return 0;


      if (VAR_27.code == VAR_19)
 {
   char VAR_39;

   if (VAR_33.code == VAR_13)
     VAR_39 = VAR_0;

   else if (VAR_33.code == VAR_24)
     {
       if (VAR_28->start->name[0] == 'l'
    && VAR_28->start->name[2] == 's'
    && VAR_28->start->name[3] == 0)
  VAR_39 = VAR_0;
       else if (VAR_32.got_a_float == 2)
  VAR_39 = VAR_12;
       else
  VAR_39 = VAR_26;
     }

   else if (VAR_33.code == VAR_15)
     {
       if (VAR_28->start->name[0] == 'l'
    && VAR_28->start->name[2] == 's'
    && VAR_28->start->name[3] == 0)
  VAR_39 = VAR_26;
       else if (VAR_29 == VAR_1
         && (VAR_28->start->opcode_modifier
      & (VAR_3 | VAR_5)))
  VAR_39 = VAR_7;
       else if (VAR_32.got_a_float == 1)
  VAR_39 = VAR_12;
       else
  VAR_39 = VAR_8;
     }

   else if (VAR_33.code == VAR_16)
     {
       if (VAR_28->start->name[0] == 'l'
    && VAR_28->start->name[2] == 's'
    && VAR_28->start->name[3] == 0)
  VAR_39 = VAR_8;
       else if (!VAR_32.got_a_float)
  {
    if (VAR_29 == VAR_1)
      FUNC_1 (VAR_2);
    VAR_39 = VAR_7;
  }
       else
  VAR_39 = VAR_0;
     }

   else if (VAR_33.code == VAR_20)
     {
       if (VAR_32.got_a_float == 1)
  VAR_39 = VAR_8;
       else
  VAR_39 = VAR_10;
     }

   else if (VAR_33.code == VAR_23)
     {
       if (VAR_32.got_a_float == 1)
  VAR_39 = VAR_7;
       else
  VAR_39 = VAR_0;
     }

   else if (VAR_33.code == VAR_25)
     {

       VAR_39 = 0;
     }

   else
     {
       FUNC_2 (FUNC_0("Unknown operand modifier `%s'"), VAR_33.str);
       return 0;
     }



   if (VAR_28->start->opcode_modifier & (VAR_3 | VAR_5))
     VAR_30.types[VAR_34] |= VAR_4;

   if (VAR_28->start->base_opcode == 0x8d )
     ;
   else if (!VAR_30.suffix)
     VAR_30.suffix = VAR_39;
   else if (VAR_30.suffix != VAR_39)
     {
       FUNC_2 (FUNC_0("Conflicting operand modifiers"));
       return 0;
     }

 }


      else if (VAR_27.code == ':')
 {
   if (VAR_33.code != VAR_21)
     {




       if (VAR_34 != 0
    || VAR_32.in_offset
    || VAR_32.in_bracket
    || (!(VAR_28->start->opcode_modifier
   & (VAR_3|VAR_5|VAR_6))
        && !(VAR_28->start->operand_types[0]
      & VAR_4)))
  return FUNC_4 (VAR_17);





       VAR_32.next_operand = VAR_32.op_string;
       *--VAR_32.op_string = '\0';
       return FUNC_4 (':');
     }
 }


      else
 break;

      FUNC_4 (VAR_27.code);

    }

  if (VAR_36)
    {
      --VAR_32.in_offset;
      if (VAR_35 < 0)
 VAR_35 = ~VAR_35;
      if (VAR_9 > VAR_35)
 {
   FUNC_2 (FUNC_0("Invalid operand to `OFFSET'"));
   return 0;
 }
      VAR_32.op_modifier |= 1 << VAR_18;
    }

  if (VAR_35 >= 0 && VAR_9 > VAR_35)
    VAR_30.base_reg = VAR_31 + VAR_11 + 3;
  return 1;
}
