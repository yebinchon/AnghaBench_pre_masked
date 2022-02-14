
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {int os; } ;
typedef TYPE_1__ sli4_t ;
typedef int sli4_queue_t ;
typedef int sli4_qentry_e ;
struct TYPE_12__ {int xri; } ;
typedef TYPE_2__ sli4_fc_xri_aborted_cqe_t ;
struct TYPE_13__ {int wq_id; } ;
typedef TYPE_3__ sli4_fc_wqec_t ;
struct TYPE_14__ {int status; int xb; int wqe_specific_2; int wqe_specific_1; int request_tag; int hw_status; } ;
typedef TYPE_4__ sli4_fc_wcqe_t ;
struct TYPE_15__ {int status; int xb; int total_data_placed; int xri; int hw_status; } ;
typedef TYPE_5__ sli4_fc_optimized_write_data_cqe_t ;
struct TYPE_16__ {int status; int rq_id; } ;
typedef TYPE_6__ sli4_fc_optimized_write_cmd_cqe_t ;
struct TYPE_17__ {int status; int rq_id; } ;
typedef TYPE_7__ sli4_fc_coalescing_rcqe_t ;
struct TYPE_18__ {int status; int rq_id; } ;
typedef TYPE_8__ sli4_fc_async_rcqe_v1_t ;
struct TYPE_19__ {int status; int rq_id; } ;
typedef TYPE_9__ sli4_fc_async_rcqe_t ;
typedef int int32_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int,...) ;

int32_t
FUNC_1(sli4_t *VAR_11, sli4_queue_t *VAR_12, uint8_t *VAR_13, sli4_qentry_e *VAR_14,
  uint16_t *VAR_15)
{
 uint8_t VAR_16 = VAR_13[VAR_0];
 int32_t VAR_17 = -1;

 switch (VAR_16) {
 case 129:
 {
  sli4_fc_wcqe_t *VAR_18 = (void *)VAR_13;

  *VAR_14 = VAR_7;
  *VAR_15 = VAR_18->request_tag;
  VAR_17 = VAR_18->status;


  if (VAR_17 && (VAR_17 != VAR_1)) {

   FUNC_0(VAR_11->os, "WCQE: status=%#x hw_status=%#x tag=%#x w1=%#x w2=%#x xb=%d\n",
    VAR_18->status, VAR_18->hw_status,
    VAR_18->request_tag, VAR_18->wqe_specific_1,
    VAR_18->wqe_specific_2, VAR_18->xb);
   FUNC_0(VAR_11->os, "      %08X %08X %08X %08X\n", ((uint32_t*) VAR_13)[0], ((uint32_t*) VAR_13)[1],
    ((uint32_t*) VAR_13)[2], ((uint32_t*) VAR_13)[3]);
  }





  break;
 }
 case 132:
 {
  sli4_fc_async_rcqe_t *VAR_19 = (void *)VAR_13;

  *VAR_14 = VAR_6;
  *VAR_15 = VAR_19->rq_id;
  VAR_17 = VAR_19->status;
  break;
 }
 case 131:
 {
  sli4_fc_async_rcqe_v1_t *VAR_20 = (void *)VAR_13;

  *VAR_14 = VAR_6;
  *VAR_15 = VAR_20->rq_id;
  VAR_17 = VAR_20->status;
  break;
 }
 case 135:
 {
  sli4_fc_optimized_write_cmd_cqe_t *VAR_21 = (void *)VAR_13;

  *VAR_14 = VAR_4;
  *VAR_15 = VAR_21->rq_id;
  VAR_17 = VAR_21->status;
  break;
 }
 case 134:
 {
  sli4_fc_optimized_write_data_cqe_t *VAR_22 = (void *)VAR_13;

  *VAR_14 = VAR_5;
  *VAR_15 = VAR_22->xri;
  VAR_17 = VAR_22->status;


  if (VAR_17 != VAR_2) {
   FUNC_0(VAR_11->os, "Optimized DATA CQE: status=%#x hw_status=%#x xri=%#x dpl=%#x w3=%#x xb=%d\n",
    VAR_22->status, VAR_22->hw_status,
    VAR_22->xri, VAR_22->total_data_placed,
    ((uint32_t*) VAR_13)[3], VAR_22->xb);
  }
  break;
 }
 case 130:
 {
  sli4_fc_coalescing_rcqe_t *VAR_23 = (void *)VAR_13;

  *VAR_14 = VAR_6;
  *VAR_15 = VAR_23->rq_id;
  VAR_17 = VAR_23->status;
  break;
 }
 case 128:
 {
  sli4_fc_xri_aborted_cqe_t *VAR_24 = (void *)VAR_13;

  *VAR_14 = VAR_9;
  *VAR_15 = VAR_24->xri;
  VAR_17 = 0;
  break;
 }
 case 133: {
  sli4_fc_wqec_t *VAR_25 = (void*) VAR_13;

  *VAR_14 = VAR_8;
  *VAR_15 = VAR_25->wq_id;
  VAR_17 = 0;
  break;
 }
 default:
  FUNC_0(VAR_11->os, "CQE completion code %d not handled\n", VAR_16);
  *VAR_14 = VAR_3;
  *VAR_15 = VAR_10;
 }

 return VAR_17;
}
