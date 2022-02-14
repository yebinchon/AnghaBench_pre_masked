
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_FmPcdKgIndirectAccessRegs ;
typedef TYPE_1__* t_Handle ;
struct TYPE_11__ {scalar_t__ numOfSchemes; int h_Fm; } ;
typedef TYPE_2__ t_FmPcdParams ;
struct TYPE_10__ {scalar_t__ numOfSchemes; int emptyClsPlanGrpId; struct fman_kg_regs* p_FmPcdKgRegs; int * p_IndirectAccessRegs; } ;
typedef TYPE_1__ t_FmPcdKg ;
struct TYPE_12__ {scalar_t__ guestId; int exceptions; int h_Fm; } ;
typedef TYPE_4__ t_FmPcd ;
struct fman_kg_regs {int * fmkg_indirect; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

t_Handle FUNC_8( t_FmPcd *VAR_8, t_FmPcdParams *VAR_9)
{
    t_FmPcdKg *VAR_10;

    FUNC_5(VAR_8);

    if (VAR_9->numOfSchemes > VAR_3)
    {
        FUNC_3(VAR_5, VAR_1,
                     ("numOfSchemes should not exceed %d", VAR_3));
        return ((void*)0);
    }

    VAR_10 = (t_FmPcdKg *)FUNC_6(sizeof(t_FmPcdKg));
    if (!VAR_10)
    {
        FUNC_3(VAR_5, VAR_2, ("FM Keygen allocation FAILED"));
        return ((void*)0);
    }
    FUNC_7(VAR_10, 0, sizeof(t_FmPcdKg));


    if (FUNC_2(VAR_8->h_Fm))
    {
        VAR_10->p_FmPcdKgRegs = (struct fman_kg_regs *)FUNC_4(FUNC_1(VAR_9->h_Fm));
        VAR_8->exceptions |= VAR_0;
        VAR_10->p_IndirectAccessRegs = (u_FmPcdKgIndirectAccessRegs *)&VAR_10->p_FmPcdKgRegs->fmkg_indirect[0];
    }

    VAR_10->numOfSchemes = VAR_9->numOfSchemes;
    if ((VAR_8->guestId == VAR_6) && !VAR_10->numOfSchemes)
    {
        VAR_10->numOfSchemes = VAR_3;
        FUNC_0(VAR_7, ("numOfSchemes was defined 0 by user, re-defined by driver to FM_PCD_KG_NUM_OF_SCHEMES"));
    }

    VAR_10->emptyClsPlanGrpId = VAR_4;

    return VAR_10;
}
