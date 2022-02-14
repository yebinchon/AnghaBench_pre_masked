
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_input_mux {unsigned int num_items; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {unsigned int mic_boost; int dc_enable; } ;


 struct hda_input_mux VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_1(VAR_1);
 struct conexant_spec *VAR_4 = VAR_3->spec;
 const struct hda_input_mux *VAR_5 = &VAR_0;
 unsigned int VAR_6;
 VAR_6 = VAR_2->value.enumerated.item[0];
 if (VAR_6 >= VAR_5->num_items)
  VAR_6 = VAR_5->num_items - 1;

 VAR_4->mic_boost = VAR_6;
 if (!VAR_4->dc_enable)
  FUNC_0(VAR_3);
 return 1;
}
