
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef short YYSTYPE ;
struct TYPE_3__ {unsigned int stacksize; short* s_mark; short* s_base; short* l_base; short* l_mark; short* p_base; short* p_mark; short* s_last; } ;
typedef TYPE_1__ YYSTACKDATA ;
typedef short YYLTYPE ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,char*,char*,unsigned int) ;
 scalar_t__ FUNC_1 (short*,unsigned int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_2(YYSTACKDATA *VAR_6)
{
    int VAR_7;
    unsigned VAR_8;
    short *VAR_9;
    YYSTYPE *VAR_10;




    if ((VAR_8 = VAR_6->stacksize) == 0)
        VAR_8 = VAR_1;
    else if (VAR_8 >= VAR_2)
        return VAR_0;
    else if ((VAR_8 *= 2) > VAR_2)
        VAR_8 = VAR_2;

    VAR_7 = (int) (VAR_6->s_mark - VAR_6->s_base);
    VAR_9 = (short *)FUNC_1(VAR_6->s_base, VAR_8 * sizeof(*VAR_9));
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
