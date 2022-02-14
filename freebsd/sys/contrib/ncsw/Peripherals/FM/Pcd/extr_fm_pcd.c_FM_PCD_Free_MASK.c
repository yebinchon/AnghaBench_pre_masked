
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_8__ {scalar_t__ guestId; scalar_t__ h_ShadowSpinlock; scalar_t__ h_Spinlock; int h_Fm; int fmPcdModuleName; int * h_Hc; struct TYPE_8__* p_FmPcdPrs; struct TYPE_8__* p_FmPcdPlcr; struct TYPE_8__* p_FmPcdKg; struct TYPE_8__* p_FmPcdDriverParam; scalar_t__ enabled; scalar_t__ capwapFrameIdAddr; int h_FmMuram; scalar_t__ ipv6FrameIdAddr; } ;
typedef TYPE_1__ t_FmPcd ;
typedef int t_Error ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;

t_Error FUNC_13(t_Handle VAR_4)
{
    t_FmPcd *VAR_5 =(t_FmPcd *)VAR_4;
    t_Error VAR_6 = VAR_0;

    if (VAR_5->ipv6FrameIdAddr)
        FUNC_0(VAR_5->h_FmMuram, FUNC_9(VAR_5->ipv6FrameIdAddr));

    if (VAR_5->capwapFrameIdAddr)
        FUNC_0(VAR_5->h_FmMuram, FUNC_9(VAR_5->capwapFrameIdAddr));

    if (VAR_5->enabled)
        FUNC_1(VAR_5);

    if (VAR_5->p_FmPcdDriverParam)
    {
        FUNC_10(VAR_5->p_FmPcdDriverParam);
        VAR_5->p_FmPcdDriverParam = ((void*)0);
    }

    if (VAR_5->p_FmPcdKg)
    {
        if ((VAR_6 = FUNC_4(VAR_5)) != VAR_0)
            FUNC_7(VAR_1, VAR_6, VAR_3);
        FUNC_10(VAR_5->p_FmPcdKg);
        VAR_5->p_FmPcdKg = ((void*)0);
    }

    if (VAR_5->p_FmPcdPlcr)
    {
        FUNC_5(VAR_5);
        FUNC_10(VAR_5->p_FmPcdPlcr);
        VAR_5->p_FmPcdPlcr = ((void*)0);
    }

    if (VAR_5->p_FmPcdPrs)
    {
        if (VAR_5->guestId == VAR_2)
            FUNC_6(VAR_5);
        FUNC_10(VAR_5->p_FmPcdPrs);
        VAR_5->p_FmPcdPrs = ((void*)0);
    }

    if (VAR_5->h_Hc)
    {
        FUNC_2(VAR_5->h_Hc);
        VAR_5->h_Hc = ((void*)0);
    }

    FUNC_12(VAR_5->fmPcdModuleName);

    FUNC_3(VAR_5->h_Fm);

    FUNC_8(VAR_5);

    if (VAR_5->h_Spinlock)
        FUNC_11(VAR_5->h_Spinlock);

    if (VAR_5->h_ShadowSpinlock)
        FUNC_11(VAR_5->h_ShadowSpinlock);

    FUNC_10(VAR_5);

    return VAR_0;
}
