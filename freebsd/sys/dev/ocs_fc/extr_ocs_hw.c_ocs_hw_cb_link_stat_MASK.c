
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
struct TYPE_14__ {TYPE_1__ hdr; int received_dropped_no_available_xri_resources_count; int received_dropped_no_available_rpi_resources_count; int received_dropped_no_aer_count; int received_soff_count; int received_eofni_count; int received_eofdti_count; int received_eofa_count; int current_transmit_buffer_to_buffer_credit; int advertised_transmit_buffer_to_buffer_credit; int current_receive_buffer_to_buffer_credit; int advertised_receive_bufftor_to_buffer_credit; int arbitration_fc_al_timout_count; int elastic_buffer_overrun_error_count; int primitive_sequence_event_timeout_count; int crc_error_count; int invalid_transmission_word_error_count; int primitive_sequence_error_count; int loss_of_signal_error_count; int loss_of_sync_error_count; int link_failure_error_count; int w21of; int w20of; int w19of; int w18of; int w17of; int w16of; int w15of; int w14of; int w13of; int w12of; int w11of; int w10of; int w09of; int w08of; int w07of; int w06of; int w05of; int w04of; int w03of; int w02of; scalar_t__ gec; } ;
typedef TYPE_3__ sli4_cmd_read_link_stats_t ;
struct TYPE_15__ {int os; } ;
typedef TYPE_4__ ocs_hw_t ;
struct TYPE_16__ {int counter; int overflow; } ;
typedef TYPE_5__ ocs_hw_link_stat_counts_t ;
typedef TYPE_2__ ocs_hw_link_stat_cb_arg_t ;
typedef scalar_t__ int32_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (scalar_t__,int,TYPE_5__*,int ) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_hw_t *VAR_22, int32_t VAR_23, uint8_t *VAR_24, void *VAR_25)
{

 sli4_cmd_read_link_stats_t* VAR_26 = (sli4_cmd_read_link_stats_t*) VAR_24;
 ocs_hw_link_stat_cb_arg_t *VAR_27 = VAR_25;
 ocs_hw_link_stat_counts_t VAR_28[VAR_11];
 uint32_t VAR_29 = (VAR_26->gec ? 20 : 13);

 FUNC_1(VAR_28, 0, sizeof(ocs_hw_link_stat_counts_t) *
     VAR_11);

 VAR_28[VAR_8].overflow = VAR_26->w02of;
 VAR_28[VAR_10].overflow = VAR_26->w03of;
 VAR_28[VAR_9].overflow = VAR_26->w04of;
 VAR_28[VAR_12].overflow = VAR_26->w05of;
 VAR_28[VAR_7].overflow = VAR_26->w06of;
 VAR_28[VAR_3].overflow = VAR_26->w07of;
 VAR_28[VAR_13].overflow = VAR_26->w08of;
 VAR_28[VAR_6].overflow = VAR_26->w09of;
 VAR_28[VAR_2].overflow = VAR_26->w10of;
 VAR_28[VAR_0].overflow = VAR_26->w11of;
 VAR_28[VAR_4].overflow = VAR_26->w12of;
 VAR_28[VAR_1].overflow = VAR_26->w13of;
 VAR_28[VAR_5].overflow = VAR_26->w14of;
 VAR_28[VAR_17].overflow = VAR_26->w15of;
 VAR_28[VAR_18].overflow = VAR_26->w16of;
 VAR_28[VAR_19].overflow = VAR_26->w17of;
 VAR_28[VAR_20].overflow = VAR_26->w18of;
 VAR_28[VAR_14].overflow = VAR_26->w19of;
 VAR_28[VAR_15].overflow = VAR_26->w20of;
 VAR_28[VAR_16].overflow = VAR_26->w21of;

 VAR_28[VAR_8].counter = VAR_26->link_failure_error_count;
 VAR_28[VAR_10].counter = VAR_26->loss_of_sync_error_count;
 VAR_28[VAR_9].counter = VAR_26->loss_of_signal_error_count;
 VAR_28[VAR_12].counter = VAR_26->primitive_sequence_error_count;
 VAR_28[VAR_7].counter = VAR_26->invalid_transmission_word_error_count;
 VAR_28[VAR_3].counter = VAR_26->crc_error_count;
 VAR_28[VAR_13].counter = VAR_26->primitive_sequence_event_timeout_count;
 VAR_28[VAR_6].counter = VAR_26->elastic_buffer_overrun_error_count;
 VAR_28[VAR_2].counter = VAR_26->arbitration_fc_al_timout_count;
 VAR_28[VAR_0].counter = VAR_26->advertised_receive_bufftor_to_buffer_credit;
 VAR_28[VAR_4].counter = VAR_26->current_receive_buffer_to_buffer_credit;
 VAR_28[VAR_1].counter = VAR_26->advertised_transmit_buffer_to_buffer_credit;
 VAR_28[VAR_5].counter = VAR_26->current_transmit_buffer_to_buffer_credit;
 VAR_28[VAR_17].counter = VAR_26->received_eofa_count;
 VAR_28[VAR_18].counter = VAR_26->received_eofdti_count;
 VAR_28[VAR_19].counter = VAR_26->received_eofni_count;
 VAR_28[VAR_20].counter = VAR_26->received_soff_count;
 VAR_28[VAR_14].counter = VAR_26->received_dropped_no_aer_count;
 VAR_28[VAR_15].counter = VAR_26->received_dropped_no_available_rpi_resources_count;
 VAR_28[VAR_16].counter = VAR_26->received_dropped_no_available_xri_resources_count;

 if (VAR_27) {
  if (VAR_27->cb) {
   if ((VAR_23 == 0) && VAR_26->hdr.status) {
    VAR_23 = VAR_26->hdr.status;
   }
   VAR_27->cb(VAR_23,
       VAR_29,
       VAR_28,
       VAR_27->arg);
  }

  FUNC_0(VAR_22->os, VAR_27, sizeof(ocs_hw_link_stat_cb_arg_t));
 }
 FUNC_0(VAR_22->os, VAR_24, VAR_21);

 return 0;
}
