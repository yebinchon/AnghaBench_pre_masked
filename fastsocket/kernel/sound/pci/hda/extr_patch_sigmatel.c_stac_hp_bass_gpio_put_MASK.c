
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct sigmatel_spec {int gpio_data; int gpio_dir; int gpio_mask; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 struct hda_codec* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct hda_codec*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_0(VAR_0);
 struct sigmatel_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4;

 VAR_4 = (VAR_3->gpio_data & ~0x20) |
  (VAR_1->value.integer.value[0] ? 0x20 : 0);
 if (VAR_4 == VAR_3->gpio_data)
  return 0;
 VAR_3->gpio_data = VAR_4;
 FUNC_1(VAR_2, VAR_3->gpio_mask, VAR_3->gpio_dir, VAR_3->gpio_data);
 return 1;
}
