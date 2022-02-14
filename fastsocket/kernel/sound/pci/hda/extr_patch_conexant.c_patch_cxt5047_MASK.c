
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* unsol_event; int init; } ;
struct hda_codec {int pin_amp_workaround; int subsystem_id; TYPE_2__ patch_ops; struct conexant_spec* spec; } ;
struct TYPE_3__ {int max_channels; int dig_out_nid; void* dac_nids; void* num_dacs; } ;
struct conexant_spec {int num_adc_nids; int num_mixers; int num_init_verbs; int vmaster_nid; int * init_verbs; void** mixers; int * input_mux; void* channel_mode; void* num_channel_mode; scalar_t__ spdif_route; int capsrc_nids; int adc_nids; TYPE_1__ multiout; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct conexant_spec* FUNC_1 (int,int ) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_28)
{
 struct conexant_spec *VAR_29;
 int VAR_30;

 VAR_30 = FUNC_3(VAR_28, VAR_5,
        VAR_21,
        VAR_14);
 if (VAR_30 < 0)
  VAR_30 = VAR_4;
 if (VAR_30 == VAR_4)
  return FUNC_2(VAR_28);

 VAR_29 = FUNC_1(sizeof(*VAR_29), VAR_8);
 if (!VAR_29)
  return -VAR_7;
 VAR_28->spec = VAR_29;
 VAR_28->pin_amp_workaround = 1;

 VAR_29->multiout.max_channels = 2;
 VAR_29->multiout.num_dacs = FUNC_0(VAR_15);
 VAR_29->multiout.dac_nids = VAR_15;
 VAR_29->multiout.dig_out_nid = VAR_6;
 VAR_29->num_adc_nids = 1;
 VAR_29->adc_nids = VAR_11;
 VAR_29->capsrc_nids = VAR_13;
 VAR_29->num_mixers = 1;
 VAR_29->mixers[0] = VAR_12;
 VAR_29->num_init_verbs = 1;
 VAR_29->init_verbs[0] = VAR_20;
 VAR_29->spdif_route = 0;
 VAR_29->num_channel_mode = FUNC_0(VAR_22),
 VAR_29->channel_mode = VAR_22,

 VAR_28->patch_ops = VAR_10;

 switch (VAR_30) {
 case 131:
  VAR_29->num_mixers = 2;
  VAR_29->mixers[1] = VAR_18;
  VAR_28->patch_ops.unsol_event = VAR_19;
  break;
 case 129:
  VAR_29->num_mixers = 2;
  VAR_29->mixers[1] = VAR_17;
  VAR_28->patch_ops.unsol_event = VAR_19;
  VAR_28->patch_ops.init = VAR_16;
  break;
 case 130:
  VAR_29->input_mux = &VAR_26;
  VAR_29->num_mixers = 2;
  VAR_29->mixers[1] = VAR_18;
  VAR_29->num_init_verbs = 2;
  VAR_29->init_verbs[1] = VAR_27;
  VAR_28->patch_ops.unsol_event = VAR_19;
  break;







 }
 VAR_29->vmaster_nid = 0x13;

 switch (VAR_28->subsystem_id >> 16) {
 case 0x103c:




  FUNC_4(VAR_28, 0x10, VAR_9,
       (0x17 << VAR_2) |
       (0x17 << VAR_1) |
       (0x05 << VAR_3) |
       (1 << VAR_0));
  break;
 }

 return 0;
}
