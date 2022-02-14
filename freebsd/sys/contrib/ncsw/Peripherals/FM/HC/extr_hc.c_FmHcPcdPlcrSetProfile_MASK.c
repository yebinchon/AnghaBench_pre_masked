
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int profileRegs; } ;
struct TYPE_7__ {int extraReg; void* commandSequence; TYPE_1__ hcSpecificData; int actionReg; void* opcode; } ;
typedef TYPE_2__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
typedef int t_FmPcdPlcrProfileRegs ;
typedef int t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int t_DpaaFD ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 (int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_5 (int *,TYPE_2__*,void*) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;

t_Error FUNC_9(t_Handle VAR_6, t_Handle VAR_7, t_FmPcdPlcrProfileRegs *VAR_8)
{
    t_FmHc *VAR_9 = (t_FmHc*)VAR_6;
    t_Error VAR_10 = VAR_1;
    uint16_t VAR_11;
    t_HcFrame *VAR_12;
    t_DpaaFD VAR_13;
    uint32_t VAR_14;

    VAR_12 = FUNC_4(VAR_9, &VAR_14);
    if (!VAR_12)
        FUNC_6(VAR_4, VAR_0, ("HC Frame object"));

    VAR_11 = FUNC_3(VAR_7);

    FUNC_8(VAR_12, 0, sizeof(t_HcFrame));
    VAR_12->opcode = (uint32_t)(VAR_2 | VAR_3);
    VAR_12->actionReg = FUNC_2(VAR_11);
    VAR_12->extraReg = 0x00008000;
    FUNC_7(&VAR_12->hcSpecificData.profileRegs, VAR_8, sizeof(t_FmPcdPlcrProfileRegs));
    VAR_12->commandSequence = VAR_14;

    FUNC_0(sizeof(t_HcFrame));

    VAR_10 = FUNC_1(VAR_9, &VAR_13, VAR_14);

    FUNC_5(VAR_9, VAR_12, VAR_14);

    if (VAR_10 != VAR_1)
        FUNC_6(VAR_4, VAR_10, VAR_5);

    return VAR_1;
}
