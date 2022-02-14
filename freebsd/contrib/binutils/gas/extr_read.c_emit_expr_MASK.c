
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int valueT ;
struct broken_word {char* word_goes_here; scalar_t__ addnum; scalar_t__ use_jump; scalar_t__ added; int sub; int add; scalar_t__ dispfrag; TYPE_3__* frag; int subseg; scalar_t__ seg; struct broken_word* next_broken_word; } ;
typedef scalar_t__ operatorT ;
struct TYPE_11__ {scalar_t__ X_op; int X_add_number; scalar_t__ X_unsigned; int X_op_symbol; int X_add_symbol; } ;
typedef TYPE_1__ expressionS ;
typedef int bfd_reloc_code_real_type ;
struct TYPE_12__ {int fr_literal; } ;
typedef unsigned long LITTLENUM_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (TYPE_3__*,char*,unsigned int,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 unsigned int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (int ,...) ;
 struct broken_word* VAR_17 ;
 scalar_t__ FUNC_4 (TYPE_1__*,unsigned int*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (TYPE_3__*,char*,int,TYPE_1__*,int ,int ) ;
 char* FUNC_7 (int) ;
 TYPE_3__* VAR_20 ;
 int FUNC_8 () ;
 unsigned long* VAR_21 ;
 int FUNC_9 (int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (char*,unsigned int,unsigned int) ;
 int FUNC_12 (char*,int ,unsigned int) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ,char*) ;
 TYPE_1__* FUNC_15 (int ) ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_16 (int) ;

void
FUNC_17 (expressionS *VAR_27, unsigned int VAR_28)
{
  operatorT VAR_29;
  register char *VAR_30;
  valueT VAR_31 = 0;


  if (VAR_22)
    return;

  VAR_18 = FUNC_8 ();
  if (FUNC_4 (VAR_27, &VAR_28))
    return;

  VAR_29 = VAR_27->X_op;


  if (VAR_24 == VAR_16)
    {
      if (VAR_29 != VAR_10 || VAR_27->X_add_number != 0)
 FUNC_2 (FUNC_1("attempt to store value in absolute section"));
      VAR_15 += VAR_28;
      return;
    }


  if (VAR_29 == VAR_14
      && VAR_27->X_add_number == 0
      && FUNC_15 (VAR_27->X_add_symbol)->X_op == VAR_9
      && FUNC_15 (VAR_27->X_add_symbol)->X_add_number > 0)
    {
      int VAR_32;
      unsigned long VAR_33;

      VAR_27 = FUNC_15 (VAR_27->X_add_symbol);


      VAR_33 = 1;
      for (VAR_32 = 0; VAR_32 < VAR_27->X_add_number; VAR_32++)
 {
   unsigned long VAR_34;

   VAR_34 = (((~(VAR_21[VAR_32] & VAR_6))
     & VAR_6)
    + VAR_33);
   VAR_21[VAR_32] = VAR_34 & VAR_6;
   VAR_33 = VAR_34 >> VAR_7;
 }




      VAR_31 = (valueT) -1;
      VAR_29 = VAR_9;
    }

  if (VAR_29 == VAR_8 || VAR_29 == VAR_11)
    {
      FUNC_3 (FUNC_1("zero assumed for missing expression"));
      VAR_27->X_add_number = 0;
      VAR_29 = VAR_10;
    }
  else if (VAR_29 == VAR_9 && VAR_27->X_add_number <= 0)
    {
      FUNC_2 (FUNC_1("floating point number invalid"));
      VAR_27->X_add_number = 0;
      VAR_29 = VAR_10;
    }
  else if (VAR_29 == VAR_12)
    {
      FUNC_3 (FUNC_1("register value used as expression"));
      VAR_29 = VAR_10;
    }

  VAR_30 = FUNC_7 ((int) VAR_28);




  if (VAR_29 == VAR_13 && VAR_28 == 2)
    {
      struct broken_word *VAR_35;

      VAR_35 = (struct broken_word *) FUNC_16 (sizeof (struct broken_word));
      VAR_35->next_broken_word = VAR_17;
      VAR_17 = VAR_35;
      VAR_35->seg = VAR_24;
      VAR_35->subseg = VAR_25;
      VAR_35->frag = VAR_20;
      VAR_35->word_goes_here = VAR_30;
      VAR_35->dispfrag = 0;
      VAR_35->add = VAR_27->X_add_symbol;
      VAR_35->sub = VAR_27->X_op_symbol;
      VAR_35->addnum = VAR_27->X_add_number;
      VAR_35->added = 0;
      VAR_35->use_jump = 0;
      VAR_23++;
      return;
    }




  if (VAR_29 == VAR_10 && VAR_28 > sizeof (valueT))
    {
      VAR_31 = VAR_27->X_unsigned ? 0 : -1;
      FUNC_5 (VAR_27);
      VAR_29 = VAR_9;
    }

  if (VAR_29 == VAR_10)
    {
      register valueT VAR_36;
      register valueT VAR_37;
      register valueT VAR_38;
      valueT VAR_39;
      register valueT VAR_40;



      if (VAR_28 >= sizeof (valueT))
 {
   VAR_38 = 0;
   if (VAR_28 > sizeof (valueT))
     VAR_39 = 0;
   else
     VAR_39 = (valueT) 1 << (VAR_28 * VAR_4 - 1);
 }
      else
 {

   VAR_38 = ~(valueT) 0 << (VAR_4 * VAR_28);
   VAR_39 = (valueT) 1 << (VAR_28 * VAR_4 - 1);
 }

      VAR_40 = ~VAR_38;






      VAR_36 = VAR_27->X_add_number;
      VAR_37 = VAR_36 & VAR_40;
      if ((VAR_36 & VAR_38) != 0
   && ((VAR_36 & VAR_38) != VAR_38
       || (VAR_36 & VAR_39) == 0))
 {
   FUNC_3 (FUNC_1("value 0x%lx truncated to 0x%lx"),
     (unsigned long) VAR_36, (unsigned long) VAR_37);
 }

      FUNC_11 (VAR_30, VAR_37, (int) VAR_28);
    }
  else if (VAR_29 == VAR_9)
    {
      unsigned int VAR_41;
      LITTLENUM_TYPE *VAR_42;

      VAR_41 = VAR_27->X_add_number * VAR_5;
      if (VAR_28 < VAR_41)
 {
   int VAR_43 = VAR_28 / VAR_5;
   if (VAR_43 != 0)
     {
       LITTLENUM_TYPE VAR_44 = 0;
       if ((VAR_21[--VAR_43]
     & (1 << (VAR_7 - 1))) != 0)
  VAR_44 = ~(LITTLENUM_TYPE) 0;
       while (++VAR_43 < VAR_27->X_add_number)
  if (VAR_21[VAR_43] != VAR_44)
    break;
     }
   if (VAR_43 < VAR_27->X_add_number)
     FUNC_3 (FUNC_1("bignum truncated to %d bytes"), VAR_28);
   VAR_41 = VAR_28;
 }

      if (VAR_28 == 1)
 {
   FUNC_11 (VAR_30, (valueT) VAR_21[0], 1);
   return;
 }
      FUNC_9 (VAR_28 % VAR_5 == 0);

      if (VAR_26)
 {
   while (VAR_28 > VAR_41)
     {
       FUNC_11 (VAR_30, VAR_31, VAR_5);
       VAR_28 -= VAR_5;
       VAR_30 += VAR_5;
     }

   VAR_42 = VAR_21 + VAR_41 / VAR_5;
   while (VAR_41 >= VAR_5)
     {
       --VAR_42;
       FUNC_11 (VAR_30, (valueT) *VAR_42, VAR_5);
       VAR_41 -= VAR_5;
       VAR_30 += VAR_5;
     }
 }
      else
 {
   VAR_42 = VAR_21;
   while (VAR_41 >= VAR_5)
     {
       FUNC_11 (VAR_30, (valueT) *VAR_42, VAR_5);
       ++VAR_42;
       VAR_41 -= VAR_5;
       VAR_30 += VAR_5;
       VAR_28 -= VAR_5;
     }

   while (VAR_28 >= VAR_5)
     {
       FUNC_11 (VAR_30, VAR_31, VAR_5);
       VAR_28 -= VAR_5;
       VAR_30 += VAR_5;
     }
 }
    }
  else
    {
      FUNC_12 (VAR_30, 0, VAR_28);






      {
 bfd_reloc_code_real_type VAR_45;

 switch (VAR_28)
   {
   case 1:
     VAR_45 = VAR_3;
     break;
   case 2:
     VAR_45 = VAR_0;
     break;
   case 4:
     VAR_45 = VAR_1;
     break;
   case 8:
     VAR_45 = VAR_2;
     break;
   default:
     FUNC_2 (FUNC_1("unsupported BFD relocation size %u"), VAR_28);
     VAR_45 = VAR_1;
     break;
   }
 FUNC_6 (VAR_20, VAR_30 - VAR_20->fr_literal, (int) VAR_28, VAR_27,
       0, VAR_45);
      }

    }
}
