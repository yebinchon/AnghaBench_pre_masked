
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct ad198x_spec {scalar_t__ cur_eapd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int,int ) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_3,
       struct snd_ctl_elem_value *VAR_4)
{
 struct hda_codec *VAR_5 = FUNC_3(VAR_3);
 struct ad198x_spec *VAR_6 = VAR_5->spec;

 if (! FUNC_0(VAR_3, VAR_4))
  return 0;

 FUNC_2(VAR_5, 0x05, VAR_6->cur_eapd ? VAR_2 : 0);

 FUNC_1(VAR_5, 0x06, VAR_1, 0,
     VAR_0,
     VAR_6->cur_eapd ? 0 : VAR_0);
 return 1;
}
