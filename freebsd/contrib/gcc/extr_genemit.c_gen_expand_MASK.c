
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ,int ,int *) ;
 int VAR_13 ;
 int FUNC_11 (int ,int) ;
 int VAR_14 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;
 scalar_t__ FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15 (rtx VAR_15)
{
  int VAR_16;
  int VAR_17;

  if (FUNC_14 (FUNC_5 (VAR_15, 0)) == 0)
    FUNC_9 ("define_expand lacks a name");
  if (FUNC_6 (VAR_15, 1) == 0)
    FUNC_9 ("define_expand for %s lacks a pattern", FUNC_5 (VAR_15, 0));


  VAR_16 = FUNC_11 (VAR_15, 1);


  FUNC_13 ("rtx\ngen_%s (", FUNC_5 (VAR_15, 0));
  if (VAR_16)
    for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
      if (VAR_17)
 FUNC_13 (",\n\trtx operand%d", VAR_17);
      else
 FUNC_13 ("rtx operand%d", VAR_17);
  else
    FUNC_13 ("void");
  FUNC_13 (")\n");
  FUNC_13 ("{\n");




  if ((FUNC_5 (VAR_15, 3) == 0 || *FUNC_5 (VAR_15, 3) == '\0')
      && VAR_16 > VAR_13
      && FUNC_8 (VAR_15, 1) == 1)
    {
      FUNC_13 ("  return ");
      FUNC_10 (FUNC_7 (VAR_15, 1, 0), VAR_1, ((void*)0));
      FUNC_13 (";\n}\n\n");
      return;
    }



  for (VAR_17 = VAR_16; VAR_17 <= VAR_13; VAR_17++)
    FUNC_13 ("  rtx operand%d;\n", VAR_17);
  for (; VAR_17 <= VAR_14; VAR_17++)
    FUNC_13 ("  rtx operand%d ATTRIBUTE_UNUSED;\n", VAR_17);
  FUNC_13 ("  rtx _val = 0;\n");
  FUNC_13 ("  start_sequence ();\n");







  if (FUNC_5 (VAR_15, 3) && *FUNC_5 (VAR_15, 3))
    {
      FUNC_13 ("  {\n");
      if (VAR_16 > 0 || VAR_13 >= 0 || VAR_14 >= 0)
 FUNC_13 ("    rtx operands[%d];\n",
     FUNC_2 (VAR_16, FUNC_2 (VAR_14, VAR_13) + 1));

      for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
 FUNC_13 ("    operands[%d] = operand%d;\n", VAR_17, VAR_17);



      FUNC_12 (FUNC_5 (VAR_15, 3));
      FUNC_13 ("%s\n", FUNC_5 (VAR_15, 3));



      if (FUNC_6 (VAR_15, 1) != 0)
 {
   for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
     FUNC_13 ("    operand%d = operands[%d];\n", VAR_17, VAR_17);
   for (; VAR_17 <= VAR_13; VAR_17++)
     FUNC_13 ("    operand%d = operands[%d];\n", VAR_17, VAR_17);
   for (; VAR_17 <= VAR_14; VAR_17++)
     FUNC_13 ("    operand%d = operands[%d];\n", VAR_17, VAR_17);
 }
      FUNC_13 ("  }\n");
    }





  for (VAR_17 = 0; VAR_17 < FUNC_8 (VAR_15, 1); VAR_17++)
    {
      rtx VAR_18 = FUNC_7 (VAR_15, 1, VAR_17);
      if ((FUNC_0 (VAR_18) == VAR_12 && FUNC_0 (FUNC_3 (VAR_18)) == VAR_10)
   || (FUNC_0 (VAR_18) == VAR_9
       && ((FUNC_0 (FUNC_7 (VAR_18, 0, 0)) == VAR_12
     && FUNC_0 (FUNC_3 (FUNC_7 (VAR_18, 0, 0))) == VAR_10)
    || FUNC_0 (FUNC_7 (VAR_18, 0, 0)) == VAR_11))
   || FUNC_0 (VAR_18) == VAR_11)
 FUNC_13 ("  emit_jump_insn (");
      else if ((FUNC_0 (VAR_18) == VAR_12 && FUNC_0 (FUNC_4 (VAR_18)) == VAR_0)
        || FUNC_0 (VAR_18) == VAR_0
        || (FUNC_0 (VAR_18) == VAR_9
     && FUNC_0 (FUNC_7 (VAR_18, 0, 0)) == VAR_12
     && FUNC_0 (FUNC_4 (FUNC_7 (VAR_18, 0, 0))) == VAR_0)
        || (FUNC_0 (VAR_18) == VAR_9
     && FUNC_0 (FUNC_7 (VAR_18, 0, 0)) == VAR_0))
 FUNC_13 ("  emit_call_insn (");
      else if (FUNC_1 (VAR_18))
 FUNC_13 ("  emit_label (");
      else if (FUNC_0 (VAR_18) == VAR_4
        || FUNC_0 (VAR_18) == VAR_3
        || FUNC_0 (VAR_18) == VAR_5
        || FUNC_0 (VAR_18) == VAR_6
        || FUNC_0 (VAR_18) == VAR_7
        || FUNC_0 (VAR_18) == VAR_8
        || FUNC_0 (VAR_18) == VAR_9)
 FUNC_13 ("  emit (");
      else
 FUNC_13 ("  emit_insn (");
      FUNC_10 (VAR_18, VAR_1, ((void*)0));
      FUNC_13 (");\n");
      if (FUNC_0 (VAR_18) == VAR_12 && FUNC_0 (FUNC_3 (VAR_18)) == VAR_10
   && FUNC_0 (FUNC_4 (VAR_18)) == VAR_2)
 FUNC_13 ("  emit_barrier ();");
    }




  FUNC_13 ("  _val = get_insns ();\n");
  FUNC_13 ("  end_sequence ();\n");
  FUNC_13 ("  return _val;\n}\n\n");
}
