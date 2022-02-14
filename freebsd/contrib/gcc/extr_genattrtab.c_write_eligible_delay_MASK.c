
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delay_desc {int num; int def; struct delay_desc* next; } ;
struct attr_value {struct attr_value* next; } ;
struct attr_desc {struct attr_value* first_value; } ;


 int FUNC_0 (int ,int) ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 struct delay_desc* VAR_2 ;
 struct attr_desc* FUNC_1 (char const**,int ) ;
 struct attr_value* FUNC_2 (struct attr_desc*) ;
 int FUNC_3 (struct attr_desc*) ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,...) ;
 int VAR_4 ;
 int FUNC_6 (struct attr_desc*,struct attr_value*,int,char*,char*,int,int ) ;

__attribute__((used)) static void
FUNC_7 (const char *VAR_5)
{
  struct delay_desc *VAR_6;
  int VAR_7;
  char VAR_8[50];
  const char *VAR_9;
  struct attr_desc *VAR_10;
  struct attr_value *VAR_11, *VAR_12;
  int VAR_13;





  for (VAR_6 = VAR_2, VAR_7 = 0; VAR_6; VAR_6 = VAR_6->next)
    if (FUNC_0 (VAR_6->def, 1) / 3 > VAR_7)
      VAR_7 = FUNC_0 (VAR_6->def, 1) / 3;



  FUNC_4 ("int\n");
  FUNC_4 ("eligible_for_%s (rtx delay_insn ATTRIBUTE_UNUSED, int slot, rtx candidate_insn, int flags ATTRIBUTE_UNUSED)\n",
   VAR_5);
  FUNC_4 ("{\n");
  FUNC_4 ("  rtx insn;\n");
  FUNC_4 ("\n");
  FUNC_4 ("  gcc_assert (slot < %d);\n", VAR_7);
  FUNC_4 ("\n");


  FUNC_4 ("  if (!INSN_P (candidate_insn))\n");
  FUNC_4 ("    return 0;\n");
  FUNC_4 ("\n");



  if (VAR_3 > 1)
    {
      VAR_10 = FUNC_1 (&VAR_1, 0);
      FUNC_3 (VAR_10);
      VAR_12 = FUNC_2 (VAR_10);

      FUNC_4 ("  insn = delay_insn;\n");
      FUNC_4 ("  switch (recog_memoized (insn))\n");
      FUNC_4 ("    {\n");

      FUNC_5 (VAR_8, " * %d;\n      break;", VAR_7);
      for (VAR_11 = VAR_10->first_value; VAR_11; VAR_11 = VAR_11->next)
 if (VAR_11 != VAR_12)
   FUNC_6 (VAR_10, VAR_11, 1, "slot +=", VAR_8, 4, VAR_4);

      FUNC_6 (VAR_10, VAR_12, 0, "slot +=", VAR_8, 4, VAR_4);
      FUNC_4 ("    }\n\n");


      FUNC_4 ("  gcc_assert (slot >= %d);\n\n", VAR_7);
    }


  if (VAR_3 == 1 && VAR_7 == 1)
    {
      FUNC_4 ("  insn = candidate_insn;\n");
      FUNC_4 ("  switch (recog_memoized (insn))\n");
      FUNC_4 ("    {\n");

      VAR_10 = FUNC_1 (&VAR_0, 0);
      FUNC_3 (VAR_10);
      VAR_12 = FUNC_2 (VAR_10);

      for (VAR_11 = VAR_10->first_value; VAR_11; VAR_11 = VAR_11->next)
 if (VAR_11 != VAR_12)
   FUNC_6 (VAR_10, VAR_11, 1, "return", ";", 4, VAR_4);

      FUNC_6 (VAR_10, VAR_12, 0, "return", ";", 4, VAR_4);
      FUNC_4 ("    }\n");
    }

  else
    {


      FUNC_4 ("  insn = candidate_insn;\n");
      FUNC_4 ("  switch (slot)\n");
      FUNC_4 ("    {\n");

      for (VAR_6 = VAR_2; VAR_6; VAR_6 = VAR_6->next)
 for (VAR_13 = 0; VAR_13 < FUNC_0 (VAR_6->def, 1); VAR_13 += 3)
   {
     FUNC_4 ("    case %d:\n",
      (VAR_13 / 3) + (VAR_3 == 1 ? 0 : VAR_6->num * VAR_7));
     FUNC_4 ("      switch (recog_memoized (insn))\n");
     FUNC_4 ("\t{\n");

     FUNC_5 (VAR_8, "*%s_%d_%d", VAR_5, VAR_6->num, VAR_13 / 3);
     VAR_9 = VAR_8;
     VAR_10 = FUNC_1 (&VAR_9, 0);
     FUNC_3 (VAR_10);
     VAR_12 = FUNC_2 (VAR_10);

     for (VAR_11 = VAR_10->first_value; VAR_11; VAR_11 = VAR_11->next)
       if (VAR_11 != VAR_12)
  FUNC_6 (VAR_10, VAR_11, 1, "return", ";", 8, VAR_4);

     FUNC_6 (VAR_10, VAR_12, 0, "return", ";", 8, VAR_4);
     FUNC_4 ("      }\n");
   }

      FUNC_4 ("    default:\n");
      FUNC_4 ("      gcc_unreachable ();\n");
      FUNC_4 ("    }\n");
    }

  FUNC_4 ("}\n\n");
}
