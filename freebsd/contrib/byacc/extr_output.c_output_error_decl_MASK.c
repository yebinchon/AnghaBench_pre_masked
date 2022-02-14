
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_5(FILE * VAR_2)
{
    FUNC_0(VAR_2, '\n');
    FUNC_1(VAR_2, "/* Parameters sent to yyerror. */\n");
    FUNC_1(VAR_2, "#ifndef YYERROR_DECL\n");
    FUNC_2(VAR_2, "#define YYERROR_DECL() yyerror(");




    FUNC_4(VAR_2, VAR_1, 1);
    FUNC_1(VAR_2, "const char *s)\n");
    FUNC_1(VAR_2, "#endif\n");

    FUNC_1(VAR_2, "#ifndef YYERROR_CALL\n");

    FUNC_2(VAR_2, "#define YYERROR_CALL(msg) yyerror(");




    FUNC_3(VAR_2, VAR_1, 1);
    FUNC_1(VAR_2, "msg)\n");

    FUNC_1(VAR_2, "#endif\n");
}
