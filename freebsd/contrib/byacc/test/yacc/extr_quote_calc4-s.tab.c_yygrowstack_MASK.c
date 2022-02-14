
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int YYSTYPE ;
struct TYPE_3__ {unsigned int stacksize; int * s_base; int * s_last; int * l_mark; int * l_base; int * s_mark; } ;
typedef TYPE_1__ YYSTACKDATA ;
typedef int YYINT ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_1(YYSTACKDATA *VAR_3)
{
    int VAR_4;
    unsigned VAR_5;
    YYINT *VAR_6;
    YYSTYPE *VAR_7;

    if ((VAR_5 = VAR_3->stacksize) == 0)
        VAR_5 = VAR_1;
    else if (VAR_5 >= VAR_2)
        return VAR_0;
    else if ((VAR_5 *= 2) > VAR_2)
        VAR_5 = VAR_2;

    VAR_4 = (int) (VAR_3->s_mark - VAR_3->s_base);
    VAR_6 = (YYINT *)FUNC_0(VAR_3->s_base, VAR_5 * sizeof(*VAR_6));
    if (VAR_6 == 0)
        return VAR_0;

    VAR_3->s_base = VAR_6;
    VAR_3->s_mark = VAR_6 + VAR_4;

    VAR_7 = (YYSTYPE *)FUNC_0(VAR_3->l_base, VAR_5 * sizeof(*VAR_7));
    if (VAR_7 == 0)
        return VAR_0;

    VAR_3->l_base = VAR_7;
    VAR_3->l_mark = VAR_7 + VAR_4;

    VAR_3->stacksize = VAR_5;
    VAR_3->s_last = VAR_3->s_base + VAR_5 - 1;
    return 0;
}
