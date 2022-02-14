
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cap_sync_hook; } ;
struct sigmatel_spec {int gpio_led; int gpio_mask; int gpio_dir; int gpio_data; int mic_mute_led_gpio; int mic_mute_led_on; TYPE_2__ gen; int vref_mute_led_nid; } ;
struct TYPE_3__ {int set_power_state; } ;
struct hda_codec {TYPE_1__ patch_ops; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_2)
{
 struct sigmatel_spec *VAR_3 = VAR_2->spec;

 if (VAR_3->gpio_led) {
  if (!VAR_3->vref_mute_led_nid) {
   VAR_3->gpio_mask |= VAR_3->gpio_led;
   VAR_3->gpio_dir |= VAR_3->gpio_led;
   VAR_3->gpio_data |= VAR_3->gpio_led;
  } else {
   VAR_2->patch_ops.set_power_state =
     VAR_1;
  }
 }

 if (VAR_3->mic_mute_led_gpio) {
  VAR_3->gpio_mask |= VAR_3->mic_mute_led_gpio;
  VAR_3->gpio_dir |= VAR_3->mic_mute_led_gpio;
  VAR_3->mic_mute_led_on = 1;
  VAR_3->gpio_data |= VAR_3->mic_mute_led_gpio;

  VAR_3->gen.cap_sync_hook = VAR_0;
 }
}
