
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int own_eapd_ctl; int power_down_unused; int beep_nid; } ;
struct sigmatel_spec {int default_polarity; int num_pwrs; int pwr_nids; TYPE_1__ gen; scalar_t__ linear_tone_beep; } ;
struct hda_codec {int proc_widget_hook; int patch_ops; struct sigmatel_spec* spec; scalar_t__ epss; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3)
{
 struct sigmatel_spec *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->epss = 0;

 VAR_4 = VAR_3->spec;
 VAR_4->linear_tone_beep = 0;
 VAR_4->gen.own_eapd_ctl = 1;
 VAR_4->gen.power_down_unused = 1;

 VAR_4->gen.beep_nid = 0x19;
 VAR_4->pwr_nids = VAR_0;
 VAR_4->num_pwrs = FUNC_0(VAR_0);
 VAR_4->default_polarity = -1;

 VAR_3->patch_ops = VAR_2;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 < 0) {
  FUNC_2(VAR_3);
  return VAR_5;
 }

 VAR_3->proc_widget_hook = VAR_1;

 return 0;
}
