
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct hda_gen_spec {int (* cap_sync_hook ) (struct hda_codec*,struct snd_ctl_elem_value*) ;} ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct hda_codec*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_1(VAR_0);
 struct hda_gen_spec *VAR_3 = VAR_2->spec;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_3->cap_sync_hook)
  VAR_3->cap_sync_hook(VAR_2, VAR_1);

 return VAR_4;
}
