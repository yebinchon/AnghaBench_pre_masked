
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef int RTX_CODE ;







 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 char* VAR_0 ;
 int FUNC_5 (scalar_t__) ;







 int VAR_1 ;

 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int) ;
 char* FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int,int) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 int FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (char*,...) ;

__attribute__((used)) static void
FUNC_18 (rtx VAR_4, enum rtx_code VAR_5, char *VAR_6)
{
  RTX_CODE VAR_7;
  int VAR_8;
  int VAR_9;
  const char *VAR_10;

  if (VAR_4 == 0)
    {
      FUNC_17 ("NULL_RTX");
      return;
    }

  VAR_7 = FUNC_0 (VAR_4);

  switch (VAR_7)
    {
    case 134:
    case 135:
      if (VAR_6)
 {
   if (VAR_6[FUNC_9 (VAR_4, 0)])
     {
       FUNC_17 ("copy_rtx (operand%d)", FUNC_9 (VAR_4, 0));
       return;
     }
   VAR_6[FUNC_9 (VAR_4, 0)] = 1;
 }
      FUNC_17 ("operand%d", FUNC_9 (VAR_4, 0));
      return;

    case 132:
      FUNC_17 ("gen_rtx_fmt_");
      for (VAR_8 = 0; VAR_8 < FUNC_12 (VAR_4, 1); VAR_8++)
 FUNC_17 ("e");
      FUNC_17 (" (GET_CODE (operand%d), ", FUNC_9 (VAR_4, 0));
      if (FUNC_1 (VAR_4) == VAR_3)
 FUNC_17 ("GET_MODE (operand%d)", FUNC_9 (VAR_4, 0));
      else
 FUNC_17 ("%smode", FUNC_2 (FUNC_1 (VAR_4)));
      for (VAR_8 = 0; VAR_8 < FUNC_12 (VAR_4, 1); VAR_8++)
 {
   FUNC_17 (",\n\t\t");
   FUNC_18 (FUNC_11 (VAR_4, 1, VAR_8), VAR_5, VAR_6);
 }
      FUNC_17 (")");
      return;

    case 133:
      FUNC_17 ("gen_rtx_fmt_");
      for (VAR_8 = 0; VAR_8 < FUNC_12 (VAR_4, 2); VAR_8++)
 FUNC_17 ("e");
      FUNC_17 (" (GET_CODE (operand%d)", FUNC_9 (VAR_4, 0));
      FUNC_17 (", %smode", FUNC_2 (FUNC_1 (VAR_4)));
      for (VAR_8 = 0; VAR_8 < FUNC_12 (VAR_4, 2); VAR_8++)
 {
   FUNC_17 (",\n\t\t");
   FUNC_18 (FUNC_11 (VAR_4, 2, VAR_8), VAR_5, VAR_6);
 }
      FUNC_17 (")");
      return;

    case 131:
    case 130:
      FUNC_17 ("operand%d", FUNC_9 (VAR_4, 0));
      return;

    case 129:
      FUNC_15 (VAR_4, VAR_5);
      return;

    case 140:
      FUNC_13 ("ADDRESS expression code used in named instruction pattern");

    case 128:
      FUNC_17 ("pc_rtx");
      return;
    case 138:
      if (FUNC_7 (FUNC_8 (VAR_4, 0)))
 {
   FUNC_17 ("gen_hard_reg_clobber (%smode, %i)", FUNC_2 (FUNC_1 (FUNC_8 (VAR_4, 0))),
             FUNC_6 (FUNC_8 (VAR_4, 0)));
   return;
 }
      break;

    case 139:
      FUNC_17 ("cc0_rtx");
      return;

    case 136:
      if (FUNC_5 (VAR_4) == 0)
 FUNC_17 ("const0_rtx");
      else if (FUNC_5 (VAR_4) == 1)
 FUNC_17 ("const1_rtx");
      else if (FUNC_5 (VAR_4) == -1)
 FUNC_17 ("constm1_rtx");
      else if (-VAR_1 <= FUNC_5 (VAR_4)
   && FUNC_5 (VAR_4) <= VAR_1)
 FUNC_17 ("const_int_rtx[MAX_SAVED_CONST_INT + (%d)]",
  (int) FUNC_5 (VAR_4));
      else if (FUNC_5 (VAR_4) == VAR_2)
 FUNC_17 ("const_true_rtx");
      else
 {
   FUNC_17 ("GEN_INT (");
   FUNC_17 (VAR_0, FUNC_5 (VAR_4));
   FUNC_17 (")");
 }
      return;

    case 137:


      FUNC_14 ();

    default:
      break;
    }

  FUNC_17 ("gen_rtx_");
  FUNC_16 (VAR_7);
  FUNC_17 (" (%smode", FUNC_2 (FUNC_1 (VAR_4)));

  VAR_10 = FUNC_3 (VAR_7);
  VAR_9 = FUNC_4 (VAR_7);
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    {
      if (VAR_10[VAR_8] == '0')
 break;
      FUNC_17 (",\n\t");
      switch (VAR_10[VAR_8])
 {
 case 'e': case 'u':
   FUNC_18 (FUNC_8 (VAR_4, VAR_8), VAR_5, VAR_6);
   break;

 case 'i':
   FUNC_17 ("%u", FUNC_9 (VAR_4, VAR_8));
   break;

 case 's':
   FUNC_17 ("\"%s\"", FUNC_10 (VAR_4, VAR_8));
   break;

 case 'E':
   {
     int VAR_11;
     FUNC_17 ("gen_rtvec (%d", FUNC_12 (VAR_4, VAR_8));
     for (VAR_11 = 0; VAR_11 < FUNC_12 (VAR_4, VAR_8); VAR_11++)
       {
  FUNC_17 (",\n\t\t");
  FUNC_18 (FUNC_11 (VAR_4, VAR_8, VAR_11), VAR_5, VAR_6);
       }
     FUNC_17 (")");
     break;
   }

 default:
   FUNC_14 ();
 }
    }
  FUNC_17 (")");
}
