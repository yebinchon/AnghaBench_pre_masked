
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int isp_fifo_threshold; int isp_async_data_setup; TYPE_1__* isp_devparam; int isp_fast_mttr; int isp_max_queue_depth; int isp_selection_timeout; int isp_tag_aging; int isp_cmd_dma_burst_enable; int isp_data_dma_burst_enabl; int isp_data_line_active_neg; int isp_req_ack_active_neg; int isp_retry_delay; int isp_retry_count; int isp_bus_reset_delay; int isp_initiator_id; } ;
typedef TYPE_2__ sdparam ;
struct TYPE_9__ {int isp_confopts; scalar_t__ isp_type; } ;
typedef TYPE_3__ ispsoftc_t ;
struct TYPE_7__ {int nvrm_offset; int nvrm_period; int goal_offset; int goal_period; int nvrm_flags; int goal_flags; scalar_t__ actv_flags; int exc_throttle; int dev_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 scalar_t__ FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 scalar_t__ FUNC_18 (int *,int) ;
 scalar_t__ FUNC_19 (int *,int) ;
 scalar_t__ FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int) ;
 scalar_t__ FUNC_23 (int *,int) ;
 scalar_t__ FUNC_24 (int *,int) ;
 int VAR_9 ;
 TYPE_2__* FUNC_25 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_26(ispsoftc_t *VAR_10, uint8_t *VAR_11)
{
 sdparam *VAR_12 = FUNC_25(VAR_10, 0);
 int VAR_13;

 VAR_12->isp_fifo_threshold =
  FUNC_8(VAR_11) |
  (FUNC_9(VAR_11) << 2);

 if ((VAR_10->isp_confopts & VAR_7) == 0)
  VAR_12->isp_initiator_id = FUNC_10(VAR_11);

 VAR_12->isp_bus_reset_delay =
  FUNC_1(VAR_11);

 VAR_12->isp_retry_count =
  FUNC_2(VAR_11);

 VAR_12->isp_retry_delay =
  FUNC_3(VAR_11);

 VAR_12->isp_async_data_setup =
  FUNC_0(VAR_11);

 if (VAR_10->isp_type >= VAR_8) {
  if (VAR_12->isp_async_data_setup < 9) {
   VAR_12->isp_async_data_setup = 9;
  }
 } else {
  if (VAR_12->isp_async_data_setup != 6) {
   VAR_12->isp_async_data_setup = 6;
  }
 }

 VAR_12->isp_req_ack_active_neg =
  FUNC_12(VAR_11);

 VAR_12->isp_data_line_active_neg =
  FUNC_6(VAR_11);

 VAR_12->isp_data_dma_burst_enabl =
  FUNC_5(VAR_11);

 VAR_12->isp_cmd_dma_burst_enable =
  FUNC_4(VAR_11);

 VAR_12->isp_tag_aging =
  FUNC_14(VAR_11);

 VAR_12->isp_selection_timeout =
  FUNC_13(VAR_11);

 VAR_12->isp_max_queue_depth =
  FUNC_11(VAR_11);

 VAR_12->isp_fast_mttr = FUNC_7(VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_12->isp_devparam[VAR_13].dev_enable =
   FUNC_15(VAR_11, VAR_13);
  VAR_12->isp_devparam[VAR_13].exc_throttle =
   FUNC_17(VAR_11, VAR_13);
  VAR_12->isp_devparam[VAR_13].nvrm_offset =
   FUNC_21(VAR_11, VAR_13);
  VAR_12->isp_devparam[VAR_13].nvrm_period =
   FUNC_22(VAR_11, VAR_13);





  if (VAR_10->isp_type < VAR_8) {




   if (VAR_12->isp_devparam[VAR_13].nvrm_period < 0x19) {
    VAR_12->isp_devparam[VAR_13].nvrm_period = 0x19;
   }
   if (VAR_12->isp_devparam[VAR_13].nvrm_offset > 0xc) {
    VAR_12->isp_devparam[VAR_13].nvrm_offset = 0x0c;
   }
  } else {
   if (VAR_12->isp_devparam[VAR_13].nvrm_offset > 0x8) {
    VAR_12->isp_devparam[VAR_13].nvrm_offset = 0x8;
   }
  }
  VAR_12->isp_devparam[VAR_13].nvrm_flags = 0;
  if (FUNC_19(VAR_11, VAR_13))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_3;
  VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_0;
  if (FUNC_23(VAR_11, VAR_13))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_5;
  if (FUNC_20(VAR_11, VAR_13))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_4;
  if (FUNC_24(VAR_11, VAR_13))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_6;
  if (FUNC_18(VAR_11, VAR_13))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_2;
  if (FUNC_16(VAR_11, VAR_13))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_1;
  VAR_12->isp_devparam[VAR_13].actv_flags = 0;
  VAR_12->isp_devparam[VAR_13].goal_offset =
      VAR_12->isp_devparam[VAR_13].nvrm_offset;
  VAR_12->isp_devparam[VAR_13].goal_period =
      VAR_12->isp_devparam[VAR_13].nvrm_period;
  VAR_12->isp_devparam[VAR_13].goal_flags =
      VAR_12->isp_devparam[VAR_13].nvrm_flags;
 }
}
