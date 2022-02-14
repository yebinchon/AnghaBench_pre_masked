
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_21__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_29__ {char* cp; int index; char* end; } ;
struct TYPE_32__ {char* pad; TYPE_4__* runningWord; TYPE_2__ tib; int pStack; TYPE_4__** ip; scalar_t__ fRestart; TYPE_21__* pSys; } ;
struct TYPE_31__ {char* nName; int name; } ;
struct TYPE_30__ {int count; int cp; } ;
struct TYPE_27__ {TYPE_4__* origXT; TYPE_4__* address; } ;
struct TYPE_28__ {TYPE_1__ bpStep; } ;
typedef TYPE_3__ STRINGINFO ;
typedef TYPE_4__** IPTYPE ;
typedef TYPE_4__ FICL_WORD ;
typedef TYPE_6__ FICL_VM ;
typedef int CELL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,char*,int) ;
 int FUNC_3 (TYPE_6__*,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_21__*,char*) ;
 int FUNC_5 (TYPE_6__*,int ,int ) ;
 TYPE_4__* FUNC_6 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (char*,char*,char*,int ) ;
 int FUNC_10 (int ,TYPE_4__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int ,char*,int ) ;
 TYPE_3__ FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_6__*,char*,int) ;
 int FUNC_17 (TYPE_6__*,int) ;

void FUNC_18(FICL_VM *VAR_4)
{
    STRINGINFO VAR_5;
    FICL_WORD *VAR_6;
    FICL_WORD *VAR_7;

    if (!VAR_4->fRestart)
    {
        FUNC_0(VAR_4->pSys->bpStep.address);
        FUNC_0(VAR_4->pSys->bpStep.origXT);





        VAR_4->ip = (IPTYPE)(VAR_4->pSys->bpStep.address);
        *VAR_4->ip = VAR_4->pSys->bpStep.origXT;




        VAR_7 = FUNC_4(VAR_4->pSys, "on-step");
        if (VAR_7)
            FUNC_3(VAR_4, VAR_7);




        VAR_6 = VAR_4->pSys->bpStep.origXT;
        FUNC_9(VAR_4->pad, "next: %.*s", VAR_6->nName, VAR_6->name);







        FUNC_16(VAR_4, VAR_4->pad, 1);
        FUNC_1(VAR_4);
    }
    else
    {
        VAR_4->fRestart = 0;
    }

    VAR_5 = FUNC_15(VAR_4);

    if (!FUNC_14(VAR_5.cp, "i", VAR_5.count))
    {
        FUNC_11(VAR_4);
    }
    else if (!FUNC_14(VAR_5.cp, "g", VAR_5.count))
    {
        return;
    }
    else if (!FUNC_14(VAR_5.cp, "l", VAR_5.count))
    {
        FICL_WORD *VAR_8;
        VAR_8 = FUNC_6(VAR_4, (CELL *)(VAR_4->ip));
        if (VAR_8)
        {
            FUNC_10(VAR_4->pStack, VAR_8);
            FUNC_8(VAR_4);
        }
        else
        {
            FUNC_16(VAR_4, "sorry - can't do that", 1);
        }
        FUNC_17(VAR_4, VAR_3);
    }
    else if (!FUNC_14(VAR_5.cp, "o", VAR_5.count))
    {
        FUNC_12(VAR_4);
    }
    else if (!FUNC_14(VAR_5.cp, "q", VAR_5.count))
    {
        FUNC_5(VAR_4, VAR_0, 0);
        FUNC_17(VAR_4, VAR_1);
    }
    else if (!FUNC_14(VAR_5.cp, "x", VAR_5.count))
    {



        int VAR_9;
        char *VAR_10 = VAR_4->tib.cp + VAR_4->tib.index;
        int VAR_11 = VAR_4->tib.end - VAR_10;
        FICL_WORD *VAR_12 = VAR_4->runningWord;

        VAR_9 = FUNC_2(VAR_4, VAR_10, VAR_11);

        if (VAR_9 == VAR_2)
        {
            VAR_9 = VAR_3;
            VAR_4->runningWord = VAR_12;
            FUNC_16(VAR_4, "", 1);
        }

        FUNC_17(VAR_4, VAR_9);
    }
    else
    {
        FUNC_16(VAR_4, "i -- step In", 1);
        FUNC_16(VAR_4, "o -- step Over", 1);
        FUNC_16(VAR_4, "g -- Go (execute to completion)", 1);
        FUNC_16(VAR_4, "l -- List source code", 1);
        FUNC_16(VAR_4, "q -- Quit (stop debugging and abort)", 1);
        FUNC_16(VAR_4, "x -- eXecute the rest of the line as ficl words", 1);
        FUNC_1(VAR_4);
        FUNC_17(VAR_4, VAR_3);
    }

    return;
}
