
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {scalar_t__ guestId; scalar_t__ p_FmPcdPrsRegs; struct TYPE_3__* p_FmPcdPrs; } ;
typedef TYPE_1__ t_FmPcd ;
struct fman_prs_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct fman_prs_regs*,int) ;

void FUNC_3(t_Handle VAR_4, bool VAR_5)
{
    t_FmPcd *VAR_6 = (t_FmPcd*)VAR_4;
    struct fman_prs_regs *VAR_7;

    FUNC_1(VAR_6, VAR_0);
    FUNC_1(VAR_6->p_FmPcdPrs, VAR_0);

    VAR_7 = (struct fman_prs_regs *)VAR_6->p_FmPcdPrs->p_FmPcdPrsRegs;


    if(VAR_6->guestId != VAR_3)
    {
        FUNC_0(VAR_2, VAR_1, ("FM_PCD_SetPrsStatistics - guest mode!"));
        return;
    }

    FUNC_2(VAR_7, VAR_5);
}
