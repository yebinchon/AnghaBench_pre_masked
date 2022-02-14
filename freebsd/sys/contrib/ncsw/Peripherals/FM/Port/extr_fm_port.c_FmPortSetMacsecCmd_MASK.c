
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_8__ {TYPE_2__* bmi_regs; } ;
struct TYPE_9__ {scalar_t__ portType; TYPE_3__ port; struct TYPE_9__* p_FmPortDriverParam; } ;
typedef TYPE_4__ t_FmPort ;
struct TYPE_6__ {int fmbm_tfca; } ;
struct TYPE_7__ {TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int volatile) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int volatile,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_4(t_Handle VAR_10, uint8_t VAR_11)
{
    t_FmPort *VAR_12 = (t_FmPort*)VAR_10;
    volatile uint32_t *VAR_13 = ((void*)0);
    uint32_t VAR_14;

    FUNC_2(VAR_12, VAR_4);
    FUNC_2(VAR_12->p_FmPortDriverParam, VAR_6);

    if ((VAR_12->portType != VAR_9)
            && (VAR_12->portType != VAR_8))
    {
        FUNC_1(VAR_7, VAR_5, ("The routine is relevant for Tx ports only"));
        return;
    }

    VAR_13 = &VAR_12->port.bmi_regs->tx.fmbm_tfca;
    VAR_14 = FUNC_0(*VAR_13) & ~VAR_0;
    VAR_14 |= VAR_3;
    VAR_14 |= (((uint32_t)VAR_11 << VAR_2)
            & VAR_1);

    FUNC_3(*VAR_13, VAR_14);
}
