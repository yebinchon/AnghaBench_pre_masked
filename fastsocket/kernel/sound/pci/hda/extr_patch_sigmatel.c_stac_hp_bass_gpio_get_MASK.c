
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct sigmatel_spec {int gpio_data; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 struct hda_codec* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_0(VAR_0);
 struct sigmatel_spec *VAR_3 = VAR_2->spec;
 VAR_1->value.integer.value[0] = !!(VAR_3->gpio_data & 0x20);
 return 0;
}
