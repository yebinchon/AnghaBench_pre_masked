
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_Handle ;
struct TYPE_2__ {scalar_t__ portType; int lock; int pcdEngines; scalar_t__ h_ReassemblyTree; int h_Spinlock; scalar_t__ imEn; int p_FmPortDriverParam; } ;
typedef TYPE_1__ t_FmPort ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 int FUNC_5 (int,int ) ;
 int VAR_8 ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

t_Error FUNC_7(t_Handle VAR_12)
{
    t_FmPort *VAR_13 = (t_FmPort*)VAR_12;
    t_Error VAR_14 = VAR_4;

    FUNC_5(VAR_12, VAR_1);
    FUNC_5(!VAR_13->p_FmPortDriverParam, VAR_3);

    if (VAR_13->imEn)
        FUNC_4(VAR_6, VAR_2,
                     ("available for non-independent mode ports only"));

    if ((VAR_13->portType != VAR_11)
            && (VAR_13->portType != VAR_10)
            && (VAR_13->portType != VAR_9))
        FUNC_4( VAR_6, VAR_2,
                     ("available for Rx and offline parsing ports only"));

    if (!FUNC_6(VAR_13->h_Spinlock, &VAR_13->lock))
    {
        FUNC_0(VAR_8, ("FM Port Try Lock - BUSY"));
        return FUNC_2(VAR_0);
    }

    VAR_14 = FUNC_1(VAR_12);
    if (VAR_14 != VAR_4)
    {
        FUNC_3(VAR_13->lock);
        FUNC_4(VAR_6, VAR_14, VAR_7);
    }

    if (VAR_13->h_ReassemblyTree)
        VAR_13->pcdEngines &= ~VAR_5;
    FUNC_3(VAR_13->lock);

    return VAR_4;
}
