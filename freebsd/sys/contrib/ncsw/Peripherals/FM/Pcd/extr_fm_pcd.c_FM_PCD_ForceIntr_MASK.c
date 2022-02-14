
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int t_Handle ;
struct TYPE_10__ {scalar_t__ guestId; int exceptions; TYPE_4__* p_FmPcdPlcr; TYPE_2__* p_FmPcdKg; int p_FmPcdPrs; int p_FmPcdDriverParam; } ;
typedef TYPE_5__ t_FmPcd ;
typedef int t_Error ;
typedef int e_FmPcdExceptions ;
struct TYPE_9__ {TYPE_3__* p_FmPcdPlcrRegs; } ;
struct TYPE_8__ {int fmpl_ifr; int fmpl_eifr; } ;
struct TYPE_7__ {TYPE_1__* p_FmPcdKgRegs; } ;
struct TYPE_6__ {int fmkg_feer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
t_Error FUNC_3 (t_Handle VAR_19, e_FmPcdExceptions VAR_20)
{
    t_FmPcd *VAR_21 = (t_FmPcd*)VAR_19;

    FUNC_1(VAR_19, VAR_0);
    FUNC_1(!VAR_21->p_FmPcdDriverParam, VAR_1);

    if (VAR_21->guestId != VAR_18)
        FUNC_0(VAR_16, VAR_2, ("FM_PCD_ForceIntr - guest mode!"));

    switch (VAR_20)
    {
        case (135):
        case (134):
            if (!VAR_21->p_FmPcdKg)
                FUNC_0(VAR_17, VAR_1, ("Can't ask for this interrupt - keygen is not working"));
            break;
        case (132):
        case (131):
        case (130):
        case (133):
            if (!VAR_21->p_FmPcdPlcr)
                FUNC_0(VAR_17, VAR_1, ("Can't ask for this interrupt - policer is not working"));
            break;
        case (129):
        case (128):
           if (!VAR_21->p_FmPcdPrs)
                FUNC_0(VAR_17, VAR_1, ("Can't ask for this interrupt -parsrer is not working"));
            break;
        default:
            FUNC_0(VAR_16, VAR_1, ("Invalid interrupt requested"));
    }
    switch (VAR_20)
    {
        case 129:
            if (!(VAR_21->exceptions & VAR_10))
                FUNC_0(VAR_17, VAR_2, ("The selected exception is masked"));
            break;
        case 128:
            if (!(VAR_21->exceptions & VAR_11))
                FUNC_0(VAR_17, VAR_2, ("The selected exception is masked"));
            break;
        case 135:
            if (!(VAR_21->exceptions & VAR_4))
                FUNC_0(VAR_17, VAR_2, ("The selected exception is masked"));
            FUNC_2(VAR_21->p_FmPcdKg->p_FmPcdKgRegs->fmkg_feer, VAR_4);
            break;
        case 134:
            if (!(VAR_21->exceptions & VAR_5))
                FUNC_0(VAR_17, VAR_2, ("The selected exception is masked"));
            FUNC_2(VAR_21->p_FmPcdKg->p_FmPcdKgRegs->fmkg_feer, VAR_5);
            break;
        case 132:
            if (!(VAR_21->exceptions & VAR_7))
                FUNC_0(VAR_17, VAR_2, ("The selected exception is masked"));
            FUNC_2(VAR_21->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_eifr, VAR_13);
            break;
        case 131:
            if (!(VAR_21->exceptions & VAR_8))
                FUNC_0(VAR_17, VAR_2, ("The selected exception is masked"));
            FUNC_2(VAR_21->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_eifr, VAR_14);
            break;
        case 130:
            if (!(VAR_21->exceptions & VAR_9))
                FUNC_0(VAR_17, VAR_2, ("The selected exception is masked"));
            FUNC_2(VAR_21->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_ifr, VAR_15);
            break;
        case 133:
            if (!(VAR_21->exceptions & VAR_6))
                FUNC_0(VAR_17, VAR_2, ("The selected exception is masked"));
            FUNC_2(VAR_21->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_ifr, VAR_12);
            break;
    }

    return VAR_3;
}
