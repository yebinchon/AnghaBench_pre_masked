
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int id; } ;
struct hda_codec {struct cmi_spec* spec; } ;
struct cmi_spec {int * cur_mux; int * adc_nids; int input_mux; } ;


 unsigned int FUNC_0 (struct snd_kcontrol*,int *) ;
 int FUNC_1 (struct hda_codec*,int ,struct snd_ctl_elem_value*,int ,int *) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_2(VAR_0);
 struct cmi_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4 = FUNC_0(VAR_0, &VAR_1->id);

 return FUNC_1(VAR_2, VAR_3->input_mux, VAR_1,
         VAR_3->adc_nids[VAR_4], &VAR_3->cur_mux[VAR_4]);
}
