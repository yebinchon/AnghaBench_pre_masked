
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int own_eapd_ctl; int power_down_unused; int mixer_nid; int beep_nid; } ;
struct sigmatel_spec {int default_polarity; int num_pwrs; int pwr_nids; TYPE_1__ gen; scalar_t__ linear_tone_beep; } ;
struct hda_codec {int proc_widget_hook; int patch_ops; struct sigmatel_spec* spec; scalar_t__ epss; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int VAR_8 ;
 int FUNC_7 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_9)
{
 struct sigmatel_spec *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9->epss = 0;

 VAR_10 = VAR_9->spec;
 VAR_10->linear_tone_beep = 0;
 VAR_10->gen.own_eapd_ctl = 1;
 VAR_10->gen.power_down_unused = 1;
 VAR_10->gen.mixer_nid = 0x1b;

 VAR_10->gen.beep_nid = 0x21;
 VAR_10->pwr_nids = VAR_6;
 VAR_10->num_pwrs = FUNC_0(VAR_6);
 VAR_10->default_polarity = -1;

 VAR_9->patch_ops = VAR_8;

 FUNC_2(VAR_9, VAR_2);

 FUNC_4(VAR_9, VAR_5, VAR_3,
      VAR_4);
 FUNC_3(VAR_9, VAR_0);

 FUNC_7(VAR_9);

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11 < 0) {
  FUNC_5(VAR_9);
  return VAR_11;
 }

 VAR_9->proc_widget_hook = VAR_7;

 FUNC_3(VAR_9, VAR_1);

 return 0;
}
