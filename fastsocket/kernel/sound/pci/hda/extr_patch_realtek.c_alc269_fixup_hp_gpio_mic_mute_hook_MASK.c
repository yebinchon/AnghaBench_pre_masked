
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {unsigned int gpio_led; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct alc_spec *VAR_3 = VAR_1->spec;
 unsigned int VAR_4 = VAR_3->gpio_led;

 if (!VAR_2)
  return;

 if (VAR_2->value.integer.value[0] ||
     VAR_2->value.integer.value[1])
  VAR_3->gpio_led &= ~0x10;
 else
  VAR_3->gpio_led |= 0x10;
 if (VAR_3->gpio_led != VAR_4)
  FUNC_0(VAR_1, 0x01, 0, VAR_0,
        VAR_3->gpio_led);
}
