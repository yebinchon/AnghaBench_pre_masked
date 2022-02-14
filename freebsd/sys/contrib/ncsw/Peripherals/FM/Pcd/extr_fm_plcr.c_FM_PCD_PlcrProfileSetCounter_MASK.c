
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_9__ {int fmpl_perrpc; int fmpl_perypc; int fmpl_perpc; int fmpl_peypc; int fmpl_pegpc; } ;
struct TYPE_10__ {TYPE_1__ profileRegs; int absoluteProfileId; TYPE_4__* h_FmPcd; } ;
typedef TYPE_2__ t_FmPcdPlcrRegs ;
typedef TYPE_2__ t_FmPcdPlcrProfile ;
struct TYPE_11__ {TYPE_7__* p_FmPcdPlcr; scalar_t__ h_Hc; } ;
typedef TYPE_4__ t_FmPcd ;
typedef int t_Error ;
typedef int e_FmPcdPlcrProfileCounters ;
struct TYPE_12__ {TYPE_2__* p_FmPcdPlcrRegs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;






t_Error FUNC_9(t_Handle VAR_5, e_FmPcdPlcrProfileCounters VAR_6, uint32_t VAR_7)
{
    t_FmPcdPlcrProfile *VAR_8 = (t_FmPcdPlcrProfile*)VAR_5;
    t_FmPcd *VAR_9;
    uint16_t VAR_10;
    uint32_t VAR_11, VAR_12;
    t_FmPcdPlcrRegs *VAR_13;

    FUNC_6(VAR_8, VAR_0);

    VAR_9 = VAR_8->h_FmPcd;
    VAR_10 = VAR_8->absoluteProfileId;

    if (VAR_9->h_Hc)
        return FUNC_0(VAR_9->h_Hc, VAR_5, VAR_6, VAR_7);

    VAR_13 = VAR_9->p_FmPcdPlcr->p_FmPcdPlcrRegs;
    FUNC_6(VAR_13, VAR_0);

    VAR_12 = FUNC_3(VAR_9->p_FmPcdPlcr);
    switch (VAR_6)
    {
        case 132:
             FUNC_7(VAR_13->profileRegs.fmpl_pegpc, VAR_7);
             break;
        case 128:
             FUNC_7(VAR_13->profileRegs.fmpl_peypc, VAR_7);
             break;
        case 129:
             FUNC_7(VAR_13->profileRegs.fmpl_perpc, VAR_7);
             break;
        case 130:
             FUNC_7(VAR_13->profileRegs.fmpl_perypc ,VAR_7);
             break;
        case 131:
             FUNC_7(VAR_13->profileRegs.fmpl_perrpc ,VAR_7);
             break;
        default:
            FUNC_4(VAR_9->p_FmPcdPlcr, VAR_12);
            FUNC_5(VAR_3, VAR_1, VAR_4);
    }




    VAR_11 = FUNC_2(VAR_10);
    VAR_11 |= FUNC_1(VAR_6);
    FUNC_8(VAR_9, VAR_11);
    FUNC_4(VAR_9->p_FmPcdPlcr, VAR_12);

    return VAR_2;
}
