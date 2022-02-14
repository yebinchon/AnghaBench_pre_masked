
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct TYPE_7__ {int actionReg; int extraReg; void* commandSequence; void* opcode; } ;
typedef TYPE_1__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
struct TYPE_8__ {int tsbs; int iprcpt; scalar_t__ activate; } ;
typedef TYPE_2__ t_FmPcdCcReassmTimeoutParams ;
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
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_3 (int *,TYPE_1__*,void*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

t_Error FUNC_7(t_Handle VAR_11, t_FmPcdCcReassmTimeoutParams *VAR_12, uint8_t *VAR_13)
{
    t_FmHc *VAR_14 = (t_FmHc*)VAR_11;
    t_HcFrame *VAR_15;
    t_DpaaFD VAR_16;
    t_Error VAR_17;
    uint32_t VAR_18;

    FUNC_5(VAR_11, VAR_0,0);

    VAR_15 = FUNC_2(VAR_14, &VAR_18);
    if (!VAR_15)
        FUNC_4(VAR_9, VAR_1, ("HC Frame object"));

    FUNC_6(VAR_15, 0, sizeof(t_HcFrame));
    VAR_15->opcode = (uint32_t)(VAR_7 | VAR_8);
    VAR_15->actionReg = (uint32_t)((VAR_12->activate ? 0 : 1) << VAR_3);
    VAR_15->extraReg = (VAR_12->tsbs << VAR_6) | VAR_12->iprcpt;
    VAR_15->commandSequence = VAR_18;

    FUNC_0(sizeof(t_HcFrame));
    if ((VAR_17 = FUNC_1(VAR_14, &VAR_16, VAR_18)) != VAR_2)
    {
        FUNC_3(VAR_14, VAR_15, VAR_18);
        FUNC_4(VAR_9, VAR_17, VAR_10);
    }

    *VAR_13 = (uint8_t)
        ((VAR_15->actionReg >> VAR_5) & VAR_4);

    FUNC_3(VAR_14, VAR_15, VAR_18);
    return VAR_2;
}
