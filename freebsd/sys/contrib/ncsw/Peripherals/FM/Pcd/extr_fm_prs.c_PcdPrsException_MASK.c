
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {scalar_t__ guestId; int h_App; int (* f_Exception ) (int ,int ) ;TYPE_1__* p_FmPcdPrs; } ;
typedef TYPE_2__ t_FmPcd ;
struct fman_prs_regs {int dummy; } ;
struct TYPE_3__ {scalar_t__ p_FmPcdPrsRegs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct fman_prs_regs*,int) ;
 int FUNC_3 (struct fman_prs_regs*) ;
 int FUNC_4 (struct fman_prs_regs*,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(t_Handle VAR_4)
{
    t_FmPcd *VAR_5 = (t_FmPcd *)VAR_4;
    uint32_t VAR_6, VAR_7;
    struct fman_prs_regs *VAR_8 = (struct fman_prs_regs *)VAR_5->p_FmPcdPrs->p_FmPcdPrsRegs;

    FUNC_0(VAR_5->guestId == VAR_1);
    VAR_7 = FUNC_3(VAR_8);
    VAR_6 = FUNC_4(VAR_8, VAR_7);

    FUNC_0(VAR_6 & VAR_0);

    FUNC_1(VAR_2, ("parser event - 0x%08x\n",VAR_6));

    FUNC_2(VAR_8, VAR_6);

    VAR_5->f_Exception(VAR_5->h_App,VAR_3);
}
