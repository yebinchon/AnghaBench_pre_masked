
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint64_t ;
typedef TYPE_2__* t_Handle ;
struct TYPE_24__ {scalar_t__ high; scalar_t__ low; } ;
typedef TYPE_3__ t_FmPhysAddr ;
typedef int t_FmPcdPrs ;
typedef int t_FmPcdPlcr ;
struct TYPE_25__ {int h_App; int f_ExceptionId; int f_Exception; scalar_t__ prsSupport; scalar_t__ plcrSupport; scalar_t__ kgSupport; int hc; scalar_t__ useHostCommand; int h_Fm; } ;
typedef TYPE_4__ t_FmPcdParams ;
typedef int t_FmPcdKg ;
typedef int t_FmPcdHcParams ;
struct TYPE_23__ {scalar_t__ guestId; int physicalMuramBase; void* h_ShadowSpinlock; scalar_t__ ccShadowAlign; scalar_t__ ccShadowSize; int * p_CcShadow; int h_App; int f_FmPcdIndexedException; int f_Exception; scalar_t__ numOfEnabledGuestPartitionsPcds; int acquiredLocksLst; int freeLocksLst; void* h_Spinlock; int * p_FmPcdPrs; int * p_FmPcdPlcr; int * p_FmPcdKg; int h_Hc; int params; struct TYPE_23__* h_FmPcd; int h_Fm; TYPE_1__* netEnvs; scalar_t__ h_FmMuram; struct TYPE_23__* p_FmPcdDriverParam; } ;
typedef TYPE_2__ t_FmPcdDriverParam ;
typedef TYPE_2__ t_FmPcd ;
typedef TYPE_2__ t_FmHcParams ;
typedef int hcParams ;
struct TYPE_22__ {int clsPlanGrpId; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_4__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (TYPE_2__*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (TYPE_4__*,int ,int *) ;
 int FUNC_11 (TYPE_2__*) ;
 void* FUNC_12 () ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (size_t*,size_t*,int) ;
 int FUNC_15 (TYPE_2__*,int ,int) ;

t_Handle FUNC_16(t_FmPcdParams *VAR_7)
{
    t_FmPcd *VAR_8 = ((void*)0);
    t_FmPhysAddr VAR_9;
    uint8_t VAR_10;

    FUNC_10(VAR_7, VAR_0,((void*)0));

    VAR_8 = (t_FmPcd *) FUNC_13(sizeof(t_FmPcd));
    if (!VAR_8)
    {
        FUNC_9(VAR_5, VAR_2, ("FM PCD"));
        return ((void*)0);
    }
    FUNC_15(VAR_8, 0, sizeof(t_FmPcd));

    VAR_8->p_FmPcdDriverParam = (t_FmPcdDriverParam *) FUNC_13(sizeof(t_FmPcdDriverParam));
    if (!VAR_8->p_FmPcdDriverParam)
    {
        FUNC_11(VAR_8);
        FUNC_9(VAR_5, VAR_2, ("FM PCD Driver Param"));
        return ((void*)0);
    }
    FUNC_15(VAR_8->p_FmPcdDriverParam, 0, sizeof(t_FmPcdDriverParam));

    VAR_8->h_Fm = VAR_7->h_Fm;
    VAR_8->guestId = FUNC_1(VAR_8->h_Fm);
    VAR_8->h_FmMuram = FUNC_2(VAR_8->h_Fm);
    if (VAR_8->h_FmMuram)
    {
        FUNC_3(VAR_7->h_Fm, &VAR_9);
        VAR_8->physicalMuramBase = (uint64_t)((uint64_t)(&VAR_9)->low | ((uint64_t)(&VAR_9)->high << 32));
    }

    for (VAR_10 = 0; VAR_10<VAR_3; VAR_10++)
        VAR_8->netEnvs[VAR_10].clsPlanGrpId = VAR_4;

    if (VAR_7->useHostCommand)
    {
        t_FmHcParams VAR_11;

        FUNC_15(&VAR_11, 0, sizeof(VAR_11));
        VAR_11.h_Fm = VAR_8->h_Fm;
        VAR_11.h_FmPcd = (t_Handle)VAR_8;
        FUNC_14((uint8_t*)&VAR_11.params, (uint8_t*)&VAR_7->hc, sizeof(t_FmPcdHcParams));
        VAR_8->h_Hc = FUNC_4(&VAR_11);
        if (!VAR_8->h_Hc)
        {
            FUNC_9(VAR_5, VAR_2, ("FM PCD HC"));
            FUNC_0(VAR_8);
            return ((void*)0);
        }
    }
    else if (VAR_8->guestId != VAR_6)
        FUNC_9(VAR_5, VAR_1, ("No Host Command defined for a guest partition."));

    if (VAR_7->kgSupport)
    {
        VAR_8->p_FmPcdKg = (t_FmPcdKg *)FUNC_6(VAR_8, VAR_7);
        if (!VAR_8->p_FmPcdKg)
        {
            FUNC_9(VAR_5, VAR_2, ("FM PCD Keygen"));
            FUNC_0(VAR_8);
            return ((void*)0);
        }
    }

    if (VAR_7->plcrSupport)
    {
        VAR_8->p_FmPcdPlcr = (t_FmPcdPlcr *)FUNC_7(VAR_8, VAR_7);
        if (!VAR_8->p_FmPcdPlcr)
        {
            FUNC_9(VAR_5, VAR_2, ("FM PCD Policer"));
            FUNC_0(VAR_8);
            return ((void*)0);
        }
    }

    if (VAR_7->prsSupport)
    {
        VAR_8->p_FmPcdPrs = (t_FmPcdPrs *)FUNC_8(VAR_8, VAR_7);
        if (!VAR_8->p_FmPcdPrs)
        {
            FUNC_9(VAR_5, VAR_2, ("FM PCD Parser"));
            FUNC_0(VAR_8);
            return ((void*)0);
        }
    }

    VAR_8->h_Spinlock = FUNC_12();
    if (!VAR_8->h_Spinlock)
    {
        FUNC_9(VAR_5, VAR_2, ("FM PCD spinlock"));
        FUNC_0(VAR_8);
        return ((void*)0);
    }
    FUNC_5(&VAR_8->freeLocksLst);
    FUNC_5(&VAR_8->acquiredLocksLst);

    VAR_8->numOfEnabledGuestPartitionsPcds = 0;

    VAR_8->f_Exception = VAR_7->f_Exception;
    VAR_8->f_FmPcdIndexedException = VAR_7->f_ExceptionId;
    VAR_8->h_App = VAR_7->h_App;

    VAR_8->p_CcShadow = ((void*)0);
    VAR_8->ccShadowSize = 0;
    VAR_8->ccShadowAlign = 0;

    VAR_8->h_ShadowSpinlock = FUNC_12();
    if (!VAR_8->h_ShadowSpinlock)
    {
        FUNC_9(VAR_5, VAR_2, ("FM PCD shadow spinlock"));
        FUNC_0(VAR_8);
        return ((void*)0);
    }

    return VAR_8;
}
