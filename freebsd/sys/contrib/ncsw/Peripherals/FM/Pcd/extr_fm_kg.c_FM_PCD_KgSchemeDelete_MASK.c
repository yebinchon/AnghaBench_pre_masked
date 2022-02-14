
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
struct TYPE_11__ {scalar_t__ p_Lock; int schemeId; scalar_t__ h_FmPcd; } ;
typedef TYPE_3__ t_FmPcdKgScheme ;
struct TYPE_12__ {TYPE_6__* p_FmPcdKg; scalar_t__ h_Hc; } ;
typedef TYPE_4__ t_FmPcd ;
typedef scalar_t__ t_Error ;
struct TYPE_13__ {TYPE_2__* p_IndirectAccessRegs; } ;
struct TYPE_9__ {int kgse_mode; } ;
struct TYPE_10__ {TYPE_1__ schemeRegs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*,int ) ;

t_Error FUNC_11(t_Handle VAR_5)
{
    t_FmPcd *VAR_6;
    uint8_t VAR_7;
    uint32_t VAR_8, VAR_9;
    t_Error VAR_10 = VAR_1;
    t_FmPcdKgScheme *VAR_11 = (t_FmPcdKgScheme *)VAR_5;

    FUNC_7(VAR_5, VAR_0);

    VAR_6 = (t_FmPcd*)(VAR_11->h_FmPcd);

    FUNC_8(VAR_5, VAR_2);


    VAR_10 = FUNC_3(VAR_5);
    if (VAR_10)
        FUNC_6(VAR_3, VAR_10, VAR_4);

    if (VAR_6->h_Hc)
    {
        VAR_10 = FUNC_0(VAR_6->h_Hc, VAR_5);
        if (VAR_11->p_Lock)
            FUNC_2(VAR_6, VAR_11->p_Lock);
        return VAR_10;
    }

    VAR_7 = ((t_FmPcdKgScheme *)VAR_5)->schemeId;

    VAR_9 = FUNC_4(VAR_6->p_FmPcdKg);

    FUNC_9(VAR_6->p_FmPcdKg->p_IndirectAccessRegs->schemeRegs.kgse_mode, 0);


    VAR_8 = FUNC_1(VAR_7, VAR_2);

    FUNC_10(VAR_6, VAR_8);
    FUNC_5(VAR_6->p_FmPcdKg, VAR_9);

    if (VAR_11->p_Lock)
        FUNC_2(VAR_6, VAR_11->p_Lock);

    return VAR_1;
}
