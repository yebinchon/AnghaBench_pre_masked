
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {scalar_t__ cur_eapd; int hp_present; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_1 (struct hda_codec*,int,int ,int,unsigned int,unsigned int) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_2(VAR_2);
 struct conexant_spec *VAR_5 = VAR_4->spec;
 unsigned int VAR_6;

 if (!FUNC_0(VAR_2, VAR_3))
  return 0;




 VAR_6 = (!VAR_5->hp_present && VAR_5->cur_eapd) ? 0 : VAR_0;




 FUNC_1(VAR_4, 0x1d, VAR_1, 0x01,
     VAR_0, VAR_6);
 VAR_6 = VAR_5->cur_eapd ? 0 : VAR_0;
 FUNC_1(VAR_4, 0x13, VAR_1, 0,
     VAR_0, VAR_6);
 return 1;
}
