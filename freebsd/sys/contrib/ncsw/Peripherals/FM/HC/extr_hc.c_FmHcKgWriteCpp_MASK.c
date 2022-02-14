
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_6__ {void* singleRegForWrite; } ;
struct TYPE_7__ {void* commandSequence; TYPE_1__ hcSpecificData; int extraReg; int actionReg; void* opcode; } ;
typedef TYPE_2__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
typedef int t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int t_DpaaFD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *,void*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_5 (int *,TYPE_2__*,void*) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

t_Error FUNC_8(t_Handle VAR_7, uint8_t VAR_8, uint32_t VAR_9)
{
    t_FmHc *VAR_10 = (t_FmHc*)VAR_7;
    t_HcFrame *VAR_11;
    t_DpaaFD VAR_12;
    t_Error VAR_13 = VAR_1;
    uint32_t VAR_14;

    FUNC_0(VAR_10);

    VAR_11 = FUNC_4(VAR_10, &VAR_14);
    if (!VAR_11)
        FUNC_6(VAR_5, VAR_0, ("HC Frame object"));
    FUNC_7(VAR_11, 0, sizeof(t_HcFrame));

    VAR_11->opcode = (uint32_t)(VAR_2 | VAR_4);
    VAR_11->actionReg = FUNC_3(VAR_8);
    VAR_11->extraReg = VAR_3;
    VAR_11->hcSpecificData.singleRegForWrite = VAR_9;
    VAR_11->commandSequence = VAR_14;

    FUNC_1(sizeof(t_HcFrame));

    VAR_13 = FUNC_2(VAR_10, &VAR_12, VAR_14);

    FUNC_5(VAR_10, VAR_11, VAR_14);

    if (VAR_13 != VAR_1)
        FUNC_6(VAR_5, VAR_13, VAR_6);

    return VAR_1;
}
