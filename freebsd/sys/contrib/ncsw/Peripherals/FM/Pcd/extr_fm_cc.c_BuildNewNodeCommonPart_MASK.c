
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* t_Handle ;
struct TYPE_7__ {int numOfKeys; int p_KeysMatchTableOld; int p_AdTableOld; void* p_KeysMatchTableNew; int * p_AdTableNew; } ;
typedef TYPE_1__ t_FmPcdModifyCcKeyAdditionalParams ;
struct TYPE_8__ {int ccKeySizeAccExtraction; int maxNumOfKeys; int keysMatchTableMaxSize; int h_KeysMatchTable; int h_AdTable; TYPE_3__* h_FmPcd; scalar_t__ lclMask; } ;
typedef TYPE_2__ t_FmPcdCcNode ;
struct TYPE_9__ {void* p_CcShadow; } ;
typedef TYPE_3__ t_FmPcd ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int) ;
 void* FUNC_4 (void*,int) ;
 int FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static t_Error FUNC_6(
        t_FmPcdCcNode *VAR_6, int *VAR_7,
        t_FmPcdModifyCcKeyAdditionalParams *VAR_8)
{
    t_FmPcd *VAR_9 = (t_FmPcd *)VAR_6->h_FmPcd;

    if (VAR_6->lclMask)
        *VAR_7 = 2 * VAR_6->ccKeySizeAccExtraction;
    else
        *VAR_7 = VAR_6->ccKeySizeAccExtraction;

    if (VAR_6->maxNumOfKeys == 0)
    {
        VAR_8->p_AdTableNew = (t_Handle)FUNC_0(
                FUNC_2(VAR_9),
                (uint32_t)((VAR_8->numOfKeys + 1)
                        * VAR_2),
                VAR_3);
        if (!VAR_8->p_AdTableNew)
            FUNC_5(
                    VAR_5, VAR_0,
                    ("MURAM allocation for CC node action descriptors table"));

        VAR_8->p_KeysMatchTableNew = (t_Handle)FUNC_0(
                FUNC_2(VAR_9),
                (uint32_t)(*VAR_7 * sizeof(uint8_t)
                        * (VAR_8->numOfKeys + 1)),
                VAR_4);
        if (!VAR_8->p_KeysMatchTableNew)
        {
            FUNC_1(FUNC_2(VAR_6->h_FmPcd),
                             VAR_8->p_AdTableNew);
            VAR_8->p_AdTableNew = ((void*)0);
            FUNC_5(VAR_5, VAR_0,
                         ("MURAM allocation for CC node key match table"));
        }

        FUNC_3(
                (uint8_t*)VAR_8->p_AdTableNew,
                0,
                (uint32_t)((VAR_8->numOfKeys + 1)
                        * VAR_2));
        FUNC_3((uint8_t*)VAR_8->p_KeysMatchTableNew, 0,
                   *VAR_7 * sizeof(uint8_t) * (VAR_8->numOfKeys + 1));
    }
    else
    {
        if (!VAR_9->p_CcShadow)
            FUNC_5(VAR_5, VAR_0, ("CC Shadow not allocated"));

        VAR_8->p_KeysMatchTableNew =
                FUNC_4(VAR_9->p_CcShadow, VAR_2);
        VAR_8->p_AdTableNew =
                FUNC_4(VAR_8->p_KeysMatchTableNew, VAR_6->keysMatchTableMaxSize);

        FUNC_3(
                (uint8_t*)VAR_8->p_AdTableNew,
                0,
                (uint32_t)((VAR_6->maxNumOfKeys + 1)
                        * VAR_2));
        FUNC_3((uint8_t*)VAR_8->p_KeysMatchTableNew, 0,
                   (*VAR_7) * sizeof(uint8_t) * (VAR_6->maxNumOfKeys));
    }

    VAR_8->p_AdTableOld = VAR_6->h_AdTable;
    VAR_8->p_KeysMatchTableOld = VAR_6->h_KeysMatchTable;

    return VAR_1;
}
