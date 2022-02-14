
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * envp; } ;
struct TYPE_5__ {int * param; } ;
typedef int STRINGINFO ;
typedef TYPE_1__ FICL_WORD ;
typedef int FICL_UNS ;
typedef TYPE_2__ FICL_SYSTEM ;
typedef int FICL_DICT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 TYPE_1__* FUNC_4 (int *,int ) ;

void FUNC_5(FICL_SYSTEM *VAR_2, char *VAR_3, FICL_UNS VAR_4)
{
    STRINGINFO VAR_5;
    FICL_WORD *VAR_6;
    FICL_DICT *VAR_7 = VAR_2->envp;

    FUNC_1(VAR_5, VAR_3);
    VAR_6 = FUNC_4(VAR_7, VAR_5);

    if (VAR_6 == ((void*)0))
    {
        FUNC_3(VAR_7, VAR_3, VAR_1, VAR_0);
        FUNC_2(VAR_7, FUNC_0(VAR_4));
    }
    else
    {
        VAR_6->param[0] = FUNC_0(VAR_4);
    }

    return;
}
