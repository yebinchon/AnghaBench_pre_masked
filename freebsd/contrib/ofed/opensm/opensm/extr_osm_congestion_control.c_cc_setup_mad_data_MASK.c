
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint16_t ;
struct TYPE_29__ {int entries_len; TYPE_8__* entries; } ;
struct TYPE_23__ {int shift; int multiplier; } ;
struct TYPE_16__ {int cc_sw_cong_setting_threshold; int cc_sw_cong_setting_credit_starvation_threshold; TYPE_9__ cc_cct; TYPE_6__* cc_ca_cong_entries; int cc_ca_cong_setting_control_map; int cc_ca_cong_setting_port_control; int cc_sw_cong_setting_marking_rate; TYPE_3__ cc_sw_cong_setting_credit_starvation_return_delay; int cc_sw_cong_setting_packet_size; int cc_sw_cong_setting_credit_mask; int cc_sw_cong_setting_victim_mask; int cc_sw_cong_setting_control_map; } ;
typedef TYPE_10__ osm_subn_opt_t ;
struct TYPE_17__ {TYPE_2__* p_subn; } ;
typedef TYPE_11__ osm_sm_t ;
struct TYPE_25__ {TYPE_13__* entry_list; int control_map; int port_control; } ;
struct TYPE_24__ {int threshold_resv; int marking_rate; void* cs_return_delay; void* cs_threshold_resv; int packet_size; int credit_mask; int victim_mask; int control_map; } ;
struct TYPE_18__ {int cc_tbl_mads; TYPE_7__* cc_tbl; TYPE_5__ ca_cong_setting; TYPE_4__ sw_cong_setting; } ;
typedef TYPE_12__ osm_congestion_control_t ;
struct TYPE_19__ {scalar_t__ resv1; scalar_t__ resv0; int ccti_min; int trigger_threshold; int ccti_increase; int ccti_timer; } ;
typedef TYPE_13__ ib_ca_cong_entry_t ;
struct TYPE_28__ {int shift; int multiplier; } ;
struct TYPE_27__ {TYPE_14__* entry_list; scalar_t__ resv; void* ccti_limit; } ;
struct TYPE_26__ {int ccti_min; int trigger_threshold; int ccti_increase; int ccti_timer; } ;
struct TYPE_22__ {TYPE_10__ opt; TYPE_1__* p_osm; } ;
struct TYPE_21__ {TYPE_12__ cc; } ;
struct TYPE_20__ {void* shift_multiplier; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_14__*,char,int) ;

__attribute__((used)) static void FUNC_4(osm_sm_t * VAR_4)
{
 osm_congestion_control_t *VAR_5 = &VAR_4->p_subn->p_osm->cc;
 osm_subn_opt_t *VAR_6 = &VAR_4->p_subn->opt;
 uint16_t VAR_7;
 int VAR_8;


 VAR_5->sw_cong_setting.control_map = VAR_6->cc_sw_cong_setting_control_map;

 FUNC_2(VAR_5->sw_cong_setting.victim_mask,
        VAR_6->cc_sw_cong_setting_victim_mask,
        VAR_1);

 FUNC_2(VAR_5->sw_cong_setting.credit_mask,
        VAR_6->cc_sw_cong_setting_credit_mask,
        VAR_1);


 VAR_5->sw_cong_setting.threshold_resv = (VAR_6->cc_sw_cong_setting_threshold << 4);

 VAR_5->sw_cong_setting.packet_size = VAR_6->cc_sw_cong_setting_packet_size;


 VAR_5->sw_cong_setting.cs_threshold_resv =
  FUNC_1(VAR_6->cc_sw_cong_setting_credit_starvation_threshold << 12);

 VAR_5->sw_cong_setting.cs_return_delay =
  FUNC_1(VAR_6->cc_sw_cong_setting_credit_starvation_return_delay.shift << 14
     | VAR_6->cc_sw_cong_setting_credit_starvation_return_delay.multiplier);

 VAR_5->sw_cong_setting.marking_rate = VAR_6->cc_sw_cong_setting_marking_rate;


 VAR_5->ca_cong_setting.port_control = VAR_6->cc_ca_cong_setting_port_control;
 VAR_5->ca_cong_setting.control_map = VAR_6->cc_ca_cong_setting_control_map;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  ib_ca_cong_entry_t *VAR_9;

  VAR_9 = &VAR_5->ca_cong_setting.entry_list[VAR_8];

  VAR_9->ccti_timer = VAR_6->cc_ca_cong_entries[VAR_8].ccti_timer;
  VAR_9->ccti_increase = VAR_6->cc_ca_cong_entries[VAR_8].ccti_increase;
  VAR_9->trigger_threshold = VAR_6->cc_ca_cong_entries[VAR_8].trigger_threshold;
  VAR_9->ccti_min = VAR_6->cc_ca_cong_entries[VAR_8].ccti_min;
  VAR_9->resv0 = 0;
  VAR_9->resv1 = 0;
 }




 if (!VAR_6->cc_cct.entries_len)
  VAR_5->cc_tbl_mads = 1;
 else {
  VAR_5->cc_tbl_mads = VAR_6->cc_cct.entries_len - 1;
  VAR_5->cc_tbl_mads /= VAR_2;
  VAR_5->cc_tbl_mads += 1;
 }

 FUNC_0(VAR_5->cc_tbl_mads <= VAR_3);

 if (!VAR_6->cc_cct.entries_len)
  VAR_7 = 0;
 else
  VAR_7 = VAR_6->cc_cct.entries_len - 1;

 for (VAR_8 = 0; VAR_8 < VAR_5->cc_tbl_mads; VAR_8++) {
  int VAR_10;

  VAR_5->cc_tbl[VAR_8].ccti_limit = FUNC_1(VAR_7);
  VAR_5->cc_tbl[VAR_8].resv = 0;

  FUNC_3(VAR_5->cc_tbl[VAR_8].entry_list,
         '\0',
         sizeof(VAR_5->cc_tbl[VAR_8].entry_list));

  if (!VAR_7)
   break;

  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   int VAR_11;

   VAR_11 = (VAR_8 * VAR_2) + VAR_10;
   VAR_5->cc_tbl[VAR_8].entry_list[VAR_10].shift_multiplier =
    FUNC_1(VAR_6->cc_cct.entries[VAR_11].shift << 14
       | VAR_6->cc_cct.entries[VAR_11].multiplier);
  }
 }
}
