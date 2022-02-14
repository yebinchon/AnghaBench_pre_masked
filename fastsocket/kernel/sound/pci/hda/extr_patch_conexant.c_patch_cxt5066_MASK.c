
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* unsol_event; void* init; } ;
struct hda_codec {TYPE_2__ patch_ops; struct conexant_spec* spec; } ;
struct TYPE_3__ {int max_channels; int dig_out_nid; void* dac_nids; void* num_dacs; } ;
struct conexant_spec {int dell_automute; int num_adc_nids; int num_init_verbs; int hp_laptop; int asus; int mic_boost; int dell_vostro; int ideapad; int thinkpad; scalar_t__ beep_amp; int * input_mux; TYPE_1__ multiout; void* port_d_mode; int * init_verbs; int num_mixers; void** mixers; int capture_cleanup; int capture_prepare; scalar_t__ cur_adc_idx; scalar_t__ cur_adc; void* channel_mode; void* num_channel_mode; int capsrc_nids; int adc_nids; } ;


 void* FUNC_0 (void*) ;

 int VAR_0 ;





 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (struct hda_codec*,void*,void*) ;
 void* VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 int FUNC_2 (scalar_t__) ;
 struct conexant_spec* FUNC_3 (int,int ) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct conexant_spec*,int,int ,int ) ;
 int FUNC_6 (struct hda_codec*,int ) ;
 int FUNC_7 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_35)
{
 struct conexant_spec *VAR_36;
 int VAR_37;

 VAR_37 = FUNC_7(VAR_35, VAR_1,
        VAR_27, VAR_12);
 if (VAR_37 < 0)
  VAR_37 = VAR_0;
 if (VAR_37 == VAR_0)
  return FUNC_4(VAR_35);

 VAR_36 = FUNC_3(sizeof(*VAR_36), VAR_3);
 if (!VAR_36)
  return -VAR_2;
 VAR_35->spec = VAR_36;

 VAR_35->patch_ops = VAR_8;
 VAR_35->patch_ops.init = VAR_7;

 VAR_36->dell_automute = 0;
 VAR_36->multiout.max_channels = 2;
 VAR_36->multiout.num_dacs = FUNC_0(VAR_13);
 VAR_36->multiout.dac_nids = VAR_13;
 FUNC_1(VAR_35, VAR_14,
     FUNC_0(VAR_14));
 VAR_36->num_adc_nids = 1;
 VAR_36->adc_nids = VAR_9;
 VAR_36->capsrc_nids = VAR_10;
 VAR_36->input_mux = &VAR_11;

 VAR_36->port_d_mode = VAR_5;

 VAR_36->num_init_verbs = 1;
 VAR_36->init_verbs[0] = VAR_16;
 VAR_36->num_channel_mode = FUNC_0(VAR_28);
 VAR_36->channel_mode = VAR_28;
 VAR_36->cur_adc = 0;
 VAR_36->cur_adc_idx = 0;

 FUNC_5(VAR_36, 0x13, 0, VAR_4);

 switch (VAR_37) {
 default:
 case 130:
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_23;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_26;
  break;
 case 134:
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_23;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_26;

  VAR_36->port_d_mode = VAR_6;
  VAR_36->init_verbs[VAR_36->num_init_verbs] = VAR_20;
  VAR_36->num_init_verbs++;
  VAR_36->dell_automute = 1;
  break;
 case 135:
 case 132:
  VAR_35->patch_ops.init = VAR_15;
  VAR_35->patch_ops.unsol_event = VAR_33;
  VAR_36->init_verbs[VAR_36->num_init_verbs] =
   VAR_17;
  VAR_36->num_init_verbs++;
  VAR_36->hp_laptop = VAR_37 == 132;
  VAR_36->asus = VAR_37 == 135;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_23;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_26;

  if (VAR_37 == 132)
   VAR_36->multiout.dig_out_nid = 0;

  VAR_36->input_mux = ((void*)0);
  VAR_36->port_d_mode = 0;
  VAR_36->mic_boost = 3;
  break;

 case 129:
  VAR_35->patch_ops.init = VAR_31;
  VAR_35->patch_ops.unsol_event = VAR_32;
  VAR_36->init_verbs[0] = VAR_19;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_24;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_25;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_26;
  VAR_36->port_d_mode = 0;
  VAR_36->mic_boost = 3;


  VAR_36->multiout.dig_out_nid = 0;


  VAR_36->input_mux = ((void*)0);



  VAR_36->capture_prepare = VAR_30;
  VAR_36->capture_cleanup = VAR_29;
  break;
 case 133:
  VAR_35->patch_ops.init = VAR_15;
  VAR_35->patch_ops.unsol_event = VAR_33;
  VAR_36->init_verbs[0] = VAR_22;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_24;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_26;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_34;
  VAR_36->port_d_mode = 0;
  VAR_36->dell_vostro = 1;
  VAR_36->mic_boost = 3;


  VAR_36->multiout.dig_out_nid = 0;


  VAR_36->input_mux = ((void*)0);
  break;
 case 131:
  VAR_35->patch_ops.init = VAR_15;
  VAR_35->patch_ops.unsol_event = VAR_33;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_23;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_26;
  VAR_36->init_verbs[0] = VAR_18;
  VAR_36->port_d_mode = 0;
  VAR_36->ideapad = 1;
  VAR_36->mic_boost = 2;


  VAR_36->multiout.dig_out_nid = 0;


  VAR_36->input_mux = ((void*)0);
  break;
 case 128:
  VAR_35->patch_ops.init = VAR_15;
  VAR_35->patch_ops.unsol_event = VAR_33;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_23;
  VAR_36->mixers[VAR_36->num_mixers++] = VAR_26;
  VAR_36->init_verbs[0] = VAR_21;
  VAR_36->thinkpad = 1;
  VAR_36->port_d_mode = VAR_6;
  VAR_36->mic_boost = 2;


  VAR_36->multiout.dig_out_nid = 0;


  VAR_36->input_mux = ((void*)0);
  break;
 }

 if (VAR_36->beep_amp)
  FUNC_6(VAR_35, FUNC_2(VAR_36->beep_amp));

 return 0;
}
