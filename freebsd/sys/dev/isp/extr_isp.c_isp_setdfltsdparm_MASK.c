
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_19__ {int isp_data_dma_burst_enabl; int isp_async_data_setup; int isp_selection_timeout; int isp_tag_aging; int isp_bus_reset_delay; scalar_t__ isp_ultramode; int isp_req_ack_active_neg; int isp_data_line_active_neg; void* isp_initiator_id; TYPE_1__* isp_devparam; scalar_t__ isp_retry_delay; scalar_t__ isp_retry_count; int isp_max_queue_depth; scalar_t__ isp_fifo_threshold; scalar_t__ isp_cmd_dma_burst_enable; } ;
typedef TYPE_2__ sdparam ;
struct TYPE_20__ {int* param; } ;
typedef TYPE_3__ mbreg_t ;
struct TYPE_21__ {scalar_t__ isp_type; scalar_t__ isp_bustype; int isp_clock; int isp_confopts; } ;
typedef TYPE_4__ ispsoftc_t ;
struct TYPE_18__ {int dev_enable; void* nvrm_period; void* goal_period; void* nvrm_offset; void* goal_offset; int nvrm_flags; int goal_flags; scalar_t__ actv_flags; scalar_t__ actv_period; scalar_t__ actv_offset; int exc_throttle; } ;


 void* FUNC_0 (TYPE_4__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ) ;
 TYPE_2__* FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_10(ispsoftc_t *VAR_16)
{
 int VAR_17;
 sdparam *VAR_18, *VAR_19;

 VAR_18 = FUNC_7(VAR_16, 0);
 if (FUNC_2(VAR_16))
  VAR_19 = VAR_18 + 1;
 else
  VAR_19 = ((void*)0);




 VAR_18->isp_cmd_dma_burst_enable = 0;
 VAR_18->isp_data_dma_burst_enabl = 1;
 VAR_18->isp_fifo_threshold = 0;
 VAR_18->isp_initiator_id = FUNC_0(VAR_16, 0);
 if (VAR_16->isp_type >= VAR_11) {
  VAR_18->isp_async_data_setup = 9;
 } else {
  VAR_18->isp_async_data_setup = 6;
 }
 VAR_18->isp_selection_timeout = 250;
 VAR_18->isp_max_queue_depth = FUNC_5(VAR_16);
 VAR_18->isp_tag_aging = 8;
 VAR_18->isp_bus_reset_delay = 5;




 VAR_18->isp_retry_count = 0;
 VAR_18->isp_retry_delay = 0;

 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
  VAR_18->isp_devparam[VAR_17].exc_throttle = VAR_9;
  VAR_18->isp_devparam[VAR_17].dev_enable = 1;
 }







 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
  uint8_t VAR_20, VAR_21;
  VAR_18->isp_devparam[VAR_17].actv_offset = 0;
  VAR_18->isp_devparam[VAR_17].actv_period = 0;
  VAR_18->isp_devparam[VAR_17].actv_flags = 0;

  VAR_18->isp_devparam[VAR_17].goal_flags =
      VAR_18->isp_devparam[VAR_17].nvrm_flags = VAR_0;





  if (FUNC_4(VAR_16)) {
   VAR_20 = VAR_5 >> 8;
   VAR_21 = VAR_5 & 0xff;
  } else if (FUNC_3(VAR_16)) {
   VAR_20 = VAR_4 >> 8;
   VAR_21 = VAR_4 & 0xff;
  } else if (FUNC_1(VAR_16)) {
   VAR_20 = VAR_2 >> 8;
   VAR_21 = VAR_2 & 0xff;
  } else if ((VAR_16->isp_bustype == VAR_7 &&
      VAR_16->isp_type < VAR_10) ||
      (VAR_16->isp_bustype == VAR_6 &&
      VAR_16->isp_type < VAR_11) ||
      (VAR_16->isp_clock && VAR_16->isp_clock < 60) ||
      (VAR_18->isp_ultramode == 0)) {
   VAR_20 = VAR_1 >> 8;
   VAR_21 = VAR_1 & 0xff;
  } else {
   VAR_20 = VAR_3 >> 8;
   VAR_21 = VAR_3 & 0xff;
  }
  VAR_18->isp_devparam[VAR_17].goal_offset =
      VAR_18->isp_devparam[VAR_17].nvrm_offset = VAR_20;
  VAR_18->isp_devparam[VAR_17].goal_period =
      VAR_18->isp_devparam[VAR_17].nvrm_period = VAR_21;

 }




 if (VAR_19) {
  *VAR_19 = *VAR_18;
  VAR_19->isp_initiator_id = FUNC_0(VAR_16, 1);
 }







 if ((VAR_16->isp_confopts & VAR_8) == 0) {
  mbreg_t VAR_22;

  if (FUNC_9(VAR_16, 0) == 0) {
   if (FUNC_2(VAR_16)) {
    if (FUNC_9(VAR_16, 1) == 0) {
     return;
    }
   }
  }
  FUNC_6(&VAR_22, VAR_15, VAR_13, 0);
  FUNC_8(VAR_16, &VAR_22);
  if (VAR_22.param[0] != VAR_14) {
   VAR_18->isp_req_ack_active_neg = 1;
   VAR_18->isp_data_line_active_neg = 1;
   if (VAR_19) {
    VAR_19->isp_req_ack_active_neg = 1;
    VAR_19->isp_data_line_active_neg = 1;
   }
  } else {
   VAR_18->isp_req_ack_active_neg =
       (VAR_22.param[1] >> 4) & 0x1;
   VAR_18->isp_data_line_active_neg =
       (VAR_22.param[1] >> 5) & 0x1;
   if (VAR_19) {
    VAR_19->isp_req_ack_active_neg =
        (VAR_22.param[2] >> 4) & 0x1;
    VAR_19->isp_data_line_active_neg =
        (VAR_22.param[2] >> 5) & 0x1;
   }
  }
 }

}
