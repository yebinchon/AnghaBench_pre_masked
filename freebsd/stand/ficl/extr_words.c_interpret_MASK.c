
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_26__ {TYPE_3__** parseList; } ;
struct TYPE_25__ {int pStack; TYPE_5__* pSys; } ;
struct TYPE_24__ {scalar_t__ code; TYPE_1__* param; } ;
struct TYPE_23__ {scalar_t__ count; } ;
struct TYPE_22__ {scalar_t__ fn; } ;
typedef TYPE_2__ STRINGINFO ;
typedef TYPE_3__ FICL_WORD ;
typedef TYPE_4__ FICL_VM ;
typedef TYPE_5__ FICL_SYSTEM ;
typedef scalar_t__ (* FICL_PARSE_STEP ) (TYPE_4__*,TYPE_2__) ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_2__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (TYPE_4__*,TYPE_2__) ;
 TYPE_2__ FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*,char*,int,int ) ;

__attribute__((used)) static void FUNC_12(FICL_VM *VAR_3)
{
    STRINGINFO VAR_4;
    int VAR_5;
    FICL_SYSTEM *VAR_6;

    FUNC_2(VAR_3);

    VAR_6 = VAR_3->pSys;
    VAR_4 = FUNC_9(VAR_3);




    if (VAR_4.count == 0)
    {
        FUNC_10(VAR_3, VAR_1);
    }
    if (FUNC_4(VAR_3, VAR_4))
        return;

    for (VAR_5=0; VAR_5 < VAR_0; VAR_5++)
    {
        FICL_WORD *VAR_7 = VAR_6->parseList[VAR_5];

        if (VAR_7 == ((void*)0))
            break;

        if (VAR_7->code == VAR_2)
        {
            FICL_PARSE_STEP VAR_8;
            VAR_8 = (FICL_PARSE_STEP)(VAR_7->param->fn);
            if ((*VAR_8)(VAR_3, VAR_4))
                return;
        }
        else
        {
            FUNC_6(VAR_3->pStack, FUNC_1(VAR_4));
            FUNC_7(VAR_3->pStack, FUNC_0(VAR_4));
            FUNC_3(VAR_3, VAR_7);
            if (FUNC_5(VAR_3->pStack))
                return;
        }
    }

    VAR_5 = FUNC_0(VAR_4);
    FUNC_11(VAR_3, "%.*s not found", VAR_5, FUNC_1(VAR_4));

    return;
}
