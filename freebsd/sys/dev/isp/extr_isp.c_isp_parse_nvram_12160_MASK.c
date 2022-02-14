
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_1__* isp_devparam; int isp_max_queue_depth; int isp_selection_timeout; void* isp_cmd_dma_burst_enable; void* isp_data_dma_burst_enabl; int isp_data_line_active_neg; int isp_req_ack_active_neg; int isp_async_data_setup; int isp_retry_delay; int isp_retry_count; int isp_bus_reset_delay; int isp_initiator_id; int isp_fifo_threshold; } ;
typedef TYPE_2__ sdparam ;
struct TYPE_9__ {int isp_confopts; } ;
typedef TYPE_3__ ispsoftc_t ;
struct TYPE_7__ {int nvrm_flags; int goal_flags; int nvrm_period; int goal_period; int nvrm_offset; int goal_offset; scalar_t__ actv_flags; int exc_throttle; int dev_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int,int) ;
 scalar_t__ FUNC_12 (int *,int,int) ;
 int FUNC_13 (int *,int,int) ;
 scalar_t__ FUNC_14 (int *,int,int) ;
 scalar_t__ FUNC_15 (int *,int,int) ;
 scalar_t__ FUNC_16 (int *,int,int) ;
 int FUNC_17 (int *,int,int) ;
 int FUNC_18 (int *,int,int) ;
 scalar_t__ FUNC_19 (int *,int,int) ;
 scalar_t__ FUNC_20 (int *,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_21 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_22(ispsoftc_t *VAR_9, int VAR_10, uint8_t *VAR_11)
{
 sdparam *VAR_12 = FUNC_21(VAR_9, VAR_10);
 int VAR_13;

 VAR_12->isp_fifo_threshold =
     FUNC_6(VAR_11);

 if ((VAR_9->isp_confopts & VAR_7) == 0)
  VAR_12->isp_initiator_id = FUNC_7(VAR_11, VAR_10);

 VAR_12->isp_bus_reset_delay =
     FUNC_2(VAR_11, VAR_10);

 VAR_12->isp_retry_count =
     FUNC_3(VAR_11, VAR_10);

 VAR_12->isp_retry_delay =
     FUNC_4(VAR_11, VAR_10);

 VAR_12->isp_async_data_setup =
     FUNC_0(VAR_11, VAR_10);

 VAR_12->isp_req_ack_active_neg =
     FUNC_9(VAR_11, VAR_10);

 VAR_12->isp_data_line_active_neg =
     FUNC_5(VAR_11, VAR_10);

 VAR_12->isp_data_dma_burst_enabl =
     FUNC_1(VAR_11);

 VAR_12->isp_cmd_dma_burst_enable =
     FUNC_1(VAR_11);

 VAR_12->isp_selection_timeout =
     FUNC_10(VAR_11, VAR_10);

 VAR_12->isp_max_queue_depth =
      FUNC_8(VAR_11, VAR_10);

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  VAR_12->isp_devparam[VAR_13].dev_enable =
      FUNC_11(VAR_11, VAR_13, VAR_10);
  VAR_12->isp_devparam[VAR_13].exc_throttle =
   FUNC_13(VAR_11, VAR_13, VAR_10);
  VAR_12->isp_devparam[VAR_13].nvrm_offset =
   FUNC_17(VAR_11, VAR_13, VAR_10);
  VAR_12->isp_devparam[VAR_13].nvrm_period =
   FUNC_18(VAR_11, VAR_13, VAR_10);
  VAR_12->isp_devparam[VAR_13].nvrm_flags = 0;
  if (FUNC_15(VAR_11, VAR_13, VAR_10))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_3;
  VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_0;
  if (FUNC_19(VAR_11, VAR_13, VAR_10))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_5;
  if (FUNC_16(VAR_11, VAR_13, VAR_10))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_4;
  if (FUNC_20(VAR_11, VAR_13, VAR_10))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_6;
  if (FUNC_14(VAR_11, VAR_13, VAR_10))
   VAR_12->isp_devparam[VAR_13].nvrm_flags |= VAR_2;
  if (FUNC_12(VAR_11, VAR_13, VAR_10))
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
