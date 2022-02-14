
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_23__ {scalar_t__ size; scalar_t__ extBufOffset; scalar_t__ intContextOffset; } ;
struct fman_port_cfg {int tx_fifo_deq_pipeline_depth; int rx_pri_elevation; int rx_fifo_thr; scalar_t__ rx_cut_end_bytes; scalar_t__ checksum_bytes_ignore; int tx_fifo_min_level; int tx_fifo_low_comf_level; scalar_t__ discard_override; } ;
struct TYPE_14__ {int numOfPools; scalar_t__ poolsGrpModeEnable; } ;
struct TYPE_15__ {scalar_t__ startMargins; } ;
struct TYPE_16__ {int manipExtraSpace; } ;
struct TYPE_24__ {int numOfPoolsUsed; } ;
struct TYPE_21__ {int liodnOffset; scalar_t__ deqSubPortal; int dfltFqid; int errFqid; int errorsToDiscard; scalar_t__ cheksumLastBytesIgnore; scalar_t__ deqPrefetchOption; scalar_t__ setSizeOfFifo; scalar_t__ setNumOfOpenDmas; scalar_t__ setNumOfTasks; TYPE_8__ intContext; struct fman_port_cfg dfltCfg; TYPE_10__ bufPoolDepletion; TYPE_11__ bufMargins; TYPE_1__ bufferPrefixContent; scalar_t__ p_BackupBmPools; TYPE_9__ extBufPools; } ;
typedef TYPE_6__ t_FmPortDriverParam ;
struct TYPE_20__ {int majorRev; } ;
struct TYPE_19__ {int extra; int num; } ;
struct TYPE_18__ {scalar_t__ num; scalar_t__ extra; } ;
struct TYPE_17__ {scalar_t__ num; scalar_t__ extra; } ;
struct TYPE_22__ {scalar_t__ portType; TYPE_6__* p_FmPortDriverParam; TYPE_5__ fmRevInfo; TYPE_4__ fifoBufs; TYPE_3__ openDmas; TYPE_2__ tasks; scalar_t__ imEn; } ;
typedef TYPE_7__ t_FmPort ;
typedef scalar_t__ t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_11__*) ;
 scalar_t__ FUNC_3 (TYPE_9__*,scalar_t__,TYPE_10__*) ;
 scalar_t__ FUNC_4 (TYPE_8__*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 char* VAR_23 ;
 int FUNC_5 (int ,int ,char*) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;

__attribute__((used)) static t_Error FUNC_6(t_FmPort *VAR_30)
{
    t_FmPortDriverParam *VAR_31 = VAR_30->p_FmPortDriverParam;
    struct fman_port_cfg *VAR_32 = &VAR_31->dfltCfg;
    t_Error VAR_33 = VAR_10;
    uint32_t VAR_34;

    if (VAR_30->imEn)
    {
        if (VAR_30->portType == VAR_27)
            if (VAR_30->p_FmPortDriverParam->dfltCfg.tx_fifo_deq_pipeline_depth
                    > 2)
                FUNC_5(
                        VAR_14,
                        VAR_8,
                        ("fifoDeqPipelineDepth for IM 10G can't be larger than 2"));

        if ((VAR_33 = FUNC_1(VAR_30)) != VAR_10)
            return FUNC_0(VAR_33);
    }
    else
    {



        if ((VAR_30->portType == VAR_26)
                || (VAR_30->portType == VAR_27))
        {

            if (!VAR_31->extBufPools.numOfPoolsUsed)
                FUNC_5(
                        VAR_14,
                        VAR_8,
                        ("extBufPools.numOfPoolsUsed=0. At least one buffer pool must be defined"));

            if (FUNC_3(&VAR_31->extBufPools,
                                        VAR_31->p_BackupBmPools,
                                        &VAR_31->bufPoolDepletion) != VAR_10)
                FUNC_5(VAR_14, VAR_8, VAR_23);


            if (VAR_31->intContext.size
                    && (VAR_31->intContext.size
                            + VAR_31->intContext.extBufOffset
                            > VAR_31->bufMargins.startMargins))
                FUNC_5(VAR_14, VAR_8,
                             ("intContext.size is larger than start margins"));

            if ((VAR_31->liodnOffset != (uint16_t)VAR_4)
                    && (VAR_31->liodnOffset & ~VAR_11))
                FUNC_5(
                        VAR_14,
                        VAR_8,
                        ("liodnOffset is larger than %d", VAR_11+1));






        }




        else
        {
            if (VAR_31->deqSubPortal >= VAR_12)
                FUNC_5(
                        VAR_14,
                        VAR_8,
                        (" deqSubPortal has to be in the range of 0 - %d", VAR_12));


            if ((VAR_31->intContext.size)
                    && (VAR_31->intContext.intContextOffset
                            < VAR_22))
                FUNC_5(
                        VAR_14,
                        VAR_8,
                        ("non-Rx intContext.intContextOffset can't be smaller than %d", VAR_22));

            if ((VAR_30->portType == VAR_28)
                    || (VAR_30->portType == VAR_29)

                    || (VAR_30->p_FmPortDriverParam->dfltCfg.tx_fifo_deq_pipeline_depth
                            != VAR_3))
            {

                if ((!VAR_30->p_FmPortDriverParam->dfltCfg.tx_fifo_deq_pipeline_depth)
                        || (VAR_30->p_FmPortDriverParam->dfltCfg.tx_fifo_deq_pipeline_depth
                                > VAR_15))
                    FUNC_5(
                            VAR_14,
                            VAR_8,
                            ("fifoDeqPipelineDepth can't be larger than %d", VAR_15));
            }
        }




        if ((VAR_30->portType == VAR_26)
                || (VAR_30->portType == VAR_27)
                || (VAR_30->portType == VAR_25))
        {
            if (!VAR_31->dfltFqid)
                FUNC_5(VAR_14, VAR_8,
                             ("dfltFqid must be between 1 and 2^24-1"));




        }






        if ((VAR_31->errFqid & ~0x00FFFFFF) || !VAR_31->errFqid)
            FUNC_5(VAR_14, VAR_8,
                         ("errFqid must be between 1 and 2^24-1"));
        if (VAR_31->dfltFqid & ~0x00FFFFFF)
            FUNC_5(VAR_14, VAR_8,
                         ("dfltFqid must be between 1 and 2^24-1"));
    }




    if ((VAR_30->portType == VAR_26)
            || (VAR_30->portType == VAR_27))
    {
        if (VAR_32->rx_pri_elevation % VAR_0)
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("rxFifoPriElevationLevel has to be divisible by %d", VAR_0));
        if ((VAR_32->rx_pri_elevation < VAR_0)
                || (VAR_32->rx_pri_elevation > VAR_20))
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("rxFifoPriElevationLevel has to be in the range of 256 - %d", VAR_20));
        if (VAR_32->rx_fifo_thr % VAR_0)
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("rxFifoThreshold has to be divisible by %d", VAR_0));
        if ((VAR_32->rx_fifo_thr < VAR_0)
                || (VAR_32->rx_fifo_thr > VAR_20))
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("rxFifoThreshold has to be in the range of 256 - %d", VAR_20));


        if (VAR_32->rx_cut_end_bytes > VAR_13)
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("cutBytesFromEnd can't be larger than %d", VAR_13));

        if (FUNC_2(&VAR_31->bufMargins) != VAR_10)
            FUNC_5(VAR_14, VAR_8, VAR_23);


        if (VAR_31->setSizeOfFifo
                && (VAR_30->fifoBufs.extra % VAR_0))
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("fifoBufs.extra has to be divisible by %d", VAR_0));

        if (VAR_31->bufPoolDepletion.poolsGrpModeEnable
                && !VAR_31->bufPoolDepletion.numOfPools)
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("bufPoolDepletion.numOfPools can not be 0 when poolsGrpModeEnable=TRUE"));
    }





    else
        if (VAR_30->fifoBufs.extra)
            FUNC_5(VAR_14, VAR_8,
                         (" No fifoBufs.extra for non Rx ports"));




    if ((VAR_30->portType == VAR_28)
            || (VAR_30->portType == VAR_29))
    {
        if (VAR_32->tx_fifo_min_level % VAR_0)
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("txFifoMinFillLevel has to be divisible by %d", VAR_0));
        if (VAR_32->tx_fifo_min_level > (VAR_20 - 256))
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("txFifoMinFillLevel has to be in the range of 0 - %d", (VAR_20 - 256)));
        if (VAR_32->tx_fifo_low_comf_level % VAR_0)
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("txFifoLowComfLevel has to be divisible by %d", VAR_0));
        if ((VAR_32->tx_fifo_low_comf_level < VAR_0)
                || (VAR_32->tx_fifo_low_comf_level > VAR_20))
            FUNC_5(
                    VAR_14,
                    VAR_8,
                    ("txFifoLowComfLevel has to be in the range of 256 - %d", VAR_20));

        if (VAR_30->portType == VAR_28)
            if (VAR_30->p_FmPortDriverParam->dfltCfg.tx_fifo_deq_pipeline_depth
                    > 2)
                FUNC_5(
                        VAR_14, VAR_8,
                        ("fifoDeqPipelineDepth for 1G can't be larger than 2"));
    }





    else
        if (VAR_32->discard_override && VAR_31->errorsToDiscard)
            FUNC_5(
                    VAR_14,
                    VAR_5,
                    ("errorsToDiscard is not empty, but frmDiscardOverride selected (all discarded frames to be enqueued to error queue)."));




    if ((VAR_30->portType == VAR_26)
            || (VAR_30->portType == VAR_27)
            || (VAR_30->portType == VAR_25))
    {
        if (VAR_30->portType == VAR_25)
            VAR_34 = VAR_1;
        else
            VAR_34 = VAR_2;


        if (VAR_31->errorsToDiscard & VAR_34)
            FUNC_5(VAR_14, VAR_7,
                         ("errorsToDiscard contains undefined bits"));
    }
    if ((VAR_30->portType == VAR_25)
            || (VAR_30->portType == VAR_24))
    {

        if ((VAR_30->fmRevInfo.majorRev < 6) &&
                (VAR_30->p_FmPortDriverParam->cheksumLastBytesIgnore != VAR_3))

        FUNC_5(VAR_14, VAR_9, ("cheksumLastBytesIgnore is available for Rx & Tx ports only"));



        if ((!((VAR_30->fmRevInfo.majorRev == 4) ||
                                (VAR_30->fmRevInfo.majorRev >= 6))) &&
                (VAR_30->p_FmPortDriverParam->dfltCfg.tx_fifo_deq_pipeline_depth != VAR_3))

        FUNC_5(VAR_14, VAR_6, ("fifoDeqPipelineDepth is available for Tx ports only"));

    }





    if ((VAR_31->cheksumLastBytesIgnore > VAR_13)
            && ((VAR_31->cheksumLastBytesIgnore != VAR_3)))
        FUNC_5(
                VAR_14,
                VAR_8,
                ("cheksumLastBytesIgnore can't be larger than %d", VAR_13));

    if (FUNC_4(&VAR_31->intContext) != VAR_10)
        FUNC_5(VAR_14, VAR_8, VAR_23);


    if (VAR_31->setNumOfTasks
            && ((!VAR_30->tasks.num)
                    || (VAR_30->tasks.num > VAR_19)))
        FUNC_5(VAR_14, VAR_8,
                     ("tasks.num can't be larger than %d", VAR_19));
    if (VAR_31->setNumOfTasks
            && (VAR_30->tasks.extra > VAR_18))
        FUNC_5(
                VAR_14,
                VAR_8,
                ("tasks.extra can't be larger than %d", VAR_18));
    if (VAR_31->setNumOfOpenDmas
            && ((!VAR_30->openDmas.num)
                    || (VAR_30->openDmas.num > VAR_16)))
        FUNC_5(VAR_14, VAR_8,
                     ("openDmas.num can't be larger than %d", VAR_16));
    if (VAR_31->setNumOfOpenDmas
            && (VAR_30->openDmas.extra > VAR_17))
        FUNC_5(
                VAR_14,
                VAR_8,
                ("openDmas.extra can't be larger than %d", VAR_17));
    if (VAR_31->setSizeOfFifo
            && (!VAR_30->fifoBufs.num
                    || (VAR_30->fifoBufs.num > VAR_20)))
        FUNC_5(
                VAR_14,
                VAR_8,
                ("fifoBufs.num has to be in the range of 256 - %d", VAR_20));
    if (VAR_31->setSizeOfFifo && (VAR_30->fifoBufs.num % VAR_0))
        FUNC_5(
                VAR_14, VAR_8,
                ("fifoBufs.num has to be divisible by %d", VAR_0));
    return VAR_10;
}
