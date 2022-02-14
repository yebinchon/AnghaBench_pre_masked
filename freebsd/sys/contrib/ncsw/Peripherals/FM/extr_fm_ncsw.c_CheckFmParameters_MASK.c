
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ partVSPBase; scalar_t__ partNumOfVSPs; int userSetExceptions; TYPE_2__* p_FmStateStruct; TYPE_3__* p_FmDriverParam; int f_BusError; int f_Exception; int resetOnInit; } ;
typedef TYPE_4__ t_Fm ;
typedef int t_Error ;
struct TYPE_9__ {scalar_t__ dma_axi_dbg_num_of_beats; int dma_cam_num_of_entries; scalar_t__ dma_comm_qtsh_asrt_emer; scalar_t__ dma_comm_qtsh_clr_emer; scalar_t__ dma_read_buf_tsh_asrt_emer; scalar_t__ dma_read_buf_tsh_clr_emer; scalar_t__ dma_write_buf_tsh_asrt_emer; scalar_t__ dma_write_buf_tsh_clr_emer; scalar_t__ dma_dbg_cnt_mode; scalar_t__ dma_emergency_bus_select; scalar_t__ dma_aid_mode; scalar_t__ disp_limit_tsh; scalar_t__ tnum_aging_period; scalar_t__ halt_on_unrecov_ecc_err; scalar_t__ dma_watchdog; scalar_t__ dma_stop_on_bus_error; } ;
struct TYPE_7__ {int majorRev; } ;
struct TYPE_8__ {int totalFifoSize; scalar_t__ totalNumOfTasks; scalar_t__ maxNumOfOpenDmas; TYPE_1__ revInfo; int fmClkFreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_23 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static t_Error FUNC_3(t_Fm *VAR_24)
{
    if (FUNC_0(VAR_24) && !VAR_24->resetOnInit)
        FUNC_1(VAR_23, VAR_13, ("Old FMan CTRL code is loaded; FM must be reset!"));

    if (!VAR_24->p_FmDriverParam->dma_axi_dbg_num_of_beats ||
        (VAR_24->p_FmDriverParam->dma_axi_dbg_num_of_beats > VAR_6))
        FUNC_1(VAR_23, VAR_13,
                     ("axiDbgNumOfBeats has to be in the range 1 - %d", VAR_6));

    if (VAR_24->p_FmDriverParam->dma_cam_num_of_entries % VAR_4)
        FUNC_1(VAR_23, VAR_13, ("dma_cam_num_of_entries has to be divisble by %d", VAR_4));


    if (VAR_24->p_FmDriverParam->dma_comm_qtsh_asrt_emer > VAR_8)
        FUNC_1(VAR_23, VAR_13, ("dma_comm_qtsh_asrt_emer can not be larger than %d", VAR_8));
    if (VAR_24->p_FmDriverParam->dma_comm_qtsh_clr_emer > VAR_8)
        FUNC_1(VAR_23, VAR_13, ("dma_comm_qtsh_clr_emer can not be larger than %d", VAR_8));
    if (VAR_24->p_FmDriverParam->dma_comm_qtsh_clr_emer >= VAR_24->p_FmDriverParam->dma_comm_qtsh_asrt_emer)
        FUNC_1(VAR_23, VAR_13, ("dma_comm_qtsh_clr_emer must be smaller than dma_comm_qtsh_asrt_emer"));

    if (VAR_24->p_FmDriverParam->dma_read_buf_tsh_asrt_emer > VAR_7)
        FUNC_1(VAR_23, VAR_13, ("dma_read_buf_tsh_asrt_emer can not be larger than %d", VAR_7));
    if (VAR_24->p_FmDriverParam->dma_read_buf_tsh_clr_emer > VAR_7)
        FUNC_1(VAR_23, VAR_13, ("dma_read_buf_tsh_clr_emer can not be larger than %d", VAR_7));
    if (VAR_24->p_FmDriverParam->dma_read_buf_tsh_clr_emer >= VAR_24->p_FmDriverParam->dma_read_buf_tsh_asrt_emer)
        FUNC_1(VAR_23, VAR_13, ("dma_read_buf_tsh_clr_emer must be smaller than dma_read_buf_tsh_asrt_emer"));
    if (VAR_24->p_FmDriverParam->dma_write_buf_tsh_asrt_emer > VAR_7)
        FUNC_1(VAR_23, VAR_13, ("dma_write_buf_tsh_asrt_emer can not be larger than %d", VAR_7));
    if (VAR_24->p_FmDriverParam->dma_write_buf_tsh_clr_emer > VAR_7)
        FUNC_1(VAR_23, VAR_13, ("dma_write_buf_tsh_clr_emer can not be larger than %d", VAR_7));
    if (VAR_24->p_FmDriverParam->dma_write_buf_tsh_clr_emer >= VAR_24->p_FmDriverParam->dma_write_buf_tsh_asrt_emer)
        FUNC_1(VAR_23, VAR_13, ("dma_write_buf_tsh_clr_emer must be smaller than dma_write_buf_tsh_asrt_emer"));
    if (!VAR_24->p_FmStateStruct->fmClkFreq)
        FUNC_1(VAR_23, VAR_13, ("fmClkFreq must be set."));
    if (FUNC_2(VAR_24->p_FmDriverParam->dma_watchdog, VAR_24->p_FmStateStruct->fmClkFreq) > VAR_5)
        FUNC_1(VAR_23, VAR_13,
                     ("dma_watchdog depends on FM clock. dma_watchdog(in microseconds) * clk (in Mhz), may not exceed 0x08x", VAR_5));






    if (VAR_24->p_FmStateStruct->totalFifoSize % VAR_0)
        FUNC_1(VAR_23, VAR_13, ("totalFifoSize number has to be divisible by %d", VAR_0));
    if (!VAR_24->p_FmStateStruct->totalFifoSize ||
        (VAR_24->p_FmStateStruct->totalFifoSize > VAR_1))
        FUNC_1(VAR_23, VAR_13,
                     ("totalFifoSize (currently defined as %d) has to be in the range of 256 to %d",
                      VAR_24->p_FmStateStruct->totalFifoSize,
                      VAR_1));
    if (!VAR_24->p_FmStateStruct->totalNumOfTasks ||
        (VAR_24->p_FmStateStruct->totalNumOfTasks > VAR_3))
        FUNC_1(VAR_23, VAR_13, ("totalNumOfTasks number has to be in the range 1 - %d", VAR_3));







    if (VAR_24->p_FmDriverParam->disp_limit_tsh > VAR_22)
        FUNC_1(VAR_23, VAR_13, ("disp_limit_tsh can't be greater than %d", VAR_22));

    if (!VAR_24->f_Exception)
        FUNC_1(VAR_23, VAR_13, ("Exceptions callback not provided"));
    if (!VAR_24->f_BusError)
        FUNC_1(VAR_23, VAR_13, ("Exceptions callback not provided"));
    return VAR_15;
}
