
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {void* fmpl_perrpc; void* fmpl_perypc; void* fmpl_perpc; void* fmpl_peypc; void* fmpl_pegpc; } ;
struct TYPE_8__ {TYPE_1__ profileRegs; } ;
struct TYPE_9__ {int extraReg; TYPE_2__ hcSpecificData; void* commandSequence; int actionReg; void* opcode; } ;
typedef TYPE_3__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
typedef int t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int t_DpaaFD ;
typedef int e_FmPcdPlcrProfileCounters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *,void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_3__* FUNC_4 (int *,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_5 (int *,TYPE_3__*,void*) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int VAR_9 ;





 int FUNC_8 (TYPE_3__*,int ,int) ;

uint32_t FUNC_9(t_Handle VAR_10, t_Handle VAR_11, e_FmPcdPlcrProfileCounters VAR_12)
{
    t_FmHc *VAR_13 = (t_FmHc*)VAR_10;
    uint16_t VAR_14 = FUNC_3(VAR_11);
    t_Error VAR_15;
    t_HcFrame *VAR_16;
    t_DpaaFD VAR_17;
    uint32_t VAR_18 = 0;
    uint32_t VAR_19;

    FUNC_7(VAR_10, VAR_0,0);


    VAR_16 = FUNC_4(VAR_13, &VAR_19);
    if (!VAR_16)
    {
        FUNC_6(VAR_7, VAR_2, ("HC Frame object"));
        return 0;
    }
    FUNC_8(VAR_16, 0, sizeof(t_HcFrame));
    VAR_16->opcode = (uint32_t)(VAR_4 | VAR_5);
    VAR_16->actionReg = FUNC_2(VAR_14);
    VAR_16->extraReg = 0x00008000;
    VAR_16->commandSequence = VAR_19;

    FUNC_0(VAR_9);

    VAR_15 = FUNC_1(VAR_13, &VAR_17, VAR_19);
    if (VAR_15 != VAR_3)
    {
        FUNC_5(VAR_13, VAR_16, VAR_19);
        FUNC_6(VAR_7, VAR_15, VAR_8);
        return 0;
    }

    switch (VAR_12)
    {
        case 132:
            VAR_18 = VAR_16->hcSpecificData.profileRegs.fmpl_pegpc;
            break;
        case 128:
            VAR_18 = VAR_16->hcSpecificData.profileRegs.fmpl_peypc;
            break;
        case 129:
            VAR_18 = VAR_16->hcSpecificData.profileRegs.fmpl_perpc;
            break;
        case 130:
            VAR_18 = VAR_16->hcSpecificData.profileRegs.fmpl_perypc;
            break;
        case 131:
            VAR_18 = VAR_16->hcSpecificData.profileRegs.fmpl_perrpc;
            break;
        default:
            FUNC_6(VAR_6, VAR_1, VAR_8);
    }

    FUNC_5(VAR_13, VAR_16, VAR_19);
    return VAR_18;
}
