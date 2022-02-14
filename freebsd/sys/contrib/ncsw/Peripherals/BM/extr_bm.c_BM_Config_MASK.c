
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* t_Handle ;
typedef int t_BmRegs ;
struct TYPE_12__ {int guestId; int liodn; int fbprMemPartitionId; int totalNumOfBuffers; int errIrq; int h_App; int f_Exception; int baseAddress; int partBpidBase; int partNumOfPools; } ;
typedef TYPE_2__ t_BmParam ;
struct TYPE_11__ {int guestId; struct TYPE_11__* p_BmDriverParams; struct TYPE_11__* moduleName; int liodn; int fbprThreshold; int fbprMemPartitionId; int totalNumOfBuffers; int errIrq; int h_App; int f_Exception; int exceptions; int * p_BmRegs; int partBpidBase; int partNumOfPools; } ;
typedef TYPE_1__ t_BmDriverParams ;
typedef TYPE_1__ t_Bm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

t_Handle FUNC_7(t_BmParam *VAR_8)
{
    t_Bm *VAR_9;

    FUNC_1(VAR_8, VAR_2, ((void*)0));

    VAR_9 = (t_Bm *)FUNC_5(sizeof(t_Bm));
    if (!VAR_9)
    {
        FUNC_0(VAR_5, VAR_4, ("BM obj!!!"));
        return ((void*)0);
    }
    FUNC_6(VAR_9, 0, sizeof(t_Bm));

    VAR_9->p_BmDriverParams = (t_BmDriverParams *)FUNC_5(sizeof(t_BmDriverParams));
    if (!VAR_9->p_BmDriverParams)
    {
        FUNC_4(VAR_9);
        FUNC_0(VAR_5, VAR_4, ("Bm driver parameters"));
        return ((void*)0);
    }
    FUNC_6(VAR_9->p_BmDriverParams, 0, sizeof(t_BmDriverParams));

    VAR_9->guestId = VAR_8->guestId;
    VAR_9->p_BmDriverParams->partNumOfPools = VAR_8->partNumOfPools;
    VAR_9->p_BmDriverParams->partBpidBase = VAR_8->partBpidBase;
    VAR_9->p_BmRegs = (t_BmRegs *)FUNC_3(VAR_8->baseAddress);

    if (VAR_9->guestId == VAR_7)
    {
        VAR_9->exceptions = VAR_0;
        VAR_9->f_Exception = VAR_8->f_Exception;
        VAR_9->h_App = VAR_8->h_App;
        VAR_9->errIrq = VAR_8->errIrq;
        VAR_9->p_BmDriverParams->totalNumOfBuffers = VAR_8->totalNumOfBuffers;
        VAR_9->p_BmDriverParams->fbprMemPartitionId = VAR_8->fbprMemPartitionId;
        VAR_9->p_BmDriverParams->fbprThreshold = VAR_1;
        VAR_9->p_BmDriverParams->liodn = VAR_8->liodn;

    }

    FUNC_6(VAR_9->moduleName, 0, VAR_6);
    if(FUNC_2 (VAR_9->moduleName, "BM_0_%d",VAR_9->guestId) != (VAR_9->guestId<10 ? 6:7))
    {
        FUNC_4(VAR_9->p_BmDriverParams);
        FUNC_4(VAR_9);
        FUNC_0(VAR_5, VAR_3, ("Sprint failed"));
        return ((void*)0);
    }
    return VAR_9;
}
