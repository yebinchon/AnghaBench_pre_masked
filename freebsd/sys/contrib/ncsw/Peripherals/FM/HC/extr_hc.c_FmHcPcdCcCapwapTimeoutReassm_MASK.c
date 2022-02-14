
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_6__ {int ccCapwapReassmTimeout; } ;
struct TYPE_7__ {void* commandSequence; TYPE_1__ hcSpecificData; void* opcode; } ;
typedef TYPE_2__ t_HcFrame ;
typedef scalar_t__ t_Handle ;
typedef int t_FmPcdCcCapwapReassmTimeoutParams ;
typedef int t_FmHc ;
typedef int t_Error ;
typedef int t_DpaaFD ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,void*) ;
 TYPE_2__* FUNC_2 (int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,TYPE_2__*,void*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

t_Error FUNC_8(t_Handle VAR_5, t_FmPcdCcCapwapReassmTimeoutParams *VAR_6 )
{
    t_FmHc *VAR_7 = (t_FmHc*)VAR_5;
    t_HcFrame *VAR_8;
    t_DpaaFD VAR_9;
    t_Error VAR_10;
    uint32_t VAR_11;

    FUNC_5(VAR_5, VAR_0,0);

    VAR_8 = FUNC_2(VAR_7, &VAR_11);
    if (!VAR_8)
        FUNC_4(VAR_4, VAR_1, ("HC Frame object"));

    FUNC_7(VAR_8, 0, sizeof(t_HcFrame));
    VAR_8->opcode = (uint32_t)(VAR_2 | VAR_3);
    FUNC_6(&VAR_8->hcSpecificData.ccCapwapReassmTimeout, VAR_6, sizeof(t_FmPcdCcCapwapReassmTimeoutParams));
    VAR_8->commandSequence = VAR_11;
    FUNC_0(sizeof(t_HcFrame));

    VAR_10 = FUNC_1(VAR_7, &VAR_9, VAR_11);

    FUNC_3(VAR_7, VAR_8, VAR_11);
    return VAR_10;
}
