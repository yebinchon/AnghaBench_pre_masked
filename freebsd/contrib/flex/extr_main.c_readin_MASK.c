
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ VAR_13 ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (int *,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (char*,int *) ;
 int FUNC_14 (char*,scalar_t__) ;
 int FUNC_15 (char*) ;
 int VAR_17 ;
 int FUNC_16 (char*) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ VAR_30 ;

void FUNC_18 ()
{
 static char VAR_31[] = "FILE *yyin = stdin, *yyout = stdout;";
 static char VAR_32[] =
  "FILE *yyin = (FILE *) 0, *yyout = (FILE *) 0;";

 FUNC_12 ((FILE *) 0, 1);

 if (FUNC_17 ()) {
  FUNC_16 (FUNC_3("fatal parse error"));
  FUNC_6 (1);
 }

 if (VAR_24)
  FUNC_6 (1);
 if (VAR_18) {





 }

 if (FUNC_10 ("POSIXLY_CORRECT")) {
  VAR_18 = 1;
 }

 if (VAR_4) {
  VAR_3 = FUNC_8 (VAR_2, "w");
  if (VAR_3 == ((void*)0))
   FUNC_11 (FUNC_3
    ("could not create backing-up info file %s"),
    VAR_2);
 }

 else
  VAR_3 = ((void*)0);

 if (VAR_28 == 1)
  VAR_29 = 1;
 else if (VAR_28 == 0)
  VAR_29 = 0;

 if (VAR_22 == 1)
  VAR_21 = 1;
 else if (VAR_22 == 0)
  VAR_21 = 0;

 if (VAR_17 > 0) {
  if (VAR_14) {
   FUNC_9 (VAR_23,
     FUNC_3
     ("-l AT&T lex compatibility option entails a large performance penalty\n"));
   FUNC_9 (VAR_23,
     FUNC_3
     (" and may be the actual source of other reported performance penalties\n"));
  }

  else if (VAR_8) {
   FUNC_9 (VAR_23,
     FUNC_3
     ("%%option yylineno entails a performance penalty ONLY on rules that can match newline characters\n"));
  }

  if (VAR_17 > 1) {
   if (VAR_13)
    FUNC_9 (VAR_23,
      FUNC_3
      ("-I (interactive) entails a minor performance penalty\n"));

   if (VAR_29)
    FUNC_9 (VAR_23,
      FUNC_3
      ("yymore() entails a minor performance penalty\n"));
  }

  if (VAR_21)
   FUNC_9 (VAR_23,
     FUNC_3
     ("REJECT entails a large performance penalty\n"));

  if (VAR_26)
   FUNC_9 (VAR_23,
     FUNC_3
     ("Variable trailing context rules entail a large performance penalty\n"));
 }

 if (VAR_21)
  VAR_19 = 1;

 if (VAR_26)
  VAR_21 = 1;

 if ((VAR_12 || VAR_11) && VAR_21) {
  if (VAR_19)
   FUNC_7 (FUNC_3
       ("REJECT cannot be used with -f or -F"));
  else if (VAR_8)
   FUNC_7 (FUNC_3
       ("%option yylineno cannot be used with REJECT"));
  else
   FUNC_7 (FUNC_3
       ("variable trailing context rules cannot be used with -f or -F"));
 }

 if (VAR_21){
        FUNC_13( "M4_YY_USES_REJECT", ((void*)0));

    }

 if (!VAR_9) {
  if (!VAR_0) {
    if (VAR_20)
    FUNC_15 ("\n#define yywrap(yyscanner) 1");
    else
    FUNC_15 ("\n#define yywrap() 1");
  }
  FUNC_15 ("#define YY_SKIP_YYWRAP");
 }

 if (VAR_6)
  FUNC_15 ("\n#define FLEX_DEBUG");

 FUNC_1 ();
 if (VAR_5 == 256)
  FUNC_15 ("typedef unsigned char YY_CHAR;");
 else
  FUNC_15 ("typedef char YY_CHAR;");
 FUNC_2 ();

 if (VAR_0) {
  FUNC_15 ("#define yytext_ptr yytext");

  if (VAR_13)
   FUNC_15 ("#define YY_INTERACTIVE");
 }

 else {
  FUNC_1 ();

  if (VAR_7) {
   if (VAR_20){
                FUNC_15 ("#ifdef VMS");
                FUNC_15 ("#ifdef __VMS_POSIX");
                FUNC_15 ("#define YY_STDINIT");
                FUNC_15 ("#endif");
                FUNC_15 ("#else");
                FUNC_15 ("#define YY_STDINIT");
                FUNC_15 ("#endif");
            }

   FUNC_15 ("#ifdef VMS");
   FUNC_15 ("#ifndef __VMS_POSIX");
   FUNC_15 (VAR_32);
   FUNC_15 ("#else");
   FUNC_15 (VAR_31);
   FUNC_15 ("#endif");
   FUNC_15 ("#else");
   FUNC_15 (VAR_31);
   FUNC_15 ("#endif");
  }

  else {
   if(!VAR_20)
                FUNC_15 (VAR_32);
  }
  FUNC_2 ();
 }

 FUNC_1 ();
 if (VAR_11)
  FUNC_15 ("typedef yyconst struct yy_trans_info *yy_state_type;");
 else if (!VAR_0)
  FUNC_15 ("typedef int yy_state_type;");
 FUNC_2 ();

 if (VAR_14)
  FUNC_15 ("#define YY_FLEX_LEX_COMPAT");

 if (!VAR_0 && !VAR_20) {
  FUNC_15 ("extern int yylineno;");
  FUNC_1 ();
  FUNC_15 ("int yylineno = 1;");
  FUNC_2 ();
 }

 if (VAR_0) {
  FUNC_15 ("\n#include <FlexLexer.h>");

   if (!VAR_9) {
   FUNC_15("\nint yyFlexLexer::yywrap() { return 1; }");
  }

  if (VAR_27) {
   FUNC_15 ("int yyFlexLexer::yylex()");
   FUNC_15 ("\t{");
   FUNC_15 ("\tLexerError( \"yyFlexLexer::yylex invoked but %option yyclass used\" );");
   FUNC_15 ("\treturn 0;");
   FUNC_15 ("\t}");

   FUNC_14 ("\n#define YY_DECL int %s::yylex()\n",
     VAR_27);
  }
 }

 else {




  if (VAR_30) {
   if (!VAR_20)
    FUNC_15 ("extern char yytext[];\n");
  }
  else {
   if (VAR_20) {
    FUNC_15 ("#define yytext_ptr yytext_r");
   }
   else {
    FUNC_15 ("extern char *yytext;");
    FUNC_15 ("#define yytext_ptr yytext");
   }
  }

  if (VAR_27)
   FUNC_7 (FUNC_3
       ("%option yyclass only meaningful for C++ scanners"));
 }

 if (VAR_25)
  VAR_16 = FUNC_5 (VAR_15, VAR_10, VAR_5);
 else
  VAR_16 = VAR_5;


 VAR_10[0] = VAR_10[VAR_5];
 VAR_1 = FUNC_0 (VAR_10[0]);

 if (VAR_25)
  FUNC_4 ();
}
