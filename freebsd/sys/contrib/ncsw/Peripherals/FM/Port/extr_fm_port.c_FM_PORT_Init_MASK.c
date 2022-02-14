
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_9__ ;
typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_23__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_17__ ;
typedef struct TYPE_37__ TYPE_16__ ;
typedef struct TYPE_36__ TYPE_15__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


typedef union fman_port_bmi_regs {int dummy; } fman_port_bmi_regs ;
typedef void* uint8_t ;
typedef int uint64_t ;
typedef TYPE_12__* t_Handle ;
struct TYPE_35__ {int majorRev; int minorRev; } ;
typedef TYPE_13__ t_FmRevisionInfo ;
typedef int t_FmPortPrsRegs ;
struct TYPE_43__ {int tx_fifo_deq_pipeline_depth; } ;
struct TYPE_40__ {scalar_t__ startMargins; scalar_t__ endMargins; } ;
struct TYPE_34__ {TYPE_4__ dfltCfg; int liodnBase; int liodnOffset; scalar_t__ enBufPoolDepletion; TYPE_23__ bufMargins; scalar_t__ baseAddr; int errorsToDiscard; scalar_t__ bcbWorkaround; int bufferPrefixContent; int intContext; } ;
typedef TYPE_12__ t_FmPortDriverParam ;
struct TYPE_32__ {scalar_t__ autoResMaxSizes; } ;
struct TYPE_44__ {int majorRev; } ;
struct TYPE_33__ {int num; int extra; } ;
struct TYPE_42__ {scalar_t__ extra; scalar_t__ num; } ;
struct TYPE_41__ {scalar_t__ extra; scalar_t__ num; } ;
struct TYPE_39__ {scalar_t__ largestBufSize; } ;
struct TYPE_45__ {scalar_t__ high; scalar_t__ low; } ;
struct TYPE_38__ {int type; int fm_rev_maj; int sizeOfFifo; int deqPipelineDepth; TYPE_6__ fmMuramPhysBaseAddr; int maxFrameLength; int liodnBase; int liodnOffset; scalar_t__ independentMode; int extraSizeOfFifo; void* numOfExtraOpenDmas; void* numOfOpenDmas; void* numOfExtraTasks; void* numOfTasks; scalar_t__ portType; int hardwarePortId; scalar_t__ im_en; void* ext_pools_num; struct fman_port_qmi_regs* qmi_regs; union fman_port_bmi_regs* bmi_regs; int fm_rev_min; } ;
struct TYPE_36__ {scalar_t__ portType; int fmMuramPhysBaseAddr; TYPE_10__ deepSleepVars; TYPE_9__* p_FmPortBmiRegs; int h_Fm; int h_FmMuram; TYPE_5__ fmRevInfo; int maxFrameLength; TYPE_12__* p_FmPortDriverParam; scalar_t__ imEn; TYPE_11__ fifoBufs; TYPE_3__ openDmas; TYPE_2__ tasks; int hardwarePortId; TYPE_1__ rxPoolsParams; int * p_FmPortPrsRegs; TYPE_17__ port; int internalBufferOffset; int bufferOffsets; } ;
typedef TYPE_15__ t_FmPort ;
struct TYPE_37__ {int errorsDiscardMask; int discardMask; int misc; } ;
typedef TYPE_16__ t_FmPcdCtrlParamsPage ;
typedef TYPE_17__ t_FmInterModulePortInitParams ;
typedef scalar_t__ t_Error ;
struct fman_port_qmi_regs {int dummy; } ;
struct fman_port {int dummy; } ;
typedef int fmParams ;
typedef enum fman_port_type { ____Placeholder_fman_port_type } fman_port_type ;
typedef scalar_t__ e_FmPortType ;
struct TYPE_47__ {int fmbm_rfsem; int fmbm_rfsdm; } ;
struct TYPE_46__ {int fmbm_ofsem; int fmbm_ofsdm; } ;
struct TYPE_48__ {TYPE_8__ rxPortBmiRegs; TYPE_7__ ohPortBmiRegs; } ;


 int FUNC_0 (TYPE_16__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_15__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,TYPE_13__*) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_17__*) ;
 int FUNC_6 (TYPE_15__*) ;
 int FUNC_7 (TYPE_15__*) ;
 int FUNC_8 (TYPE_15__*,int ,void**) ;
 scalar_t__ FUNC_9 (int *,int *,TYPE_23__*,int *,int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_15__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 char* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (int ,scalar_t__,char*) ;
 int FUNC_13 (TYPE_12__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_15__*) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (TYPE_15__*) ;
 int FUNC_17 (int ,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_18 (TYPE_17__*,int ,int) ;

t_Error FUNC_19(t_Handle VAR_20)
{
    t_FmPort *VAR_21 = (t_FmPort*)VAR_20;
    t_FmPortDriverParam *VAR_22;
    t_Error VAR_23;
    t_FmInterModulePortInitParams VAR_24;
    t_FmRevisionInfo VAR_25;

    FUNC_13(VAR_20, VAR_3);
    FUNC_13(VAR_21->p_FmPortDriverParam, VAR_3);

    VAR_23 = FUNC_9(
            &VAR_21->p_FmPortDriverParam->intContext,
            &VAR_21->p_FmPortDriverParam->bufferPrefixContent,
            &VAR_21->p_FmPortDriverParam->bufMargins,
            &VAR_21->bufferOffsets, &VAR_21->internalBufferOffset);
    if (VAR_23 != VAR_5)
        FUNC_12(VAR_10, VAR_23, VAR_12);
    FUNC_1(VAR_21, VAR_2);

    VAR_22 = VAR_21->p_FmPortDriverParam;


    FUNC_18(&VAR_21->port, 0, sizeof(struct fman_port));
    VAR_21->port.type = (enum fman_port_type)VAR_21->portType;
    FUNC_3(VAR_21->h_Fm, &VAR_25);
    VAR_21->port.fm_rev_maj = VAR_25.majorRev;
    VAR_21->port.fm_rev_min = VAR_25.minorRev;
    VAR_21->port.bmi_regs =
            (union fman_port_bmi_regs *)FUNC_15(VAR_22->baseAddr + VAR_1);
    VAR_21->port.qmi_regs =
            (struct fman_port_qmi_regs *)FUNC_15(VAR_22->baseAddr + VAR_14);
    VAR_21->port.ext_pools_num = (uint8_t)((VAR_25.majorRev == 4) ? 4 : 8);
    VAR_21->port.im_en = VAR_21->imEn;
    VAR_21->p_FmPortPrsRegs =
            (t_FmPortPrsRegs *)FUNC_15(VAR_22->baseAddr + VAR_13);

    if (((VAR_21->portType == VAR_19)
            || (VAR_21->portType == VAR_18)) && !VAR_21->imEn)
    {



        VAR_23 = FUNC_14(VAR_21);
        if (VAR_23)
            FUNC_12(VAR_10, VAR_23, VAR_12);

        if (VAR_22->bufMargins.startMargins + VAR_11
                + VAR_22->bufMargins.endMargins
                > VAR_21->rxPoolsParams.largestBufSize)
            FUNC_12(
                    VAR_10,
                    VAR_4,
                    ("bufMargins.startMargins (%d) + minimum buf size (64) + bufMargins.endMargins (%d) is larger than maximum external buffer size (%d)", VAR_22->bufMargins.startMargins, VAR_22->bufMargins.endMargins, VAR_21->rxPoolsParams.largestBufSize));
    }
    if (VAR_21->portType == VAR_17)
    {
        {






            {

                VAR_23 = FUNC_14(VAR_21);
                if (VAR_23)
                    FUNC_12(VAR_10, VAR_23, VAR_12);
            }
        }
    }




    FUNC_18(&VAR_24, 0, sizeof(VAR_24));
    VAR_24.hardwarePortId = VAR_21->hardwarePortId;
    VAR_24.portType = (e_FmPortType)VAR_21->portType;
    VAR_24.numOfTasks = (uint8_t)VAR_21->tasks.num;
    VAR_24.numOfExtraTasks = (uint8_t)VAR_21->tasks.extra;
    VAR_24.numOfOpenDmas = (uint8_t)VAR_21->openDmas.num;
    VAR_24.numOfExtraOpenDmas = (uint8_t)VAR_21->openDmas.extra;

    if (VAR_21->fifoBufs.num)
    {
        VAR_23 = FUNC_16(VAR_21);
        if (VAR_23 != VAR_5)
            FUNC_12(VAR_10, VAR_23, VAR_12);
    }
    VAR_24.sizeOfFifo = VAR_21->fifoBufs.num;
    VAR_24.extraSizeOfFifo = VAR_21->fifoBufs.extra;
    VAR_24.independentMode = VAR_21->imEn;
    VAR_24.liodnOffset = VAR_22->liodnOffset;
    VAR_24.liodnBase = VAR_22->liodnBase;
    VAR_24.deqPipelineDepth =
            VAR_21->p_FmPortDriverParam->dfltCfg.tx_fifo_deq_pipeline_depth;
    VAR_24.maxFrameLength = VAR_21->maxFrameLength;

    if ((VAR_21->portType == VAR_17) ||
            (VAR_21->portType == VAR_16))
    {
        if (!((VAR_21->fmRevInfo.majorRev == 4) ||
                        (VAR_21->fmRevInfo.majorRev >= 6)))



        VAR_24.deqPipelineDepth = 2;
    }


    VAR_23 = FUNC_5(VAR_21->h_Fm, &VAR_24);
    if (VAR_23)
        FUNC_12(VAR_10, VAR_23, VAR_12);


    VAR_21->fmMuramPhysBaseAddr =
            (uint64_t)((uint64_t)(VAR_24.fmMuramPhysBaseAddr.low)
                    | ((uint64_t)(VAR_24.fmMuramPhysBaseAddr.high) << 32));
    VAR_21->h_FmMuram = FUNC_4(VAR_21->h_Fm);

    VAR_23 = FUNC_11(VAR_21);
    if (VAR_23 != VAR_5)
        FUNC_12(VAR_10, VAR_23, VAR_12);

    FUNC_7(VAR_21);
    if (VAR_21->deepSleepVars.autoResMaxSizes)
        FUNC_6(VAR_21);
    return VAR_5;
}
