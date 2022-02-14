
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int fmpl_par; } ;
typedef TYPE_2__ t_FmPcdPlcrRegs ;
struct TYPE_7__ {int h_Fm; TYPE_1__* p_FmPcdPlcr; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_2__* p_FmPcdPlcrRegs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(t_FmPcd *VAR_1, uint32_t VAR_2)
{
    t_FmPcdPlcrRegs *VAR_3 = VAR_1->p_FmPcdPlcr->p_FmPcdPlcrRegs;

    FUNC_0(FUNC_1(VAR_1->h_Fm));
    FUNC_3(VAR_3->fmpl_par, VAR_2);

    while (FUNC_2(VAR_3->fmpl_par) & VAR_0) ;
}
