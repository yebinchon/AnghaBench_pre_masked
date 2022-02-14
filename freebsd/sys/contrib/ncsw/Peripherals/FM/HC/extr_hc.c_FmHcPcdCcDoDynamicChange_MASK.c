
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_5__ {int actionReg; void* commandSequence; void* extraReg; void* opcode; } ;
typedef TYPE_1__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
typedef int t_FmHc ;
typedef scalar_t__ t_Error ;
typedef int t_DpaaFD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,void*) ;
 TYPE_1__* FUNC_2 (int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_3 (int *,TYPE_1__*,void*) ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_8 ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

t_Error FUNC_7(t_Handle VAR_9, uint32_t VAR_10, uint32_t VAR_11)
{
    t_FmHc *VAR_12 = (t_FmHc*)VAR_9;
    t_HcFrame *VAR_13;
    t_DpaaFD VAR_14;
    t_Error VAR_15 = VAR_2;
    uint32_t VAR_16;

    FUNC_5(VAR_12, VAR_0);

    VAR_13 = FUNC_2(VAR_12, &VAR_16);
    if (!VAR_13)
        FUNC_4(VAR_6, VAR_1, ("HC Frame object"));
    FUNC_6(VAR_13, 0, sizeof(t_HcFrame));

    VAR_13->opcode = (uint32_t)(VAR_3 | VAR_4);
    VAR_13->actionReg = VAR_11;
    VAR_13->actionReg |= 0xc0000000;
    VAR_13->extraReg = VAR_10;
    VAR_13->commandSequence = VAR_16;

    FUNC_0(VAR_8);

    VAR_15 = FUNC_1(VAR_12, &VAR_14, VAR_16);

    FUNC_3(VAR_12, VAR_13, VAR_16);

    if (VAR_15 != VAR_2)
        FUNC_4(VAR_5, VAR_15, VAR_7);

    return VAR_2;
}
