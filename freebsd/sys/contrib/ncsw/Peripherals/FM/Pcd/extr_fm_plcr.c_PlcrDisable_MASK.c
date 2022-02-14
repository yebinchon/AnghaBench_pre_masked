
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fmpl_gcr; } ;
typedef TYPE_2__ t_FmPcdPlcrRegs ;
struct TYPE_7__ {TYPE_1__* p_FmPcdPlcr; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_2__* p_FmPcdPlcrRegs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(t_FmPcd *VAR_1)
{
    t_FmPcdPlcrRegs *VAR_2 = VAR_1->p_FmPcdPlcr->p_FmPcdPlcrRegs;

    FUNC_1(VAR_2->fmpl_gcr, FUNC_0(VAR_2->fmpl_gcr) & ~VAR_0);
}
