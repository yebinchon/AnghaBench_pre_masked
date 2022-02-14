
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (int *,char*) ;
 char* VAR_2 ;

__attribute__((used)) static void
FUNC_5(FILE * VAR_3)
{
    if (VAR_2 == ((void*)0))
    {
 VAR_2 = "yy";
    }
    else
    {
 FUNC_1(VAR_3, "yyparse");
 FUNC_1(VAR_3, "yylex");
 FUNC_1(VAR_3, "yyerror");
 FUNC_1(VAR_3, "yychar");
 FUNC_1(VAR_3, "yyval");
 FUNC_1(VAR_3, "yylval");
 FUNC_1(VAR_3, "yydebug");
 FUNC_1(VAR_3, "yynerrs");
 FUNC_1(VAR_3, "yyerrflag");
 FUNC_1(VAR_3, "yylhs");
 FUNC_1(VAR_3, "yylen");
 FUNC_1(VAR_3, "yydefred");



 FUNC_1(VAR_3, "yydgoto");
 FUNC_1(VAR_3, "yysindex");
 FUNC_1(VAR_3, "yyrindex");
 FUNC_1(VAR_3, "yygindex");
 FUNC_1(VAR_3, "yytable");
 FUNC_1(VAR_3, "yycheck");
 FUNC_1(VAR_3, "yyname");
 FUNC_1(VAR_3, "yyrule");
    }
    if (FUNC_0(VAR_3))
 ++VAR_1;
    FUNC_2(VAR_3, "#define YYPREFIX \"%s\"\n", VAR_2);
}
