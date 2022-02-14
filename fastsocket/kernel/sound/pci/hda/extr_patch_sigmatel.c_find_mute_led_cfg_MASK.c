
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {unsigned int gpio_led; unsigned int gpio_led_polarity; int vref_mute_led_nid; } ;
struct hda_codec {int subsystem_id; int afg; struct sigmatel_spec* spec; } ;
struct dmi_device {int name; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dmi_device* FUNC_0 (int ,int *,struct dmi_device const*) ;
 scalar_t__ FUNC_1 (struct hda_codec*,char*,unsigned int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hda_codec*) ;
 unsigned int FUNC_4 (struct hda_codec*,int ,int ) ;
 int FUNC_5 (int ,char*,unsigned int*,...) ;
 scalar_t__ FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_3, int VAR_4)
{
 struct sigmatel_spec *VAR_5 = VAR_3->spec;
 const struct dmi_device *VAR_6 = ((void*)0);

 if (FUNC_1(VAR_3, "gpio_led", &VAR_5->gpio_led)) {
  FUNC_1(VAR_3, "gpio_led_polarity",
        &VAR_5->gpio_led_polarity);
  return 1;
 }

 while ((VAR_6 = FUNC_0(VAR_2, ((void*)0), VAR_6))) {
  if (FUNC_5(VAR_6->name, "HP_Mute_LED_%d_%x",
      &VAR_5->gpio_led_polarity,
      &VAR_5->gpio_led) == 2) {
   unsigned int VAR_7;
   VAR_7 = FUNC_4(VAR_3, VAR_3->afg,
            VAR_1);
   VAR_7 &= VAR_0;
   if (VAR_5->gpio_led < VAR_7)
    VAR_5->gpio_led = 1 << VAR_5->gpio_led;
   else
    VAR_5->vref_mute_led_nid = VAR_5->gpio_led;
   return 1;
  }
  if (FUNC_5(VAR_6->name, "HP_Mute_LED_%d",
      &VAR_5->gpio_led_polarity) == 1) {
   FUNC_3(VAR_3);
   return 1;
  }

  if (FUNC_6(VAR_6->name, "HP_Mute_LED_P_G")) {
   FUNC_3(VAR_3);
   if (VAR_4 >= 0)
    VAR_5->gpio_led_polarity = VAR_4;
   else
    VAR_5->gpio_led_polarity = 1;
   return 1;
  }
 }






 if (!FUNC_2(VAR_3->subsystem_id) &&
     (VAR_4 == 0 || VAR_4 == 1)) {
  FUNC_3(VAR_3);
  VAR_5->gpio_led_polarity = VAR_4;
  return 1;
 }
 return 0;
}
