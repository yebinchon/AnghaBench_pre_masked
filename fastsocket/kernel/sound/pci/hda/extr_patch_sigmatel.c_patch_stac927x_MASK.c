
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int own_eapd_ctl; int beep_nid; } ;
struct sigmatel_spec {int linear_tone_beep; int have_spdif_mux; int eapd_mask; int gpio_mask; int gpio_dir; int gpio_data; int aloopback_mask; int eapd_switch; int volknob_init; scalar_t__ aloopback_shift; int * aloopback_ctl; TYPE_1__ gen; int spdif_labels; } ;
struct hda_codec {TYPE_2__* bus; int proc_widget_hook; int patch_ops; struct sigmatel_spec* spec; } ;
struct TYPE_4__ {int needs_damn_long_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_10)
{
 struct sigmatel_spec *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = VAR_10->spec;
 VAR_11->linear_tone_beep = 1;
 VAR_11->gen.own_eapd_ctl = 1;
 VAR_11->have_spdif_mux = 1;
 VAR_11->spdif_labels = VAR_8;

 VAR_11->gen.beep_nid = 0x23;


 VAR_11->eapd_mask = VAR_11->gpio_mask = 0x01;
 VAR_11->gpio_dir = VAR_11->gpio_data = 0x01;

 VAR_11->aloopback_ctl = &VAR_5;
 VAR_11->aloopback_mask = 0x40;
 VAR_11->aloopback_shift = 0;
 VAR_11->eapd_switch = 1;

 VAR_10->patch_ops = VAR_9;

 FUNC_3(VAR_10, VAR_6, VAR_3,
      VAR_4);
 FUNC_2(VAR_10, VAR_0);

 if (!VAR_11->volknob_init)
  FUNC_1(VAR_10, VAR_2);

 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12 < 0) {
  FUNC_4(VAR_10);
  return VAR_12;
 }

 VAR_10->proc_widget_hook = VAR_7;
 VAR_10->bus->needs_damn_long_delay = 1;

 FUNC_2(VAR_10, VAR_1);

 return 0;
}
