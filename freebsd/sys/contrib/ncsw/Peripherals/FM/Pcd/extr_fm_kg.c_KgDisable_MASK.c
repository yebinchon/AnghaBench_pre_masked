
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int h_Fm; TYPE_1__* p_FmPcdKg; } ;
typedef TYPE_2__ t_FmPcd ;
struct fman_kg_regs {int dummy; } ;
struct TYPE_4__ {struct fman_kg_regs* p_FmPcdKgRegs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fman_kg_regs*) ;

void FUNC_3(t_FmPcd *VAR_0)
{
    struct fman_kg_regs *VAR_1 = VAR_0->p_FmPcdKg->p_FmPcdKgRegs;

    FUNC_0(FUNC_1(VAR_0->h_Fm));
    FUNC_2(VAR_1);
}
