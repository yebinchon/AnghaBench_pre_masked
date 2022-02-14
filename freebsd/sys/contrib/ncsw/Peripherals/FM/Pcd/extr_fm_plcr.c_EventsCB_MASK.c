
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {int h_App; int (* f_Exception ) (int ,int ) ;TYPE_2__* p_FmPcdPlcr; int h_Fm; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_1__* p_FmPcdPlcrRegs; } ;
struct TYPE_4__ {int fmpl_evr; int fmpl_ifr; int fmpl_ier; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(t_Handle VAR_4)
{
    t_FmPcd *VAR_5 = (t_FmPcd *)VAR_4;
    uint32_t VAR_6, VAR_7, VAR_8;

    FUNC_0(FUNC_1(VAR_5->h_Fm));
    VAR_6 = FUNC_2(VAR_5->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_evr);
    VAR_7 = FUNC_2(VAR_5->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_ier);

    VAR_6 &= VAR_7;


    VAR_8 = FUNC_2(VAR_5->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_ifr);
    if (VAR_8 & VAR_6)
        FUNC_3(VAR_5->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_ifr, VAR_8 & ~VAR_6);


    FUNC_3(VAR_5->p_FmPcdPlcr->p_FmPcdPlcrRegs->fmpl_evr, VAR_6);

    if (VAR_6 & VAR_1)
        VAR_5->f_Exception(VAR_5->h_App,VAR_3);
    if (VAR_6 & VAR_0)
        VAR_5->f_Exception(VAR_5->h_App,VAR_2);
}
