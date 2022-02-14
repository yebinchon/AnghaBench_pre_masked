
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


typedef int jmp_buf ;
struct TYPE_24__ {TYPE_17__* localp; TYPE_4__** pInterp; int * dp; } ;
struct TYPE_21__ {int i; } ;
struct TYPE_23__ {int fRestart; int * pState; int state; TYPE_2__ sourceID; TYPE_1__* runningWord; TYPE_5__* pSys; } ;
struct TYPE_22__ {int size; } ;
struct TYPE_20__ {int (* code ) (TYPE_4__*) ;} ;
struct TYPE_19__ {TYPE_3__* pForthWords; } ;
typedef int TIB ;
typedef TYPE_4__ FICL_VM ;
typedef TYPE_5__ FICL_SYSTEM ;
typedef int FICL_INT ;
typedef int FICL_DICT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_17__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_4__*,TYPE_4__**) ;
 int FUNC_12 (TYPE_4__*,char*,int ,int *) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;

int FUNC_15(FICL_VM *VAR_2, char *VAR_3, FICL_INT VAR_4)
{
    FICL_SYSTEM *VAR_5 = VAR_2->pSys;
    FICL_DICT *VAR_6 = VAR_5->dp;

    int VAR_7;
    jmp_buf VAR_8;
    jmp_buf *VAR_9;
    TIB VAR_10;

    FUNC_0(VAR_2);
    FUNC_0(VAR_5->pInterp[0]);

    if (VAR_4 < 0)
        VAR_4 = FUNC_6(VAR_3);

    FUNC_12(VAR_2, VAR_3, VAR_4, &VAR_10);




    VAR_9 = VAR_2->pState;
    VAR_2->pState = &VAR_8;
    VAR_7 = FUNC_5(VAR_8);

    switch (VAR_7)
    {
    case 0:
        if (VAR_2->fRestart)
        {
            VAR_2->runningWord->code(VAR_2);
            VAR_2->fRestart = 0;
        }
        else
        {
            FUNC_11(VAR_2, &(VAR_5->pInterp[0]));
        }

        FUNC_8(VAR_2);
        break;

    case 129:
        VAR_2->fRestart = 1;
        VAR_7 = 131;
        break;

    case 131:
        FUNC_9(VAR_2);




        break;

    case 128:
    case 132:
    case 134:
        break;

    case 130:
        if (VAR_2->state == VAR_0)
        {
            FUNC_1(VAR_6);



        }
        FUNC_13(VAR_2);
        break;

    case 133:
    case 136:
    case 135:
    default:
        if (VAR_2->state == VAR_0)
        {
            FUNC_1(VAR_6);



        }
        FUNC_3(VAR_6);
        FUNC_14(VAR_2);
        break;
   }

    VAR_2->pState = VAR_9;
    FUNC_10(VAR_2, &VAR_10);
    return (VAR_7);
}
