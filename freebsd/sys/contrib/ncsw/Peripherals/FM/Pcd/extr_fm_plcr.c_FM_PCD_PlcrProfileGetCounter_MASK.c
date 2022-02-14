
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_10__ {int fmpl_perrpc; int fmpl_perypc; int fmpl_perpc; int fmpl_peypc; int fmpl_pegpc; } ;
struct TYPE_11__ {TYPE_1__ profileRegs; } ;
typedef TYPE_2__ t_FmPcdPlcrRegs ;
struct TYPE_12__ {scalar_t__ absoluteProfileId; TYPE_8__* p_FmPcdPlcr; scalar_t__ h_Hc; struct TYPE_12__* h_FmPcd; } ;
typedef TYPE_3__ t_FmPcdPlcrProfile ;
typedef TYPE_3__ t_FmPcd ;
typedef int e_FmPcdPlcrProfileCounters ;
struct TYPE_13__ {TYPE_2__* p_FmPcdPlcrRegs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,int ) ;






uint32_t FUNC_9(t_Handle VAR_6, e_FmPcdPlcrProfileCounters VAR_7)
{
    t_FmPcdPlcrProfile *VAR_8 = (t_FmPcdPlcrProfile*)VAR_6;
    t_FmPcd *VAR_9;
    uint16_t VAR_10;
    uint32_t VAR_11, VAR_12 = 0;
    t_FmPcdPlcrRegs *VAR_13;

    FUNC_6(VAR_8, VAR_0);
    VAR_9 = VAR_8->h_FmPcd;
    FUNC_6(VAR_9, VAR_0);

    if (VAR_9->h_Hc)
        return FUNC_0(VAR_9->h_Hc, VAR_6, VAR_7);

    VAR_13 = VAR_9->p_FmPcdPlcr->p_FmPcdPlcrRegs;
    FUNC_7(VAR_13, VAR_0, 0);

    VAR_10 = VAR_8->absoluteProfileId;

    if (VAR_10 >= VAR_3)
    {
        FUNC_5(VAR_4, VAR_2, ("profileId too Big "));
        return 0;
    }
    VAR_11 = FUNC_3(VAR_9->p_FmPcdPlcr);
    FUNC_8(VAR_9, FUNC_1(VAR_10));

    switch (VAR_7)
    {
        case 132:
            VAR_12 = (FUNC_2(VAR_13->profileRegs.fmpl_pegpc));
            break;
        case 128:
            VAR_12 = FUNC_2(VAR_13->profileRegs.fmpl_peypc);
            break;
        case 129:
            VAR_12 = FUNC_2(VAR_13->profileRegs.fmpl_perpc);
            break;
        case 130:
            VAR_12 = FUNC_2(VAR_13->profileRegs.fmpl_perypc);
            break;
        case 131:
            VAR_12 = FUNC_2(VAR_13->profileRegs.fmpl_perrpc);
            break;
        default:
            FUNC_5(VAR_4, VAR_1, VAR_5);
            break;
    }
    FUNC_4(VAR_9->p_FmPcdPlcr, VAR_11);

    return VAR_12;
}
