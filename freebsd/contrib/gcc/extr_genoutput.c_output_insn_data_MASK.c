
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {char* name; char* filename; int lineno; int output_format; char* template; int code_number; int operand_number; int n_operands; int n_dups; int n_alternatives; struct data* next; } ;






 int FUNC_0 (char const) ;
 int FUNC_1 () ;
 struct data* VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  struct data *VAR_1;
  int VAR_2 = 0;
  int VAR_3;
  const char * VAR_4 = 0;
  const char * VAR_5 = 0;
  struct data *VAR_6;

  for (VAR_6 = VAR_0, VAR_3 = 1; VAR_6; VAR_6 = VAR_6->next, VAR_3++)
    if (VAR_6->name)
      {
 VAR_5 = VAR_6->name;
 break;
      }

  FUNC_2 ("#if GCC_VERSION >= 2007\n__extension__\n#endif\n");
  FUNC_2 ("\nconst struct insn_data insn_data[] = \n{\n");

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    {
      FUNC_2 ("  /* %s:%d */\n", VAR_1->filename, VAR_1->lineno);
      FUNC_2 ("  {\n");

      if (VAR_1->name)
 {
   FUNC_2 ("    \"%s\",\n", VAR_1->name);
   VAR_2 = 0;
   VAR_4 = VAR_1->name;
   VAR_5 = 0;
   for (VAR_6 = VAR_1->next, VAR_3 = 1; VAR_6;
        VAR_6 = VAR_6->next, VAR_3++)
     {
       if (VAR_6->name)
  {
    VAR_5 = VAR_6->name;
    break;
  }
     }
 }
      else
 {
   VAR_2++;
   if (VAR_5 && (VAR_4 == 0
       || VAR_2 > VAR_3 / 2))
     FUNC_2 ("    \"%s-%d\",\n", VAR_5,
      VAR_3 - VAR_2);
   else
     FUNC_2 ("    \"%s+%d\",\n", VAR_4, VAR_2);
 }

      switch (VAR_1->output_format)
 {
 case 129:
   FUNC_2 ("#if HAVE_DESIGNATED_INITIALIZERS\n");
   FUNC_2 ("    { 0 },\n");
   FUNC_2 ("#else\n");
   FUNC_2 ("    { 0, 0, 0 },\n");
   FUNC_2 ("#endif\n");
   break;
 case 128:
   {
     const char *VAR_7 = VAR_1->template;
     char VAR_8 = 0;

     FUNC_2 ("#if HAVE_DESIGNATED_INITIALIZERS\n");
     FUNC_2 ("    { .single =\n");
     FUNC_2 ("#else\n");
     FUNC_2 ("    {\n");
     FUNC_2 ("#endif\n");
     FUNC_2 ("    \"");
     while (*VAR_7)
       {
  if (FUNC_0 (*VAR_7) && VAR_8 != '\\')
    {


      if (*VAR_7 == '\n' && VAR_8 != '\r')
        FUNC_2 ("\\n\\\n");
    }
  else
    FUNC_3 (*VAR_7);
  VAR_8 = *VAR_7;
  ++VAR_7;
       }
     FUNC_2 ("\",\n");
     FUNC_2 ("#if HAVE_DESIGNATED_INITIALIZERS\n");
     FUNC_2 ("    },\n");
     FUNC_2 ("#else\n");
     FUNC_2 ("    0, 0 },\n");
     FUNC_2 ("#endif\n");
   }
   break;
 case 130:
   FUNC_2 ("#if HAVE_DESIGNATED_INITIALIZERS\n");
   FUNC_2 ("    { .multi = output_%d },\n", VAR_1->code_number);
   FUNC_2 ("#else\n");
   FUNC_2 ("    { 0, output_%d, 0 },\n", VAR_1->code_number);
   FUNC_2 ("#endif\n");
   break;
 case 131:
   FUNC_2 ("#if HAVE_DESIGNATED_INITIALIZERS\n");
   FUNC_2 ("    { .function = output_%d },\n", VAR_1->code_number);
   FUNC_2 ("#else\n");
   FUNC_2 ("    { 0, 0, output_%d },\n", VAR_1->code_number);
   FUNC_2 ("#endif\n");
   break;
 default:
   FUNC_1 ();
 }

      if (VAR_1->name && VAR_1->name[0] != '*')
 FUNC_2 ("    (insn_gen_fn) gen_%s,\n", VAR_1->name);
      else
 FUNC_2 ("    0,\n");

      FUNC_2 ("    &operand_data[%d],\n", VAR_1->operand_number);
      FUNC_2 ("    %d,\n", VAR_1->n_operands);
      FUNC_2 ("    %d,\n", VAR_1->n_dups);
      FUNC_2 ("    %d,\n", VAR_1->n_alternatives);
      FUNC_2 ("    %d\n", VAR_1->output_format);

      FUNC_2("  },\n");
    }
  FUNC_2 ("};\n\n\n");
}
