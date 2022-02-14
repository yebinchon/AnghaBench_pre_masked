
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int own_eapd_ctl; int power_down_unused; int mixer_nid; int beep_nid; } ;
struct sigmatel_spec {int have_spdif_mux; int gpio_mask; int gpio_dir; int gpio_data; int stream_delay; int aloopback_mask; int powerdown_adcs; int pwr_nids; int num_pwrs; TYPE_1__ gen; scalar_t__ aloopback_shift; int * aloopback_ctl; scalar_t__ linear_tone_beep; } ;
struct hda_verb {int dummy; } ;
struct hda_codec {int vendor_id; int revision_id; int proc_widget_hook; int patch_ops; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (struct hda_codec*,int,int) ;
 int FUNC_7 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_8 (struct hda_codec*,struct hda_verb const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct hda_verb* VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct hda_codec*) ;
 int VAR_12 ;
 int FUNC_11 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_12(struct hda_codec *VAR_13)
{
 struct sigmatel_spec *VAR_14;
 const struct hda_verb *VAR_15 = VAR_10;
 int VAR_16;

 VAR_16 = FUNC_1(VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_14 = VAR_13->spec;
 VAR_14->linear_tone_beep = 0;
 VAR_14->gen.own_eapd_ctl = 1;
 VAR_14->gen.power_down_unused = 1;
 VAR_14->gen.mixer_nid = 0x17;
 VAR_14->have_spdif_mux = 1;

 VAR_13->patch_ops = VAR_12;


 VAR_14->gpio_mask = 0x01;
 VAR_14->gpio_dir = 0x01;
 VAR_14->gpio_data = 0x01;

 switch (VAR_13->vendor_id) {
 case 0x111d76b6:
 case 0x111d76b7:
  VAR_15++;
  break;
 case 0x111d7608:
  if ((VAR_13->revision_id & 0xf) == 0 ||
      (VAR_13->revision_id & 0xf) == 1)
   VAR_14->stream_delay = 40;


  VAR_15++;
  FUNC_6(VAR_13, 0x0f, 0x40f000f0);
  FUNC_6(VAR_13, 0x19, 0x40f000f3);
  break;
 case 0x111d7603:
  if ((VAR_13->revision_id & 0xf) == 1)
   VAR_14->stream_delay = 40;

  break;
 }

 if (FUNC_3(FUNC_2(VAR_13, 0x28)) == VAR_1)
  FUNC_4(VAR_13, VAR_4);

 if (FUNC_2(VAR_13, 0xa) & VAR_0)
  FUNC_8(VAR_13, VAR_15);

 VAR_14->aloopback_ctl = &VAR_7;
 VAR_14->aloopback_mask = 0x50;
 VAR_14->aloopback_shift = 0;

 VAR_14->powerdown_adcs = 1;
 VAR_14->gen.beep_nid = 0x26;
 VAR_14->num_pwrs = FUNC_0(VAR_9);
 VAR_14->pwr_nids = VAR_9;

 FUNC_7(VAR_13, VAR_8, VAR_5,
      VAR_6);
 FUNC_5(VAR_13, VAR_2);

 FUNC_11(VAR_13);

 VAR_16 = FUNC_10(VAR_13);
 if (VAR_16 < 0) {
  FUNC_9(VAR_13);
  return VAR_16;
 }

 VAR_13->proc_widget_hook = VAR_11;

 FUNC_5(VAR_13, VAR_3);

 return 0;
}
