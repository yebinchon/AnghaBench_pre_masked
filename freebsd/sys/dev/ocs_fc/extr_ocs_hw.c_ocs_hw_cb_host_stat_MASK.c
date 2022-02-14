
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int arg; int (* cb ) (scalar_t__,int,TYPE_5__*,int ) ;} ;
typedef TYPE_2__ uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {scalar_t__ status; } ;
struct TYPE_14__ {TYPE_1__ hdr; int empty_xri_pool_count; int dropped_frames_due_to_no_xri_count; int empty_rq_timeout_count; int dropped_frames_due_to_no_rq_buffer_count; int receive_f_bsy_count; int receive_p_bsy_count; int total_exchanges_responder; int total_exchanges_originator; int receive_sequence_count; int transmit_sequence_count; int receive_frame_count; int transmit_frame_count; int receive_kbyte_count; int transmit_kbyte_count; } ;
typedef TYPE_3__ sli4_cmd_read_status_t ;
struct TYPE_15__ {int os; } ;
typedef TYPE_4__ ocs_hw_t ;
struct TYPE_16__ {int counter; } ;
typedef TYPE_5__ ocs_hw_host_stat_counts_t ;
typedef TYPE_2__ ocs_hw_host_stat_cb_arg_t ;
typedef scalar_t__ int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (scalar_t__,int,TYPE_5__*,int ) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_t *VAR_16, int32_t VAR_17, uint8_t *VAR_18, void *VAR_19)
{

 sli4_cmd_read_status_t* VAR_20 = (sli4_cmd_read_status_t*) VAR_18;
 ocs_hw_host_stat_cb_arg_t *VAR_21 = VAR_19;
 ocs_hw_host_stat_counts_t VAR_22[VAR_4];
 uint32_t VAR_23 = VAR_4;

 FUNC_1(VAR_22, 0, sizeof(ocs_hw_host_stat_counts_t) *
     VAR_4);

 VAR_22[VAR_12].counter = VAR_20->transmit_kbyte_count;
 VAR_22[VAR_7].counter = VAR_20->receive_kbyte_count;
 VAR_22[VAR_11].counter = VAR_20->transmit_frame_count;
 VAR_22[VAR_5].counter = VAR_20->receive_frame_count;
 VAR_22[VAR_13].counter = VAR_20->transmit_sequence_count;
 VAR_22[VAR_8].counter = VAR_20->receive_sequence_count;
 VAR_22[VAR_9].counter = VAR_20->total_exchanges_originator;
 VAR_22[VAR_10].counter = VAR_20->total_exchanges_responder;
 VAR_22[VAR_14].counter = VAR_20->receive_p_bsy_count;
 VAR_22[VAR_6].counter = VAR_20->receive_f_bsy_count;
 VAR_22[VAR_0].counter = VAR_20->dropped_frames_due_to_no_rq_buffer_count;
 VAR_22[VAR_2].counter = VAR_20->empty_rq_timeout_count;
 VAR_22[VAR_1].counter = VAR_20->dropped_frames_due_to_no_xri_count;
 VAR_22[VAR_3].counter = VAR_20->empty_xri_pool_count;


 if (VAR_21) {
  if (VAR_21->cb) {
   if ((VAR_17 == 0) && VAR_20->hdr.status) {
    VAR_17 = VAR_20->hdr.status;
   }
   VAR_21->cb(VAR_17,
       VAR_23,
       VAR_22,
       VAR_21->arg);
  }

  FUNC_0(VAR_16->os, VAR_21, sizeof(ocs_hw_host_stat_cb_arg_t));
 }
 FUNC_0(VAR_16->os, VAR_18, VAR_15);

 return 0;
}
