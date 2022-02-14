
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ guestId; TYPE_1__* p_FmPcdPrs; } ;
typedef TYPE_2__ t_FmPcd ;
struct fman_prs_regs {int dummy; } ;
struct TYPE_4__ {scalar_t__ p_FmPcdPrsRegs; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct fman_prs_regs*) ;

int FUNC_2(t_FmPcd *VAR_1)
{
    struct fman_prs_regs *VAR_2 = (struct fman_prs_regs *)VAR_1->p_FmPcdPrs->p_FmPcdPrsRegs;

    FUNC_0(VAR_1->guestId == VAR_0);
    return FUNC_1(VAR_2);
}
