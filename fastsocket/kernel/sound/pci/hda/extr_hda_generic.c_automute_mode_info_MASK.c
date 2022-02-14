
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct hda_gen_spec {scalar_t__ automute_lo_possible; scalar_t__ automute_speaker_possible; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_ctl_elem_info*,int,char const* const*) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_info *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_2(VAR_0);
 struct hda_gen_spec *VAR_3 = VAR_2->spec;
 static const char * const VAR_4[] = {
  "Disabled", "Speaker Only", "Line Out+Speaker"
 };

 if (VAR_3->automute_speaker_possible && VAR_3->automute_lo_possible)
  return FUNC_1(VAR_0, VAR_1, 3, VAR_4);
 return FUNC_0(VAR_0, VAR_1);
}
