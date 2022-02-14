
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (int *,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(FILE * VAR_3)
{
    FUNC_0(VAR_3, '\n');
    FUNC_1(VAR_3, "/* Parameters sent to lex. */\n");
    FUNC_1(VAR_3, "#ifdef YYLEX_PARAM\n");
    if (VAR_2)
    {
 FUNC_1(VAR_3, "# ifdef YYLEX_PARAM_TYPE\n");
 {
     FUNC_1(VAR_3, "#  define YYLEX_DECL() yylex(YYSTYPE *yylval,"
        " YYLEX_PARAM_TYPE YYLEX_PARAM)\n");
 }
 FUNC_1(VAR_3, "# else\n");
 {
     FUNC_1(VAR_3, "#  define YYLEX_DECL() yylex(YYSTYPE *yylval,"
        " void * YYLEX_PARAM)\n");
 }
 FUNC_1(VAR_3, "# endif\n");






     FUNC_1(VAR_3, "# define YYLEX yylex(&yylval, YYLEX_PARAM)\n");
    }
    else
    {
 FUNC_1(VAR_3, "# define YYLEX_DECL() yylex(void *YYLEX_PARAM)\n");
 FUNC_1(VAR_3, "# define YYLEX yylex(YYLEX_PARAM)\n");
    }
    FUNC_1(VAR_3, "#else\n");
    if (VAR_2 && VAR_0)
    {






     FUNC_2(VAR_3, "# define YYLEX_DECL() yylex(YYSTYPE *yylval, ");
 FUNC_4(VAR_3, VAR_0, 0);
 FUNC_1(VAR_3, ")\n");






     FUNC_2(VAR_3, "# define YYLEX yylex(&yylval, ");
 FUNC_3(VAR_3, VAR_0, 0);
 FUNC_1(VAR_3, ")\n");
    }
    else if (VAR_2)
    {
 {
     FUNC_1(VAR_3, "# define YYLEX_DECL() yylex(YYSTYPE *yylval)\n");
     FUNC_1(VAR_3, "# define YYLEX yylex(&yylval)\n");
 }
    }
    else if (VAR_0)
    {
 FUNC_2(VAR_3, "# define YYLEX_DECL() yylex(");
 FUNC_4(VAR_3, VAR_0, 0);
 FUNC_1(VAR_3, ")\n");

 FUNC_2(VAR_3, "# define YYLEX yylex(");
 FUNC_3(VAR_3, VAR_0, 0);
 FUNC_1(VAR_3, ")\n");
    }
    else
    {
 FUNC_1(VAR_3, "# define YYLEX_DECL() yylex(void)\n");
 FUNC_1(VAR_3, "# define YYLEX yylex()\n");
    }
    FUNC_1(VAR_3, "#endif\n");
}
