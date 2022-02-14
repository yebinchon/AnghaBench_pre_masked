
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int* operand_types; } ;
typedef TYPE_3__ template ;
typedef int offsetT ;
struct TYPE_10__ {TYPE_3__ const* end; TYPE_3__* start; } ;
struct TYPE_9__ {char suffix; int operands; int* types; scalar_t__* prefix; TYPE_2__* op; scalar_t__ reg_operands; } ;
struct TYPE_7__ {TYPE_1__* imms; } ;
struct TYPE_6__ {int X_op; int X_add_number; } ;



 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;





 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

 int FUNC_0 () ;
 TYPE_5__* VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_4__ VAR_16 ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  char VAR_17 = 0;
  int VAR_18;

  if (VAR_16.suffix)
    VAR_17 = VAR_16.suffix;
  else if (VAR_16.reg_operands)
    {




      for (VAR_18 = VAR_16.operands; --VAR_18 >= 0;)
 if (VAR_16.types[VAR_18] & VAR_9)
   {
     if (VAR_16.types[VAR_18] & VAR_13)
       VAR_17 = 134;
     else if (VAR_16.types[VAR_18] & VAR_10)
       VAR_17 = 128;
     else if (VAR_16.types[VAR_18] & VAR_11)
       VAR_17 = 133;
     else if (VAR_16.types[VAR_18] & VAR_12)
       VAR_17 = 129;
     break;
   }
    }
  else if ((VAR_15 == VAR_0) ^ (VAR_16.prefix[VAR_1] != 0))
    VAR_17 = 128;

  for (VAR_18 = VAR_16.operands; --VAR_18 >= 0;)
    if (VAR_16.types[VAR_18] & VAR_2)
      {
 switch (VAR_16.op[VAR_18].imms->X_op)
   {
   case 131:

     switch (VAR_17)
       {
       case 133:
  VAR_16.types[VAR_18] |= VAR_4 | VAR_6;
  break;
       case 128:
  VAR_16.types[VAR_18] |= VAR_3 | VAR_5 | VAR_4 | VAR_6;
  break;
       case 134:
  VAR_16.types[VAR_18] |= VAR_3 | VAR_7 | VAR_8 | VAR_5 | VAR_4 | VAR_6;
  break;
       }






     if ((VAR_16.types[VAR_18] & VAR_3)
  && (VAR_16.op[VAR_18].imms->X_add_number & ~(offsetT) 0xffff) == 0)
       {
  VAR_16.op[VAR_18].imms->X_add_number =
    (((VAR_16.op[VAR_18].imms->X_add_number & 0xffff) ^ 0x8000) - 0x8000);
       }
     if ((VAR_16.types[VAR_18] & VAR_4)
  && ((VAR_16.op[VAR_18].imms->X_add_number & ~(((offsetT) 2 << 31) - 1))
      == 0))
       {
  VAR_16.op[VAR_18].imms->X_add_number = ((VAR_16.op[VAR_18].imms->X_add_number
      ^ ((offsetT) 1 << 31))
            - ((offsetT) 1 << 31));
       }
     VAR_16.types[VAR_18] |= FUNC_1 (VAR_16.op[VAR_18].imms->X_add_number);



     if (VAR_17 == 129)
       VAR_16.types[VAR_18] &= ~VAR_4;
     break;

   case 132:
   case 130:
     FUNC_0 ();


   default:



     {
       unsigned int VAR_19, VAR_20 = 0;
       const template *VAR_21;

       for (VAR_21 = VAR_14->start;
     VAR_21 < VAR_14->end;
     ++VAR_21)
  VAR_20 |= VAR_21->operand_types[VAR_18];
       switch (VAR_17)
  {
  case 129:
    VAR_19 = VAR_6 | VAR_5;
    break;
  case 133:
    VAR_19 = VAR_4;
    break;
  case 128:
    VAR_19 = VAR_3;
    break;
  case 134:
    VAR_19 = VAR_7;
    break;
  default:
    VAR_19 = 0;
    break;
  }
       if (VAR_19 & VAR_20)
  VAR_16.types[VAR_18] &= VAR_19;
     }
     break;
   }
      }
}
