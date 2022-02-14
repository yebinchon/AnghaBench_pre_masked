
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {TYPE_4__* qmi_regs; TYPE_3__* bmi_regs; } ;
struct TYPE_14__ {int requiredAction; int origNonRxQmiRegsPndn; scalar_t__ portType; int savedBmiNia; int orFmanCtrl; int hardwarePortId; int h_Fm; TYPE_5__ port; int h_FmPcd; } ;
typedef TYPE_6__ t_FmPort ;
typedef scalar_t__ t_Error ;
struct TYPE_12__ {int volatile fmqm_pnen; int volatile fmqm_pndn; } ;
struct TYPE_10__ {int volatile fmbm_rfene; int fmbm_rfne; } ;
struct TYPE_9__ {int volatile fmbm_ofene; int fmbm_ofne; } ;
struct TYPE_11__ {TYPE_2__ rx; TYPE_1__ oh; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int volatile,int) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static t_Error FUNC_7(t_FmPort *VAR_14)
{
    volatile uint32_t *VAR_15 = ((void*)0);

    FUNC_0(VAR_14);


    if (VAR_14->requiredAction & VAR_11)
        FUNC_6(VAR_14->port.qmi_regs->fmqm_pndn,
                     VAR_14->origNonRxQmiRegsPndn);

    if (VAR_14->portType == VAR_13)
        VAR_15 = &VAR_14->port.bmi_regs->oh.fmbm_ofne;
    else
        VAR_15 = &VAR_14->port.bmi_regs->rx.fmbm_rfne;

    FUNC_6(
            *VAR_15,
            (VAR_14->savedBmiNia & VAR_0) | FUNC_4());

    if (FUNC_1(VAR_14->h_FmPcd))
        FUNC_2(VAR_14->h_FmPcd);

    if (VAR_14->requiredAction & VAR_10)
    {
        if (VAR_14->portType == VAR_13)
            FUNC_6(VAR_14->port.bmi_regs->oh.fmbm_ofene,
                         VAR_6 | VAR_7);
        else
            FUNC_6(VAR_14->port.bmi_regs->rx.fmbm_rfene,
                         VAR_6 | VAR_7);
    }

    if (VAR_14->requiredAction & VAR_12)
        FUNC_6(VAR_14->port.qmi_regs->fmqm_pnen,
                     VAR_5 | VAR_4);

    if (VAR_14->requiredAction & VAR_9)
        if (FUNC_3(VAR_14->h_Fm, VAR_14->hardwarePortId, 2,
                                   VAR_14->orFmanCtrl) != VAR_2)
            FUNC_5(VAR_3, VAR_1, VAR_8);

    VAR_14->requiredAction = 0;

    return VAR_2;
}
