
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_2__* t_Handle ;
struct TYPE_13__ {int fmPcdPrsPortIdStatistics; struct fman_prs_regs* p_FmPcdPrsRegs; int * p_SwPrsCode; } ;
typedef TYPE_2__ t_FmPcdPrs ;
struct TYPE_14__ {scalar_t__ guestId; TYPE_1__* p_FmPcdDriverParam; int exceptions; int h_Fm; } ;
typedef TYPE_4__ t_FmPcdParams ;
typedef TYPE_4__ t_FmPcd ;
struct fman_prs_regs {int dummy; } ;
struct TYPE_15__ {int prs_exceptions; int max_prs_cyc_lim; int port_id_stat; } ;
struct TYPE_12__ {TYPE_7__ dfltCfg; int prsMaxParseCycleLimit; } ;


 int VAR_0 ;
 uintptr_t FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 uintptr_t VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (uintptr_t) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

t_Handle FUNC_7(t_FmPcd *VAR_4,t_FmPcdParams *VAR_5)
{
    t_FmPcdPrs *VAR_6;
    uintptr_t VAR_7;

    FUNC_3(VAR_4);
    FUNC_3(VAR_5);

    VAR_6 = (t_FmPcdPrs *) FUNC_4(sizeof(t_FmPcdPrs));
    if (!VAR_6)
    {
        FUNC_1(VAR_1, VAR_0, ("FM Parser structure allocation FAILED"));
        return ((void*)0);
    }
    FUNC_6(VAR_6, 0, sizeof(t_FmPcdPrs));
    FUNC_5(&VAR_4->p_FmPcdDriverParam->dfltCfg);

    if (VAR_4->guestId == VAR_2)
    {
        VAR_7 = FUNC_0(VAR_5->h_Fm);
        VAR_6->p_SwPrsCode = (uint32_t *)FUNC_2(VAR_7);
        VAR_6->p_FmPcdPrsRegs = (struct fman_prs_regs *)FUNC_2(VAR_7 + VAR_3);
    }

    VAR_6->fmPcdPrsPortIdStatistics = VAR_4->p_FmPcdDriverParam->dfltCfg.port_id_stat;
    VAR_4->p_FmPcdDriverParam->prsMaxParseCycleLimit = VAR_4->p_FmPcdDriverParam->dfltCfg.max_prs_cyc_lim;
    VAR_4->exceptions |= VAR_4->p_FmPcdDriverParam->dfltCfg.prs_exceptions;

    return VAR_6;
}
