
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_11__ {int schemeId; scalar_t__ h_FmPcd; } ;
typedef TYPE_3__ t_FmPcdKgScheme ;
struct TYPE_12__ {TYPE_6__* p_FmPcdKg; scalar_t__ h_Hc; } ;
typedef TYPE_4__ t_FmPcd ;
struct TYPE_13__ {TYPE_2__* p_IndirectAccessRegs; } ;
struct TYPE_9__ {int kgse_spc; int kgse_mode; } ;
struct TYPE_10__ {TYPE_1__ schemeRegs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int) ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (TYPE_4__*,int) ;

uint32_t FUNC_9(t_Handle VAR_7)
{
    t_FmPcd *VAR_8;
    uint32_t VAR_9, VAR_10, VAR_11;
    uint8_t VAR_12;

    FUNC_7(VAR_7, VAR_1, 0);

    VAR_8 = (t_FmPcd*)(((t_FmPcdKgScheme *)VAR_7)->h_FmPcd);
    if (VAR_8->h_Hc)
        return FUNC_0(VAR_8->h_Hc, VAR_7);

    VAR_12 = ((t_FmPcdKgScheme *)VAR_7)->schemeId;

    if (FUNC_2(VAR_8, VAR_12) == VAR_3)
        FUNC_6(VAR_5, VAR_2, VAR_6);

    VAR_9 = FUNC_1(VAR_12);
    VAR_11 = FUNC_4(VAR_8->p_FmPcdKg);
    FUNC_8(VAR_8, VAR_9);
    if (!(FUNC_3(VAR_8->p_FmPcdKg->p_IndirectAccessRegs->schemeRegs.kgse_mode) & VAR_4))
       FUNC_6(VAR_5, VAR_0, ("Scheme is Invalid"));
    VAR_10 = FUNC_3(VAR_8->p_FmPcdKg->p_IndirectAccessRegs->schemeRegs.kgse_spc);
    FUNC_5(VAR_8->p_FmPcdKg, VAR_11);

    return VAR_10;
}
