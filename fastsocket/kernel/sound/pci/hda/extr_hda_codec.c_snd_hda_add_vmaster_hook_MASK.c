
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct hda_vmaster_mute_hook {int mute_mode; struct hda_codec* codec; int hook; int sw_kctl; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct hda_codec*) ;
 struct snd_kcontrol* FUNC_1 (int *,struct hda_vmaster_mute_hook*) ;
 int FUNC_2 (struct hda_codec*,int ,struct snd_kcontrol*) ;
 int VAR_2 ;

int FUNC_3(struct hda_codec *VAR_3,
        struct hda_vmaster_mute_hook *VAR_4,
        bool VAR_5)
{
 struct snd_kcontrol *VAR_6;

 if (!VAR_4->hook || !VAR_4->sw_kctl)
  return 0;
 FUNC_0(VAR_4->sw_kctl, VAR_4->hook, VAR_3);
 VAR_4->codec = VAR_3;
 VAR_4->mute_mode = VAR_1;
 if (!VAR_5)
  return 0;
 VAR_6 = FUNC_1(&VAR_2, VAR_4);
 if (!VAR_6)
  return -VAR_0;
 return FUNC_2(VAR_3, 0, VAR_6);
}
