
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
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int dc_enable; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_2(VAR_0);
 struct conexant_spec *VAR_3 = VAR_2->spec;
 int VAR_4 = !!VAR_1->value.integer.value[0];

 if (VAR_4 == VAR_3->dc_enable)
  return 0;

 VAR_3->dc_enable = VAR_4;
 if (VAR_4)
  FUNC_1(VAR_2);
 else
  FUNC_0(VAR_2);

 return 1;
}
