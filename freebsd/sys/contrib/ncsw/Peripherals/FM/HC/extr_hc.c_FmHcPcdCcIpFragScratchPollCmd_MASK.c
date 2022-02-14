
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_7__ {int actionReg; int extraReg; void* commandSequence; void* opcode; } ;
typedef TYPE_1__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
struct TYPE_8__ {int bufferPoolId; int numOfBuffers; } ;
typedef TYPE_2__ t_FmPcdCcFragScratchPoolCmdParams ;
typedef int t_FmHc ;
typedef int t_Error ;
typedef int t_DpaaFD ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,void*) ;
 TYPE_1__* FUNC_2 (int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_3 (int *,TYPE_1__*,void*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

t_Error FUNC_7(t_Handle VAR_10, bool VAR_11, t_FmPcdCcFragScratchPoolCmdParams *VAR_12)
{
    t_FmHc *VAR_13 = (t_FmHc*)VAR_10;
    t_HcFrame *VAR_14;
    t_DpaaFD VAR_15;
    t_Error VAR_16;
    uint32_t VAR_17;

    FUNC_5(VAR_10, VAR_0,0);

    VAR_14 = FUNC_2(VAR_13, &VAR_17);
    if (!VAR_14)
        FUNC_4(VAR_7, VAR_1, ("HC Frame object"));

    FUNC_6(VAR_14, 0, sizeof(t_HcFrame));

    VAR_14->opcode = (uint32_t)(VAR_5 | VAR_6);
    VAR_14->actionReg = (uint32_t)(((VAR_11 == VAR_9) ? 0 : 1) << VAR_4);
    VAR_14->actionReg |= VAR_12->bufferPoolId << VAR_3;
    if (VAR_11 == VAR_9)
    {
        VAR_14->extraReg = VAR_12->numOfBuffers;
    }
    VAR_14->commandSequence = VAR_17;

    FUNC_0(sizeof(t_HcFrame));
    if ((VAR_16 = FUNC_1(VAR_13, &VAR_15, VAR_17)) != VAR_2)
    {
        FUNC_3(VAR_13, VAR_14, VAR_17);
        FUNC_4(VAR_7, VAR_16, VAR_8);
    }

    VAR_12->numOfBuffers = VAR_14->extraReg;

    FUNC_3(VAR_13, VAR_14, VAR_17);
    return VAR_2;
}
