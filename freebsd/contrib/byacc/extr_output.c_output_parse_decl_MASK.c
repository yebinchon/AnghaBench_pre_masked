
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(FILE * VAR_1)
{
    FUNC_0(VAR_1, '\n');
    FUNC_1(VAR_1, "/* compatibility with bison */\n");
    FUNC_1(VAR_1, "#ifdef YYPARSE_PARAM\n");
    FUNC_1(VAR_1, "/* compatibility with FreeBSD */\n");
    FUNC_1(VAR_1, "# ifdef YYPARSE_PARAM_TYPE\n");
    FUNC_1(VAR_1,
       "#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)\n");
    FUNC_1(VAR_1, "# else\n");
    FUNC_1(VAR_1, "#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)\n");
    FUNC_1(VAR_1, "# endif\n");
    FUNC_1(VAR_1, "#else\n");

    FUNC_2(VAR_1, "# define YYPARSE_DECL() yyparse(");
    FUNC_3(VAR_1, VAR_0, 0);
    FUNC_1(VAR_1, ")\n");

    FUNC_1(VAR_1, "#endif\n");
}
