
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_19__ {int isp_retry_count; int isp_retry_delay; int isp_async_data_setup; int isp_req_ack_active_neg; int isp_data_line_active_neg; int isp_tag_aging; int isp_selection_timeout; scalar_t__ isp_fast_mttr; } ;
typedef TYPE_1__ sdparam ;
struct TYPE_20__ {int* param; } ;
typedef TYPE_2__ mbreg_t ;
struct TYPE_21__ {int isp_residx; int isp_resodx; int isp_reqidx; int isp_reqodx; int isp_state; int isp_rquest_dma; int isp_result_dma; } ;
typedef TYPE_3__ ispsoftc_t ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ) ;
 void* FUNC_10 (TYPE_3__*) ;
 int VAR_20 ;
 void* FUNC_11 (TYPE_3__*) ;
 TYPE_1__* FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_14 (TYPE_3__*,int ,char*,int,...) ;
 int FUNC_15 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_16(ispsoftc_t *VAR_21)
{
 sdparam *VAR_22, *VAR_23;
 mbreg_t VAR_24;

 VAR_21->isp_state = VAR_3;

 VAR_22 = FUNC_12(VAR_21, 0);
 VAR_23 = VAR_22;
 if (FUNC_6(VAR_21)) {
  VAR_23 = FUNC_12(VAR_21, 1);
 }






 if (VAR_22->isp_fast_mttr) {
  FUNC_4(VAR_21, VAR_20, 0x1313);
 }





 FUNC_9(&VAR_24, VAR_17, VAR_7, 0);
 VAR_24.param[1] = VAR_22->isp_retry_count;
 VAR_24.param[2] = VAR_22->isp_retry_delay;
 VAR_24.param[6] = VAR_23->isp_retry_count;
 VAR_24.param[7] = VAR_23->isp_retry_delay;
 FUNC_13(VAR_21, &VAR_24);
 if (VAR_24.param[0] != VAR_9) {
  return;
 }




 FUNC_9(&VAR_24, VAR_15, VAR_7, 0);
 VAR_24.param[1] = VAR_22->isp_async_data_setup;
 VAR_24.param[2] = VAR_23->isp_async_data_setup;
 FUNC_13(VAR_21, &VAR_24);
 if (VAR_24.param[0] != VAR_9) {
  return;
 }




 FUNC_9(&VAR_24, VAR_14, VAR_8, 0);
 VAR_24.param[1] =
     (VAR_22->isp_req_ack_active_neg << 4) |
     (VAR_22->isp_data_line_active_neg << 5);
 VAR_24.param[2] =
     (VAR_23->isp_req_ack_active_neg << 4) |
     (VAR_23->isp_data_line_active_neg << 5);
 FUNC_13(VAR_21, &VAR_24);
 if (VAR_24.param[0] != VAR_9) {
  FUNC_14(VAR_21, VAR_4,
      "failed to set active negation state (%d,%d), (%d,%d)",
      VAR_22->isp_req_ack_active_neg,
      VAR_22->isp_data_line_active_neg,
      VAR_23->isp_req_ack_active_neg,
      VAR_23->isp_data_line_active_neg);



 }




 FUNC_9(&VAR_24, VAR_19, VAR_7, 0);
 VAR_24.param[1] = VAR_22->isp_tag_aging;
 VAR_24.param[2] = VAR_23->isp_tag_aging;
 FUNC_13(VAR_21, &VAR_24);
 if (VAR_24.param[0] != VAR_9) {
  FUNC_14(VAR_21, VAR_4, "failed to set tag age limit (%d,%d)",
      VAR_22->isp_tag_aging, VAR_23->isp_tag_aging);
  return;
 }




 FUNC_9(&VAR_24, VAR_18, VAR_7, 0);
 VAR_24.param[1] = VAR_22->isp_selection_timeout;
 VAR_24.param[2] = VAR_23->isp_selection_timeout;
 FUNC_13(VAR_21, &VAR_24);
 if (VAR_24.param[0] != VAR_9) {
  return;
 }


 FUNC_15(VAR_21, 0);
 if (FUNC_6(VAR_21))
  FUNC_15(VAR_21, 1);





 if (FUNC_7(VAR_21) || FUNC_5(VAR_21)) {
  FUNC_9(&VAR_24, VAR_13, VAR_7, 0);
  VAR_24.param[1] = FUNC_10(VAR_21);
  VAR_24.param[2] = FUNC_1(VAR_21->isp_result_dma);
  VAR_24.param[3] = FUNC_0(VAR_21->isp_result_dma);
  VAR_24.param[4] = 0;
  VAR_24.param[6] = FUNC_3(VAR_21->isp_result_dma);
  VAR_24.param[7] = FUNC_2(VAR_21->isp_result_dma);
  FUNC_13(VAR_21, &VAR_24);
  if (VAR_24.param[0] != VAR_9) {
   return;
  }
  VAR_21->isp_residx = VAR_21->isp_resodx = VAR_24.param[5];

  FUNC_9(&VAR_24, VAR_11, VAR_7, 0);
  VAR_24.param[1] = FUNC_11(VAR_21);
  VAR_24.param[2] = FUNC_1(VAR_21->isp_rquest_dma);
  VAR_24.param[3] = FUNC_0(VAR_21->isp_rquest_dma);
  VAR_24.param[5] = 0;
  VAR_24.param[6] = FUNC_3(VAR_21->isp_result_dma);
  VAR_24.param[7] = FUNC_2(VAR_21->isp_result_dma);
  FUNC_13(VAR_21, &VAR_24);
  if (VAR_24.param[0] != VAR_9) {
   return;
  }
  VAR_21->isp_reqidx = VAR_21->isp_reqodx = VAR_24.param[4];
 } else {
  FUNC_9(&VAR_24, VAR_12, VAR_7, 0);
  VAR_24.param[1] = FUNC_10(VAR_21);
  VAR_24.param[2] = FUNC_1(VAR_21->isp_result_dma);
  VAR_24.param[3] = FUNC_0(VAR_21->isp_result_dma);
  VAR_24.param[4] = 0;
  FUNC_13(VAR_21, &VAR_24);
  if (VAR_24.param[0] != VAR_9) {
   return;
  }
  VAR_21->isp_residx = VAR_21->isp_resodx = VAR_24.param[5];

  FUNC_9(&VAR_24, VAR_10, VAR_7, 0);
  VAR_24.param[1] = FUNC_11(VAR_21);
  VAR_24.param[2] = FUNC_1(VAR_21->isp_rquest_dma);
  VAR_24.param[3] = FUNC_0(VAR_21->isp_rquest_dma);
  VAR_24.param[5] = 0;
  FUNC_13(VAR_21, &VAR_24);
  if (VAR_24.param[0] != VAR_9) {
   return;
  }
  VAR_21->isp_reqidx = VAR_21->isp_reqodx = VAR_24.param[4];
 }
 FUNC_9(&VAR_24, VAR_16, VAR_7, 0);
 if (FUNC_7(VAR_21))
  VAR_24.param[1] |= VAR_1;




 if (FUNC_8(VAR_21))
  VAR_24.param[1] |= VAR_2;

 if (VAR_24.param[1] != 0) {
  uint16_t VAR_25 = VAR_24.param[1];
  FUNC_13(VAR_21, &VAR_24);
  if (VAR_24.param[0] == VAR_9) {
   FUNC_14(VAR_21, VAR_5,
       "Enabled FW features (0x%x)", VAR_25);
  }
 }

 VAR_21->isp_state = VAR_6;
}
