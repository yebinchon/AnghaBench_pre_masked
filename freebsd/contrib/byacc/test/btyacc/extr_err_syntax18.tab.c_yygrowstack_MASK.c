
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int YYSTYPE ;
struct TYPE_3__ {unsigned int stacksize; int * s_base; int * s_last; int * p_mark; int * p_base; int * l_mark; int * l_base; int * s_mark; } ;
typedef TYPE_1__ YYSTACKDATA ;
typedef int YYLTYPE ;
typedef int YYINT ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,char*,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_2(YYSTACKDATA *VAR_6)
{
    int VAR_7;
    unsigned VAR_8;
    YYINT *VAR_9;
    YYSTYPE *VAR_10;




    if ((VAR_8 = VAR_6->stacksize) == 0)
        VAR_8 = VAR_1;
    else if (VAR_8 >= VAR_2)
        return VAR_0;
    else if ((VAR_8 *= 2) > VAR_2)
        VAR_8 = VAR_2;

    VAR_7 = (int) (VAR_6->s_mark - VAR_6->s_base);
    VAR_9 = (YYINT *)FUNC_1(VAR_6->s_base, VAR_8 * sizeof(*VAR_9));
    if (VAR_9 == 0)
        return VAR_0;

    VAR_6->s_base = VAR_9;
    VAR_6->s_mark = VAR_9 + VAR_7;

    VAR_10 = (YYSTYPE *)FUNC_1(VAR_6->l_base, VAR_8 * sizeof(*VAR_10));
    if (VAR_10 == 0)
        return VAR_0;

    VAR_6->l_base = VAR_10;
    VAR_6->l_mark = VAR_10 + VAR_7;
    VAR_6->stacksize = VAR_8;
    VAR_6->s_last = VAR_6->s_base + VAR_8 - 1;





    return 0;
}
