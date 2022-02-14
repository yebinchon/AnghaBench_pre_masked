
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
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_7)
{
 struct sigmatel_spec *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = VAR_7->spec;
 VAR_8->linear_tone_beep = 1;
 VAR_8->gen.own_eapd_ctl = 1;

 VAR_7->patch_ops = VAR_6;

 FUNC_1(VAR_7, VAR_2);

 FUNC_3(VAR_7, VAR_5, VAR_3,
      VAR_4);
 FUNC_2(VAR_7, VAR_0);

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9 < 0) {
  FUNC_4(VAR_7);
  return VAR_9;
 }

 FUNC_2(VAR_7, VAR_1);

 return 0;
}
