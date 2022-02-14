
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_Handle ;
struct TYPE_2__ {scalar_t__ portType; int pcdEngines; int lock; int * h_ReassemblyTree; int h_FmPcd; scalar_t__ includeInPrsStatistics; int hardwarePortId; int netEnvId; int h_Spinlock; scalar_t__ imEn; int p_FmPortDriverParam; } ;
typedef TYPE_1__ t_FmPort ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,char*) ;
 int FUNC_11 (int,int ) ;
 int VAR_9 ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

t_Error FUNC_13(t_Handle VAR_13)
{
    t_FmPort *VAR_14 = (t_FmPort*)VAR_13;
    t_Error VAR_15 = VAR_4;

    FUNC_11(VAR_13, VAR_1);
    FUNC_11(!VAR_14->p_FmPortDriverParam, VAR_3);

    if (VAR_14->imEn)
        FUNC_10(VAR_7, VAR_2,
                     ("available for non-independant mode ports only"));

    if ((VAR_14->portType != VAR_12)
            && (VAR_14->portType != VAR_11)
            && (VAR_14->portType != VAR_10))
        FUNC_10( VAR_7, VAR_2,
                     ("available for Rx and offline parsing ports only"));

    if (!FUNC_12(VAR_14->h_Spinlock, &VAR_14->lock))
    {
        FUNC_0(VAR_9, ("FM Port Try Lock - BUSY"));
        return FUNC_3(VAR_0);
    }

    VAR_15 = FUNC_2(VAR_13);
    if (VAR_15)
    {
        FUNC_9(VAR_14->lock);
        FUNC_10(VAR_7, VAR_15, VAR_8);
    }

    FUNC_5(VAR_14->h_FmPcd, VAR_14->netEnvId);


    if ((VAR_14->pcdEngines & VAR_6) && VAR_14->includeInPrsStatistics)
    {
        FUNC_8(VAR_14->h_FmPcd,
                                        VAR_14->hardwarePortId, VAR_5);
        VAR_14->includeInPrsStatistics = VAR_5;
    }

    if (!FUNC_6(VAR_14->h_FmPcd))
    {
        FUNC_9(VAR_14->lock);
        FUNC_0(VAR_9, ("Try LockAll - BUSY"));
        return FUNC_3(VAR_0);
    }

    VAR_15 = FUNC_1(VAR_13);
    FUNC_7(VAR_14->h_FmPcd);
    if (VAR_15)
    {
        FUNC_9(VAR_14->lock);
        FUNC_10(VAR_7, VAR_15, VAR_8);
    }

    if (VAR_14->h_ReassemblyTree)
    {
        VAR_15 = FUNC_4(VAR_14->h_ReassemblyTree);
        if (VAR_15)
        {
            FUNC_9(VAR_14->lock);
            FUNC_10(VAR_7, VAR_15, VAR_8);
        }
        VAR_14->h_ReassemblyTree = ((void*)0);
    }FUNC_9(VAR_14->lock);

    return VAR_15;
}
