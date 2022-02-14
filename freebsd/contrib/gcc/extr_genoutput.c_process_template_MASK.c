
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {char const* template; int code_number; int n_alternatives; int output_format; int lineno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7 (struct data *VAR_4, const char *VAR_5)
{
  const char *VAR_6;
  int VAR_7;


  if (VAR_5[0] == '*')
    {
      VAR_4->template = 0;
      VAR_4->output_format = VAR_0;

      FUNC_6 ("\nstatic const char *");
      FUNC_4 ("output_%d (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)\n",
       VAR_4->code_number);
      FUNC_6 ("{");
      FUNC_3 (VAR_5);
      FUNC_6 (VAR_5 + 1);
      FUNC_6 ("}");
    }



  else if (VAR_5[0] == '@')
    {
      VAR_4->template = 0;
      VAR_4->output_format = VAR_1;

      FUNC_4 ("\nstatic const char * const output_%d[] = {\n", VAR_4->code_number);

      for (VAR_7 = 0, VAR_6 = &VAR_5[1]; *VAR_6; )
 {
   const char *VAR_8, *VAR_9;

   while (FUNC_0 (*VAR_6))
     VAR_6++;

   FUNC_4 ("  \"");

   for (VAR_8 = VAR_9 = VAR_6; !FUNC_1 (*VAR_8) && *VAR_8 != '\0'; ++VAR_8)
     if (!FUNC_0 (*VAR_8))
       VAR_9 = VAR_8 + 1;

   if (VAR_9 != VAR_8)
     FUNC_2 (VAR_4->lineno,
          "trailing whitespace in output template");

   while (VAR_6 < VAR_9)
     {
       FUNC_5 (*VAR_6);
       VAR_6++;
     }

   FUNC_4 ("\",\n");
   VAR_7++;
 }
      if (VAR_7 == 1)
 FUNC_2 (VAR_4->lineno,
      "'@' is redundant for output template with single alternative");
      if (VAR_7 != VAR_4->n_alternatives)
 {
   FUNC_2 (VAR_4->lineno,
        "wrong number of alternatives in the output template");
   VAR_3 = 1;
 }

      FUNC_4 ("};\n");
    }
  else
    {
      VAR_4->template = VAR_5;
      VAR_4->output_format = VAR_2;
    }
}
