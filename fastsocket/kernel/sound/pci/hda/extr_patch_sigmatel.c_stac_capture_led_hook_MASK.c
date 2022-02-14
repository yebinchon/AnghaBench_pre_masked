
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct sigmatel_spec {int mic_mute_led_on; int gpio_data; int gpio_dir; int gpio_mask; int mic_mute_led_gpio; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct sigmatel_spec *VAR_2 = VAR_0->spec;
 bool VAR_3;

 if (!VAR_1)
  return;

 VAR_3 = !(VAR_1->value.integer.value[0] ||
   VAR_1->value.integer.value[1]);
 if (VAR_2->mic_mute_led_on != VAR_3) {
  VAR_2->mic_mute_led_on = VAR_3;
  if (VAR_3)
   VAR_2->gpio_data |= VAR_2->mic_mute_led_gpio;
  else
   VAR_2->gpio_data &= ~VAR_2->mic_mute_led_gpio;
  FUNC_0(VAR_0, VAR_2->gpio_mask,
         VAR_2->gpio_dir, VAR_2->gpio_data);
 }
}
