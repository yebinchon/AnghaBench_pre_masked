
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* init; void* unsol_event; } ;
struct hda_codec {int single_adc_amp; int subsystem_id; TYPE_2__ patch_ops; struct conexant_spec* spec; } ;
struct TYPE_3__ {int max_channels; int dig_out_nid; void* dac_nids; void* num_dacs; } ;
struct conexant_spec {int num_adc_nids; int num_mixers; int num_init_verbs; scalar_t__ beep_amp; void** init_verbs; void** mixers; int * input_mux; void* channel_mode; void* num_channel_mode; scalar_t__ spdif_route; int capsrc_nids; int adc_nids; TYPE_1__ multiout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void*) ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 int FUNC_1 (scalar_t__) ;
 struct conexant_spec* FUNC_2 (int,int ) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct conexant_spec*,int,int ,int) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_7 (struct hda_codec*,int,int ,int) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_32)
{
 struct conexant_spec *VAR_33;
 int VAR_34;

 VAR_34 = FUNC_6(VAR_32, VAR_5,
        VAR_27,
        VAR_18);
 if (VAR_34 < 0)
  VAR_34 = VAR_4;
 if (VAR_34 == VAR_4)
  return FUNC_3(VAR_32);

 VAR_33 = FUNC_2(sizeof(*VAR_33), VAR_8);
 if (!VAR_33)
  return -VAR_7;
 VAR_32->spec = VAR_33;
 VAR_32->single_adc_amp = 1;

 VAR_33->multiout.max_channels = 2;
 VAR_33->multiout.num_dacs = FUNC_0(VAR_19);
 VAR_33->multiout.dac_nids = VAR_19;
 VAR_33->multiout.dig_out_nid = VAR_6;
 VAR_33->num_adc_nids = 1;
 VAR_33->adc_nids = VAR_11;
 VAR_33->capsrc_nids = VAR_14;
 VAR_33->input_mux = &VAR_15;
 VAR_33->num_mixers = 1;
 VAR_33->mixers[0] = VAR_25;
 VAR_33->num_init_verbs = 1;
 VAR_33->init_verbs[0] = VAR_23;
 VAR_33->spdif_route = 0;
 VAR_33->num_channel_mode = FUNC_0(VAR_28);
 VAR_33->channel_mode = VAR_28;

 FUNC_4(VAR_33, 0x16, 0, 1);

 VAR_32->patch_ops = VAR_10;

 switch (VAR_34) {
 case 130:
  VAR_32->patch_ops.unsol_event = VAR_21;
  VAR_33->input_mux = &VAR_15;
  VAR_33->num_init_verbs = 2;
  VAR_33->init_verbs[1] = VAR_20;
  VAR_33->mixers[0] = VAR_25;
  VAR_32->patch_ops.init = VAR_22;
  break;
 case 129:
  VAR_32->patch_ops.unsol_event = VAR_21;
  VAR_33->input_mux = &VAR_15;
  VAR_33->num_init_verbs = 2;
  VAR_33->init_verbs[1] = VAR_24;
  VAR_33->mixers[0] = VAR_25;
  VAR_32->patch_ops.init = VAR_22;
  break;
 default:
 case 131:
  VAR_32->patch_ops.unsol_event = VAR_21;
  VAR_33->input_mux = &VAR_15;
  VAR_33->num_init_verbs = 3;
  VAR_33->init_verbs[1] = VAR_20;
  VAR_33->init_verbs[2] = VAR_24;
  VAR_33->mixers[0] = VAR_25;
  VAR_32->patch_ops.init = VAR_22;
  break;
 case 133:
  VAR_32->patch_ops.unsol_event = VAR_21;
  VAR_33->input_mux = &VAR_16;
  VAR_33->num_init_verbs = 1;
  VAR_33->init_verbs[0] = VAR_12;
  VAR_33->mixers[0] = VAR_25;
  VAR_33->mixers[1] = VAR_13;
  VAR_33->num_mixers = 2;
  VAR_32->patch_ops.init = VAR_22;
  break;
 case 132:
  VAR_32->patch_ops.unsol_event = VAR_21;
  VAR_33->input_mux = &VAR_17;
  VAR_33->num_init_verbs = 2;
  VAR_33->init_verbs[1] = VAR_20;
  VAR_33->mixers[0] = VAR_26;
  VAR_32->patch_ops.init = VAR_22;
  break;
 }

 switch (VAR_32->subsystem_id >> 16) {
 case 0x103c:
 case 0x1631:
 case 0x1734:
 case 0x17aa:




  FUNC_7(VAR_32, 0x17, VAR_9,
       (0x14 << VAR_2) |
       (0x14 << VAR_1) |
       (0x05 << VAR_3) |
       (1 << VAR_0));
  break;
 }

 if (VAR_33->beep_amp)
  FUNC_5(VAR_32, FUNC_1(VAR_33->beep_amp));

 return 0;
}
