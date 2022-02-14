
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_2__* p_FmPcdPlcr; int h_App; int (* f_FmPcdIndexedException ) (int ,int ,int ) ;int (* f_Exception ) (int ,int ) ;int h_Fm; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_1__* p_FmPcdPlcrRegs; } ;
struct TYPE_4__ {int fmpl_upcr; int fmpl_eevr; int fmpl_eifr; int fmpl_eier; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(t_Handle VAR_6)
{
    t_FmPcd *VAR_7 = (t_FmPcd *)VAR_6;
    uint32_t VAR_8, VAR_9, VAR_10, VAR_11;

    FUNC_0(FUNC_1(VAR_7->h_Fm));
    VAR_8 = FUNC_2(VAR_7->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_eevr);
    VAR_11 = FUNC_2(VAR_7->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_eier);

    VAR_8 &= VAR_11;


    VAR_9 = FUNC_2(VAR_7->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_eifr);
    if (VAR_9 & VAR_8)
        FUNC_3(VAR_7->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_eifr, VAR_9 & ~VAR_8);

    FUNC_3(VAR_7->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_eevr, VAR_8);

    if (VAR_8 & VAR_0)
        VAR_7->f_Exception(VAR_7->h_App,VAR_4);
    if (VAR_8 & VAR_1)
    {
        VAR_10 = FUNC_2(VAR_7->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_upcr);




        VAR_7->f_FmPcdIndexedException(VAR_7->h_App,VAR_5,(uint16_t)(VAR_10 & VAR_3));
        FUNC_3(VAR_7->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_upcr, VAR_2);
    }
}
