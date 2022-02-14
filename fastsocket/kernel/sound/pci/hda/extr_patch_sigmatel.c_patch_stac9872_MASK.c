
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int own_eapd_ctl; } ;
struct sigmatel_spec {int linear_tone_beep; TYPE_1__ gen; } ;
struct hda_codec {int patch_ops; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_8)
{
 struct sigmatel_spec *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = VAR_8->spec;
 VAR_9->linear_tone_beep = 1;
 VAR_9->gen.own_eapd_ctl = 1;

 VAR_8->patch_ops = VAR_7;

 FUNC_1(VAR_8, VAR_3);

 FUNC_3(VAR_8, VAR_6, VAR_4,
      VAR_5);
 FUNC_2(VAR_8, VAR_1);

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 < 0) {
  FUNC_4(VAR_8);
  return -VAR_0;
 }

 FUNC_2(VAR_8, VAR_2);

 return 0;
}
