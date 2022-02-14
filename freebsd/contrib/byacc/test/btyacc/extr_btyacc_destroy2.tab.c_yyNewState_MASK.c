
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int YYSTYPE ;
struct TYPE_4__ {unsigned int stacksize; int * p_base; int * l_base; int * s_base; } ;
struct TYPE_5__ {TYPE_1__ yystack; } ;
typedef TYPE_2__ YYParseState ;
typedef int YYLTYPE ;
typedef int YYINT ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,int ,unsigned int) ;

__attribute__((used)) static YYParseState *
FUNC_2(unsigned VAR_0)
{
    YYParseState *VAR_1 = (YYParseState *) FUNC_0(sizeof(YYParseState));
    if (VAR_1 == ((void*)0)) return ((void*)0);

    VAR_1->yystack.stacksize = VAR_0;
    if (VAR_0 == 0)
    {
        VAR_1->yystack.s_base = ((void*)0);
        VAR_1->yystack.l_base = ((void*)0);



        return VAR_1;
    }
    VAR_1->yystack.s_base = (YYINT *) FUNC_0(VAR_0 * sizeof(YYINT));
    if (VAR_1->yystack.s_base == ((void*)0)) return ((void*)0);
    VAR_1->yystack.l_base = (YYSTYPE *) FUNC_0(VAR_0 * sizeof(YYSTYPE));
    if (VAR_1->yystack.l_base == ((void*)0)) return ((void*)0);
    FUNC_1(VAR_1->yystack.l_base, 0, VAR_0 * sizeof(YYSTYPE));






    return VAR_1;
}
