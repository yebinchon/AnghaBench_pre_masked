
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {int no_trigger_sense; int no_sticky_stream; int patch_ops; struct ad198x_spec* spec; } ;
struct TYPE_4__ {int amplist; } ;
struct TYPE_3__ {int max_channels; int dig_out_nid; void* dac_nids; void* num_dacs; } ;
struct ad198x_spec {int num_mixers; int num_init_verbs; int vmaster_nid; int avoid_init_slave_vol; int slave_vols; TYPE_2__ loopback; scalar_t__ spdif_route; int * init_verbs; int * mixers; int * input_mux; int capsrc_nids; void* adc_nids; void* num_adc_nids; TYPE_1__ multiout; } ;


 int VAR_0 ;
 void* FUNC_0 (void*) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct hda_codec*) ;
 int VAR_10 ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct ad198x_spec*,int,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_11)
{
 struct ad198x_spec *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_12 = VAR_11->spec;

 VAR_13 = FUNC_4(VAR_11, 0x10);
 if (VAR_13 < 0) {
  FUNC_1(VAR_11);
  return VAR_13;
 }
 FUNC_3(VAR_12, 0x10, 0, VAR_1);

 VAR_12->multiout.max_channels = 2;
 VAR_12->multiout.num_dacs = FUNC_0(VAR_6);
 VAR_12->multiout.dac_nids = VAR_6;
 VAR_12->multiout.dig_out_nid = VAR_0;
 VAR_12->num_adc_nids = FUNC_0(VAR_2);
 VAR_12->adc_nids = VAR_2;
 VAR_12->capsrc_nids = VAR_4;
 VAR_12->input_mux = &VAR_5;
 VAR_12->num_mixers = 1;
 VAR_12->mixers[0] = VAR_3;
 VAR_12->num_init_verbs = 1;
 VAR_12->init_verbs[0] = VAR_7;
 VAR_12->spdif_route = 0;



 VAR_12->vmaster_nid = 0x04;

 VAR_12->slave_vols = VAR_9;

 VAR_12->avoid_init_slave_vol = 1;

 VAR_11->patch_ops = VAR_10;

 VAR_11->no_trigger_sense = 1;
 VAR_11->no_sticky_stream = 1;

 return 0;
}
