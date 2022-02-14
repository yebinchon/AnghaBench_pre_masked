
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arc_operand_value {size_t type; int flags; int value; } ;
struct arc_operand {char fmt; int shift; } ;
typedef enum operand { ____Placeholder_operand } operand ;
typedef int arc_insn ;
struct TYPE_2__ {int shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (long) ;
 size_t VAR_6 ;
 int FUNC_1 (int) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_2 (char*) ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 long VAR_19 ;
 int VAR_20 ;
 int* VAR_21 ;
 long VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static arc_insn
FUNC_4 (arc_insn VAR_24,
     const struct arc_operand *VAR_25,
     int VAR_26,
     const struct arc_operand_value *VAR_27,
     long VAR_28,
     const char **VAR_29)
{
  static char VAR_30[100];
  enum operand VAR_31 = VAR_12;

  if (VAR_27 == ((void*)0))
    {





      if (FUNC_0 (VAR_28)

   && !VAR_16


   && (!VAR_23 || VAR_22 == VAR_28))
 {
   int VAR_32;

   VAR_31 = VAR_14;


   if ('a' != VAR_25->fmt)
     {
       VAR_23 = 1;
       VAR_22 = VAR_28;
       VAR_18 = 1;
       VAR_32 = VAR_17 ? VAR_5 : VAR_4;
     }
   else
     {

       VAR_32 = VAR_4;
     }
   VAR_24 |= VAR_32 << VAR_25->shift;

 }

      else if (!VAR_20 || VAR_19 == VAR_28)
 {
   VAR_31 = VAR_11;
   VAR_20 = 1;
   VAR_19 = VAR_28;
   VAR_24 |= VAR_3 << VAR_25->shift;

 }
      else
 *VAR_29 = FUNC_2("unable to fit different valued constants into instruction");
    }
  else
    {


      if (VAR_27->type == VAR_6)
 {
   if (!(VAR_26 & VAR_0))
     *VAR_29 = FUNC_2("auxiliary register not allowed here");
   else
     {
       if ((VAR_24 & FUNC_1(-1)) == FUNC_1(2))
  {
    if (VAR_27->flags & VAR_1)
      *VAR_29 = FUNC_2("attempt to set readonly register");
  }
       else
  {
    if (VAR_27->flags & VAR_2)
      *VAR_29 = FUNC_2("attempt to read writeonly register");
  }
       VAR_24 |= VAR_4 << VAR_25->shift;
       VAR_24 |= VAR_27->value << VAR_15[VAR_27->type].shift;
     }
 }
      else
 {

   if ('a' == VAR_25->fmt || ((VAR_24 & FUNC_1(-1)) < FUNC_1(2)))
     {
       if (VAR_27->flags & VAR_1)
  *VAR_29 = FUNC_2("attempt to set readonly register");
     }
   if ('a' != VAR_25->fmt)
     {
       if (VAR_27->flags & VAR_2)
  *VAR_29 = FUNC_2("attempt to read writeonly register");
     }

   if ((unsigned int) VAR_27->value > 60)
     {
       FUNC_3 (VAR_30, FUNC_2("invalid register number `%d'"), VAR_27->value);
       *VAR_29 = VAR_30;
     }
   VAR_24 |= VAR_27->value << VAR_25->shift;
   VAR_31 = VAR_13;
 }
    }

  switch (VAR_25->fmt)
    {
    case 'a':
      VAR_21[VAR_8] = VAR_31;
      break;
    case 's':
      VAR_21[VAR_7] = VAR_31;
      break;
    case 'c':
      if ((VAR_24 & FUNC_1(-1)) == FUNC_1(2))
 VAR_21[VAR_10] = VAR_31;
      else
 VAR_21[VAR_9] = VAR_31;
      break;
    case 'o': case 'O':
      VAR_21[VAR_9] = VAR_31;
      break;
    }

  return VAR_24;
}
