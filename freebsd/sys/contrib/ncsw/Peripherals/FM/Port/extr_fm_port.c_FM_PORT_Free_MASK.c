
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_14__ {scalar_t__ h_Spinlock; scalar_t__ p_ParamsPage; int h_FmMuram; int portId; scalar_t__ portType; int h_Fm; TYPE_2__* p_FmPortDriverParam; int hardwarePortId; scalar_t__ imEn; scalar_t__ enabled; scalar_t__ pcdEngines; } ;
typedef TYPE_3__ t_FmPort ;
struct TYPE_15__ {int deqPipelineDepth; scalar_t__ portType; int hardwarePortId; } ;
typedef TYPE_4__ t_FmInterModulePortFreeParams ;
typedef scalar_t__ t_Error ;
typedef int fmParams ;
typedef scalar_t__ e_FmPortType ;
struct TYPE_12__ {int tx_fifo_deq_pipeline_depth; } ;
struct TYPE_13__ {TYPE_1__ dfltCfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_4__*,int ,int) ;

t_Error FUNC_11(t_Handle VAR_4)
{
    t_FmPort *VAR_5 = (t_FmPort*)VAR_4;
    t_FmInterModulePortFreeParams VAR_6;

    FUNC_7(VAR_5, VAR_0);

    if (VAR_5->pcdEngines)
        FUNC_6(
                VAR_3,
                VAR_1,
                ("Trying to free a port with PCD. FM_PORT_DeletePCD must be called first."));

    if (VAR_5->enabled)
    {
        if (FUNC_1(VAR_5) != VAR_2)
            FUNC_6(VAR_3, VAR_1, ("FM_PORT_Disable FAILED"));
    }

    if (VAR_5->imEn)
        FUNC_4(VAR_5);

    FUNC_3(VAR_5);

    FUNC_10(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.hardwarePortId = VAR_5->hardwarePortId;
    VAR_6.portType = (e_FmPortType)VAR_5->portType;
    VAR_6.deqPipelineDepth =
            VAR_5->p_FmPortDriverParam->dfltCfg.tx_fifo_deq_pipeline_depth;

    FUNC_2(VAR_5->h_Fm, &VAR_6);
    if (VAR_5->h_Spinlock)
        FUNC_9(VAR_5->h_Spinlock);

    FUNC_8(VAR_5);

    return VAR_2;
}
