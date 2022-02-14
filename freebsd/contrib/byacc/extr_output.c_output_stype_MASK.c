
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(FILE * VAR_2)
{
    if (!VAR_1 && VAR_0 == 0)
    {
 FUNC_0(VAR_2, '\n');
 FUNC_1(VAR_2, "#if "
    "! defined(YYSTYPE) && "
    "! defined(YYSTYPE_IS_DECLARED)\n");
 FUNC_1(VAR_2, "/* Default: YYSTYPE is the semantic value type. */\n");
 FUNC_1(VAR_2, "typedef int YYSTYPE;\n");
 FUNC_1(VAR_2, "# define YYSTYPE_IS_DECLARED 1\n");
 FUNC_1(VAR_2, "#endif\n");
    }
}
