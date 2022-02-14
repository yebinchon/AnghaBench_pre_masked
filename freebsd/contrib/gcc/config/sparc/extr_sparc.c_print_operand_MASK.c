
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;
typedef int FILE ;



 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 char* VAR_6 ;


 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;



 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ) ;



 scalar_t__ VAR_10 ;



 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;


 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t FUNC_10 (int ) ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_11 (int ) ;






 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_12 (int ,int) ;

 int FUNC_13 (int *,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 (char,int *) ;
 int FUNC_16 (char*,int *) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int VAR_26 ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (char*) ;
 char** VAR_27 ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_25 (int,int ) ;

void
FUNC_26 (FILE *VAR_31, rtx VAR_32, int VAR_33)
{
  switch (VAR_33)
    {
    case '#':

      if (VAR_25)
        VAR_29 = 1;
      else
 FUNC_16 ("\n\t nop", VAR_31);
      return;
    case '*':






      if (! VAR_25 && (VAR_26 && (int)VAR_28 < VAR_13))
 FUNC_16 (",a", VAR_31);
      return;
    case '(':


      if (! VAR_25 && ! (VAR_26 && (int)VAR_28 < VAR_13))
 FUNC_16 ("\n\t nop", VAR_31);
      else if (VAR_25)
        VAR_29 = 1;
      return;
    case ')':
     if (! VAR_18
  && VAR_24
  && ! VAR_30
  && (FUNC_11 (FUNC_5 (FUNC_4 (VAR_23)))
      == VAR_9)
  && ! FUNC_19 (FUNC_5 (FUNC_4 (VAR_23))))
 FUNC_16 ("12", VAR_31);
      else
        FUNC_15 ('8', VAR_31);
      return;
    case '_':

      FUNC_16 (VAR_6, VAR_31);
      return;
    case '&':

      FUNC_13 (VAR_31, FUNC_18 ());
      return;

    case 'Y':

      if (FUNC_6 (VAR_32) == VAR_5)
 break;
      else if (FUNC_6 (VAR_32) != VAR_15)
 FUNC_22 ("invalid %%Y operand");
      else if (FUNC_10 (VAR_32) < 8)
 FUNC_16 (VAR_27[FUNC_10 (VAR_32)], VAR_31);
      else if (FUNC_10 (VAR_32) >= 24 && FUNC_10 (VAR_32) < 32)
 FUNC_16 (VAR_27[FUNC_10 (VAR_32)-16], VAR_31);
      else
 FUNC_22 ("invalid %%Y operand");
      return;
    case 'L':

      if (VAR_21)
 FUNC_16 (VAR_27[FUNC_10 (VAR_32)+1], VAR_31);
      else
 FUNC_16 (VAR_27[FUNC_10 (VAR_32)], VAR_31);
      return;
    case 'H':

      if (VAR_21)
 FUNC_16 (VAR_27[FUNC_10 (VAR_32)], VAR_31);
      else
 FUNC_16 (VAR_27[FUNC_10 (VAR_32)+1], VAR_31);
      return;
    case 'R':


      FUNC_16 (VAR_27[FUNC_10 (VAR_32)+1], VAR_31);
      return;
    case 'S':


      FUNC_16 (VAR_27[FUNC_10 (VAR_32)+2], VAR_31);
      return;
    case 'T':


      FUNC_16 (VAR_27[FUNC_10 (VAR_32)+3], VAR_31);
      return;
    case 'x':

      if (FUNC_10 (VAR_32) == VAR_17)
 {


   if (FUNC_7 (VAR_32) == VAR_3)
     FUNC_16 ("%icc", VAR_31);
   else if (FUNC_7 (VAR_32) == VAR_2)
     FUNC_16 ("%xcc", VAR_31);
   else
     FUNC_17 ();
 }
      else

 FUNC_16 (VAR_27[FUNC_10 (VAR_32)], VAR_31);
      return;
    case 'm':

      FUNC_21 (FUNC_12 (VAR_32, 0));
      return;
    case 'r':


      if (VAR_32 == VAR_22
   || (FUNC_7 (VAR_32) != VAR_20 && VAR_32 == FUNC_0 (FUNC_7 (VAR_32))))
 {
   FUNC_16 ("%g0", VAR_31);
   return;
 }
      else
 break;

    case 'A':
      switch (FUNC_6 (VAR_32))
 {
 case 142: FUNC_16 ("or", VAR_31); break;
 case 148: FUNC_16 ("and", VAR_31); break;
 case 128: FUNC_16 ("xor", VAR_31); break;
 default: FUNC_22 ("invalid %%A operand");
 }
      return;

    case 'B':
      switch (FUNC_6 (VAR_32))
 {
 case 142: FUNC_16 ("orn", VAR_31); break;
 case 148: FUNC_16 ("andn", VAR_31); break;
 case 128: FUNC_16 ("xnor", VAR_31); break;
 default: FUNC_22 ("invalid %%B operand");
 }
      return;


    case 'c' :
    case 'C':
      {
 enum rtx_code VAR_34 = FUNC_6 (VAR_32);

 if (VAR_33 == 'c')
   {
     enum machine_mode VAR_35 = FUNC_7 (FUNC_12 (VAR_32, 0));
     if (VAR_35 == VAR_1 || VAR_35 == VAR_0)
       VAR_34 = FUNC_24 (FUNC_6 (VAR_32));
     else
       VAR_34 = FUNC_23 (FUNC_6 (VAR_32));
   }
 switch (VAR_34)
   {
   case 136: FUNC_16 ("ne", VAR_31); break;
   case 147: FUNC_16 ("e", VAR_31); break;
   case 146: FUNC_16 ("ge", VAR_31); break;
   case 144: FUNC_16 ("g", VAR_31); break;
   case 141: FUNC_16 ("le", VAR_31); break;
   case 139: FUNC_16 ("l", VAR_31); break;
   case 145: FUNC_16 ("geu", VAR_31); break;
   case 143: FUNC_16 ("gu", VAR_31); break;
   case 140: FUNC_16 ("leu", VAR_31); break;
   case 137: FUNC_16 ("lu", VAR_31); break;
   case 138: FUNC_16 ("lg", VAR_31); break;
   case 129: FUNC_16 ("u", VAR_31); break;
   case 135: FUNC_16 ("o", VAR_31); break;
   case 130: FUNC_16 ("ul", VAR_31); break;
   case 131: FUNC_16 ("ule", VAR_31); break;
   case 132: FUNC_16 ("ug", VAR_31); break;
   case 133: FUNC_16 ("uge", VAR_31); break;
   case 134: FUNC_16 ("ue", VAR_31); break;
   default: FUNC_22 (VAR_33 == 'c'
        ? "invalid %%c operand"
        : "invalid %%C operand");
   }
 return;
      }


    case 'd':
    case 'D':
      {
 enum rtx_code VAR_36 = (VAR_33 == 'd'
       ? FUNC_23 (FUNC_6 (VAR_32))
       : FUNC_6 (VAR_32));
 switch (VAR_36)
   {
   case 136: FUNC_16 ("ne", VAR_31); break;
   case 147: FUNC_16 ("e", VAR_31); break;
   case 146: FUNC_16 ("gez", VAR_31); break;
   case 139: FUNC_16 ("lz", VAR_31); break;
   case 141: FUNC_16 ("lez", VAR_31); break;
   case 144: FUNC_16 ("gz", VAR_31); break;
   default: FUNC_22 (VAR_33 == 'd'
        ? "invalid %%d operand"
        : "invalid %%D operand");
   }
 return;
      }

    case 'b':
      {

 int VAR_37 = FUNC_25 (FUNC_9 (VAR_32), VAR_14);
 FUNC_14 (VAR_31, "%d", VAR_37);
 return;
      }

    case 'f':

      if (FUNC_6 (VAR_32) != VAR_11)
 FUNC_22 ("invalid %%f operand");
      FUNC_21 (FUNC_12 (VAR_32, 0));
      return;

    case 's':
      {

 HOST_WIDE_INT VAR_38;
 if (FUNC_6(VAR_32) == VAR_5)
   VAR_38 = FUNC_9 (VAR_32);
 else if (FUNC_6(VAR_32) == VAR_4)
   VAR_38 = FUNC_3 (VAR_32);
 else
   {
     FUNC_22 ("invalid %%s operand");
     return;
   }
 VAR_38 = FUNC_25 (VAR_38, VAR_16);
 FUNC_14 (VAR_31, VAR_8, VAR_38);
 return;
      }

    case 0:

      break;

    default:

      FUNC_22 ("invalid operand output code");
    }

  if (FUNC_6 (VAR_32) == VAR_15)
    FUNC_16 (VAR_27[FUNC_10 (VAR_32)], VAR_31);
  else if (FUNC_6 (VAR_32) == VAR_11)
    {
      FUNC_15 ('[', VAR_31);

      if (FUNC_1 (FUNC_12 (VAR_32, 0)))
 FUNC_16 ("%g0+", VAR_31);
      FUNC_21 (FUNC_12 (VAR_32, 0));
      FUNC_15 (']', VAR_31);
    }
  else if (FUNC_6 (VAR_32) == VAR_7)
    {
      FUNC_16 ("%hi(", VAR_31);
      FUNC_20 (VAR_31, FUNC_12 (VAR_32, 0));
      FUNC_15 (')', VAR_31);
    }
  else if (FUNC_6 (VAR_32) == VAR_10)
    {
      FUNC_26 (VAR_31, FUNC_12 (VAR_32, 0), 0);
      if (VAR_19)
 FUNC_16 ("+%l44(", VAR_31);
      else
 FUNC_16 ("+%lo(", VAR_31);
      FUNC_20 (VAR_31, FUNC_12 (VAR_32, 1));
      FUNC_15 (')', VAR_31);
    }
  else if (FUNC_6 (VAR_32) == VAR_4
    && (FUNC_7 (VAR_32) == VAR_20
        || FUNC_8 (FUNC_7 (VAR_32)) == VAR_12))
    {
      if (FUNC_2 (VAR_32) == 0)
 FUNC_14 (VAR_31, "%u", (unsigned int) FUNC_3 (VAR_32));
      else if (FUNC_2 (VAR_32) == -1
        && FUNC_3 (VAR_32) < 0)
 FUNC_14 (VAR_31, "%d", (int) FUNC_3 (VAR_32));
      else
 FUNC_22 ("long long constant not a valid immediate operand");
    }
  else if (FUNC_6 (VAR_32) == VAR_4)
    FUNC_22 ("floating point constant not a valid immediate operand");
  else { FUNC_20 (VAR_31, VAR_32); }
}
