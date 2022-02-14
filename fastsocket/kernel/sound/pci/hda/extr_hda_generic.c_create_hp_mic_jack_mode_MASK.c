
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int private_value; } ;
struct hda_gen_spec {int hp_mic_jack_modes; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int VAR_1 ;
 struct snd_kcontrol_new* FUNC_2 (struct hda_gen_spec*,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2, hda_nid_t VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_2->spec;
 struct snd_kcontrol_new *VAR_5;

 if (FUNC_1(VAR_2, VAR_3) <= 1 &&
     FUNC_0(VAR_2, VAR_3) <= 1)
  return 0;
 VAR_5 = FUNC_2(VAR_4, "Headphone Mic Jack Mode",
        &VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->private_value = VAR_3;
 VAR_4->hp_mic_jack_modes = 1;
 return 0;
}
