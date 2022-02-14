
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct hda_codec {struct cmi_spec* spec; } ;
struct cmi_spec {int input_mux; } ;


 int FUNC_0 (int ,struct snd_ctl_elem_info*) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_info *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_1(VAR_0);
 struct cmi_spec *VAR_3 = VAR_2->spec;
 return FUNC_0(VAR_3->input_mux, VAR_1);
}
