
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_33__ {scalar_t__ status; int total_data_placed; int xri; } ;
typedef TYPE_8__ sli4_fc_optimized_write_data_cqe_t ;
typedef int prop_buf ;
struct TYPE_32__ {int unsolicited; } ;
struct TYPE_31__ {int (* unsolicited ) (int ,TYPE_10__*) ;int (* bounce ) (int ,TYPE_10__*,int ,int ,int ) ;} ;
struct TYPE_28__ {scalar_t__ bounce; } ;
struct TYPE_34__ {TYPE_7__ args; TYPE_6__ callback; TYPE_3__ config; } ;
typedef TYPE_9__ ocs_hw_t ;
struct TYPE_21__ {int auto_xrdy; TYPE_5__* header; int status; int hw_priv; int fcfi; TYPE_2__* payload; TYPE_11__* hio; int xri; scalar_t__ out_of_xris; TYPE_9__* hw; } ;
typedef TYPE_10__ ocs_hw_sequence_t ;
struct TYPE_22__ {scalar_t__ type; int axr_lock; TYPE_12__* axr_buf; } ;
typedef TYPE_11__ ocs_hw_io_t ;
struct TYPE_26__ {int len; } ;
struct TYPE_27__ {TYPE_1__ dma; } ;
struct TYPE_29__ {int len; TYPE_14__* virt; } ;
struct TYPE_30__ {TYPE_4__ dma; } ;
struct TYPE_23__ {int data_cqe; int call_axr_data; int cmd_cqe; int fcfi; TYPE_2__ payload; TYPE_5__ header; TYPE_10__ seq; } ;
typedef TYPE_12__ ocs_hw_auto_xfer_rdy_buffer_t ;
typedef int int32_t ;
struct TYPE_24__ {int eq; } ;
typedef TYPE_13__ hw_cq_t ;
struct TYPE_25__ {int ox_id; int d_id; int s_id; } ;
typedef TYPE_14__ fc_header_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 TYPE_11__* FUNC_3 (TYPE_9__*,int ) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_10__*,int ,int ,int ) ;
 int FUNC_9 (int ,TYPE_10__*) ;

int32_t
FUNC_10(ocs_hw_t *VAR_7, hw_cq_t *VAR_8, uint8_t *VAR_9)
{

 sli4_fc_optimized_write_data_cqe_t *VAR_10 = (sli4_fc_optimized_write_data_cqe_t*)VAR_9;
 ocs_hw_sequence_t *VAR_11;
 ocs_hw_io_t *VAR_12;
 ocs_hw_auto_xfer_rdy_buffer_t *VAR_13;





 VAR_12 = FUNC_3(VAR_7, VAR_10->xri);
 FUNC_4(&VAR_12->axr_lock);
 VAR_13 = VAR_12->axr_buf;
 VAR_13->data_cqe = 1;
 VAR_11 = &VAR_13->seq;
 VAR_11->hw = VAR_7;
 VAR_11->auto_xrdy = 1;
 VAR_11->out_of_xris = 0;
 VAR_11->xri = VAR_10->xri;
 VAR_11->hio = VAR_12;
 VAR_11->header = &VAR_13->header;
 VAR_11->payload = &VAR_13->payload;

 VAR_11->header->dma.len = sizeof(fc_header_t);
 VAR_11->payload->dma.len = VAR_10->total_data_placed;
 VAR_11->fcfi = VAR_13->fcfi;
 VAR_11->hw_priv = VAR_8->eq;


 if (VAR_10->status == VAR_5) {
  VAR_11->status = VAR_3;
 } else if (VAR_10->status == VAR_4) {
  VAR_11->status = VAR_1;
 } else {
  VAR_11->status = VAR_2;
 }


 if(VAR_12->type == VAR_0) {
  VAR_12->axr_buf->call_axr_data = 1;
  goto exit_ocs_hw_rqpair_process_auto_xfr_rdy_data;
 }

 if(!VAR_13->cmd_cqe) {

  goto exit_ocs_hw_rqpair_process_auto_xfr_rdy_data;
 }
 if (VAR_7->config.bounce) {
  fc_header_t *VAR_14 = VAR_11->header->dma.virt;
  uint32_t VAR_15 = FUNC_0(VAR_14->s_id);
  uint32_t VAR_16 = FUNC_0(VAR_14->d_id);
  uint32_t VAR_17 = FUNC_1(VAR_14->ox_id);
  if (VAR_7->callback.bounce != ((void*)0)) {
   (*VAR_7->callback.bounce)(VAR_6, VAR_11, VAR_15, VAR_16, VAR_17);
  }
 } else {
  VAR_7->callback.unsolicited(VAR_7->args.unsolicited, VAR_11);
 }

exit_ocs_hw_rqpair_process_auto_xfr_rdy_data:
 FUNC_7(&VAR_12->axr_lock);
 return 0;
}
