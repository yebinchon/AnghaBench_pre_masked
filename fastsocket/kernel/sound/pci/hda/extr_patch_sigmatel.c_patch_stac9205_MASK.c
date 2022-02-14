
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int own_eapd_ctl; int beep_nid; } ;
struct sigmatel_spec {int linear_tone_beep; int have_spdif_mux; int aloopback_mask; int eapd_mask; int gpio_mask; int gpio_dir; int gpio_data; int eapd_switch; scalar_t__ aloopback_shift; int * aloopback_ctl; TYPE_1__ gen; } ;
struct hda_codec {int proc_widget_hook; int patch_ops; struct sigmatel_spec* spec; } ;


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
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_9)
{
 struct sigmatel_spec *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = VAR_9->spec;
 VAR_10->linear_tone_beep = 1;
 VAR_10->gen.own_eapd_ctl = 1;
 VAR_10->have_spdif_mux = 1;

 VAR_10->gen.beep_nid = 0x23;

 FUNC_1(VAR_9, VAR_2);
 VAR_10->aloopback_ctl = &VAR_5;

 VAR_10->aloopback_mask = 0x40;
 VAR_10->aloopback_shift = 0;


 VAR_10->eapd_mask = VAR_10->gpio_mask = VAR_10->gpio_dir = 0x1;
 VAR_10->gpio_data = 0x01;


 VAR_10->eapd_switch = 1;

 VAR_9->patch_ops = VAR_8;

 FUNC_3(VAR_9, VAR_6, VAR_3,
      VAR_4);
 FUNC_2(VAR_9, VAR_0);

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11 < 0) {
  FUNC_4(VAR_9);
  return VAR_11;
 }

 VAR_9->proc_widget_hook = VAR_7;

 FUNC_2(VAR_9, VAR_1);

 return 0;
}
