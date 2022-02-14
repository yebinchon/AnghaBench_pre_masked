
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ guestId; TYPE_3__* p_FmPcdDriverParam; TYPE_2__* p_FmPcdKg; TYPE_1__* p_FmPcdPlcr; int f_FmPcdIndexedException; int f_Exception; int h_Fm; } ;
typedef TYPE_4__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_8__ {scalar_t__ prsMaxParseCycleLimit; } ;
struct TYPE_7__ {int p_FmPcdKgRegs; } ;
struct TYPE_6__ {int p_FmPcdPlcrRegs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static t_Error FUNC_1(t_FmPcd *VAR_5)
{
    if (!VAR_5->h_Fm)
         FUNC_0(VAR_2, VAR_0, ("h_Fm has to be initialized"));

    if (VAR_5->guestId == VAR_3)
    {
        if (VAR_5->p_FmPcdKg && !VAR_5->p_FmPcdKg->p_FmPcdKgRegs)
            FUNC_0(VAR_2, VAR_0, ("Something WRONG"));

        if (VAR_5->p_FmPcdPlcr && !VAR_5->p_FmPcdPlcr->p_FmPcdPlcrRegs)
            FUNC_0(VAR_2, VAR_0, ("Something WRONG"));

        if (!VAR_5->f_Exception)
            FUNC_0(VAR_2, VAR_0, ("f_FmPcdExceptions has to be initialized"));

        if ((!VAR_5->f_FmPcdIndexedException) && (VAR_5->p_FmPcdPlcr || VAR_5->p_FmPcdKg))
            FUNC_0(VAR_2, VAR_0, ("f_FmPcdIndexedException has to be initialized"));

        if (VAR_5->p_FmPcdDriverParam->prsMaxParseCycleLimit > VAR_4)
            FUNC_0(VAR_2, VAR_0, ("prsMaxParseCycleLimit has to be less than 8191"));
    }

    return VAR_1;
}
