
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_Handle ;
struct TYPE_2__ {scalar_t__ portType; int lock; int pcdEngines; scalar_t__ h_ReassemblyTree; int h_Spinlock; scalar_t__ imEn; int p_FmPortDriverParam; } ;
typedef TYPE_1__ t_FmPort ;
typedef int t_Error ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int,int ) ;
 int VAR_7 ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

t_Error FUNC_7(t_Handle VAR_11)
{
    t_FmPort *VAR_12 = (t_FmPort*)VAR_11;
    t_Error VAR_13 = VAR_4;

    FUNC_5(VAR_11, VAR_1);
    FUNC_5(!VAR_12->p_FmPortDriverParam, VAR_3);

    if (VAR_12->imEn)
        FUNC_4(VAR_6, VAR_2,
                     ("available for non-independent mode ports only"));

    if ((VAR_12->portType != VAR_10)
            && (VAR_12->portType != VAR_9)
            && (VAR_12->portType != VAR_8))
        FUNC_4( VAR_6, VAR_2,
                     ("available for Rx and offline parsing ports only"));

    if (!FUNC_6(VAR_12->h_Spinlock, &VAR_12->lock))
    {
        FUNC_1(VAR_7, ("FM Port Try Lock - BUSY"));
        return FUNC_2(VAR_0);
    }

    if (VAR_12->h_ReassemblyTree)
        VAR_12->pcdEngines |= VAR_5;

    VAR_13 = FUNC_0(VAR_11);
    FUNC_3(VAR_12->lock);

    return VAR_13;
}
