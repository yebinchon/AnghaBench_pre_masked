
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct TYPE_10__ {void* singleRegForWrite; } ;
struct TYPE_11__ {void* commandSequence; TYPE_1__ hcSpecificData; int extraReg; int actionReg; void* opcode; } ;
typedef TYPE_2__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
struct TYPE_12__ {int h_FmPcd; } ;
typedef TYPE_3__ t_FmHc ;
typedef int t_Error ;
typedef int t_DpaaFD ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int *,void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,void*) ;
 int FUNC_7 (int ,int ,char*) ;
 int VAR_10 ;
 int FUNC_8 (TYPE_2__*,int ,int) ;

t_Error FUNC_9(t_Handle VAR_11, t_Handle VAR_12, uint32_t VAR_13)
{
    t_FmHc *VAR_14 = (t_FmHc*)VAR_11;
    t_Error VAR_15 = VAR_2;
    t_HcFrame *VAR_16;
    t_DpaaFD VAR_17;
    uint8_t VAR_18, VAR_19;
    uint32_t VAR_20;

    VAR_19 = FUNC_4(VAR_12);
    VAR_18 = FUNC_3(VAR_14->h_FmPcd, VAR_19);
    if ( VAR_18 == VAR_3)
        FUNC_7(VAR_7, VAR_0, VAR_9);


    VAR_16 = FUNC_5(VAR_14, &VAR_20);
    if (!VAR_16)
        FUNC_7(VAR_8, VAR_1, ("HC Frame object"));
    FUNC_8(VAR_16, 0, sizeof(t_HcFrame));
    VAR_16->opcode = (uint32_t)(VAR_4 | VAR_6);
    VAR_16->actionReg = FUNC_2(VAR_19, VAR_10);
    VAR_16->extraReg = VAR_5;

    VAR_16->hcSpecificData.singleRegForWrite = VAR_13;
    VAR_16->commandSequence = VAR_20;

    FUNC_0(sizeof(t_HcFrame));

    VAR_15 = FUNC_1(VAR_14, &VAR_17, VAR_20);

    FUNC_6(VAR_14, VAR_16, VAR_20);
    return VAR_15;
}
