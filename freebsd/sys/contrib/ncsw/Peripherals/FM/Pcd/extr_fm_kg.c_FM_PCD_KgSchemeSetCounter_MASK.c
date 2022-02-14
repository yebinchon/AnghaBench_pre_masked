
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
typedef int t_Error ;
struct TYPE_13__ {TYPE_2__* p_IndirectAccessRegs; } ;
struct TYPE_9__ {int kgse_spc; int kgse_mode; } ;
struct TYPE_10__ {TYPE_1__ schemeRegs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int VAR_9 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_4__*,int ) ;

t_Error FUNC_13(t_Handle VAR_10, uint32_t VAR_11)
{
    t_FmPcd *VAR_12;
    uint32_t VAR_13, VAR_14;
    uint8_t VAR_15;

    FUNC_10(VAR_10, VAR_1, 0);

    VAR_12 = (t_FmPcd*)(((t_FmPcdKgScheme *)VAR_10)->h_FmPcd);

    if (!FUNC_4(VAR_10))
        FUNC_9(VAR_7, VAR_2, ("Requested scheme is invalid."));

    if (VAR_12->h_Hc)
        return FUNC_0(VAR_12->h_Hc, VAR_10, VAR_11);

    VAR_15 = ((t_FmPcdKgScheme *)VAR_10)->schemeId;

    if (FUNC_3(VAR_12, VAR_15) == VAR_5)
        FUNC_8(VAR_7, VAR_3, VAR_8);


    VAR_13 = FUNC_1(VAR_15);
    VAR_14 = FUNC_6(VAR_12->p_FmPcdKg);
    FUNC_12(VAR_12, VAR_13);
    if (!(FUNC_5(VAR_12->p_FmPcdKg->p_IndirectAccessRegs->schemeRegs.kgse_mode) & VAR_6))
    {
       FUNC_7(VAR_12->p_FmPcdKg, VAR_14);
       FUNC_9(VAR_7, VAR_0, ("Scheme is Invalid"));
    }


    FUNC_11(VAR_12->p_FmPcdKg->p_IndirectAccessRegs->schemeRegs.kgse_spc, VAR_11);


    VAR_13 = FUNC_2(VAR_15, VAR_9);

    FUNC_12(VAR_12, VAR_13);
    FUNC_7(VAR_12->p_FmPcdKg, VAR_14);

    return VAR_4;
}
