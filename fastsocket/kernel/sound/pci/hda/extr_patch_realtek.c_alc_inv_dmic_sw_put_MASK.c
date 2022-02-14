
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {unsigned int inv_dmic_muted; } ;


 int FUNC_0 (struct hda_codec*,int) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_1(VAR_0);
 struct alc_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4 = !VAR_1->value.integer.value[0];

 if (VAR_4 == VAR_3->inv_dmic_muted)
  return 0;
 VAR_3->inv_dmic_muted = VAR_4;
 FUNC_0(VAR_2, 1);
 return 0;
}
