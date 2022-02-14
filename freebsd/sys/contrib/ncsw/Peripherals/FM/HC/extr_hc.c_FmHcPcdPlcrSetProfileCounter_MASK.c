
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {void* singleRegForWrite; } ;
struct TYPE_7__ {int extraReg; void* commandSequence; TYPE_1__ hcSpecificData; int actionReg; void* opcode; } ;
typedef TYPE_2__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
typedef int t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int t_DpaaFD ;
typedef int e_FmPcdPlcrProfileCounters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_2__* FUNC_5 (int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_6 (int *,TYPE_2__*,void*) ;
 int FUNC_7 (int ,scalar_t__,char*) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_2__*,int ,int) ;

t_Error FUNC_9(t_Handle VAR_7, t_Handle VAR_8, e_FmPcdPlcrProfileCounters VAR_9, uint32_t VAR_10)
{

    t_FmHc *VAR_11 = (t_FmHc*)VAR_7;
    uint16_t VAR_12 = FUNC_4(VAR_8);
    t_Error VAR_13 = VAR_1;
    t_HcFrame *VAR_14;
    t_DpaaFD VAR_15;
    uint32_t VAR_16;


    VAR_14 = FUNC_5(VAR_11, &VAR_16);
    if (!VAR_14)
        FUNC_7(VAR_4, VAR_0, ("HC Frame object"));
    FUNC_8(VAR_14, 0, sizeof(t_HcFrame));
    VAR_14->opcode = (uint32_t)(VAR_2 | VAR_3);
    VAR_14->actionReg = FUNC_3(VAR_12);
    VAR_14->actionReg |= FUNC_2(VAR_9);
    VAR_14->extraReg = 0x00008000;
    VAR_14->hcSpecificData.singleRegForWrite = VAR_10;
    VAR_14->commandSequence = VAR_16;

    FUNC_0(VAR_6);

    VAR_13 = FUNC_1(VAR_11, &VAR_15, VAR_16);

    FUNC_6(VAR_11, VAR_14, VAR_16);

    if (VAR_13 != VAR_1)
        FUNC_7(VAR_4, VAR_13, VAR_5);

    return VAR_1;
}
