
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int gpio_led_polarity; int gpio_led; int default_polarity; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int,int) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_1,
       const struct hda_fixup *VAR_2, int VAR_3)
{
 struct sigmatel_spec *VAR_4 = VAR_1->spec;

 if (VAR_3 != VAR_0)
  return;

 if (FUNC_1(VAR_1)) {
  FUNC_2(VAR_1, 0xa, 0x2101201f);
  FUNC_2(VAR_1, 0xf, 0x2181205e);
 }

 if (FUNC_0(VAR_1, VAR_4->default_polarity))
  FUNC_3("mute LED gpio %d polarity %d\n",
    VAR_4->gpio_led,
    VAR_4->gpio_led_polarity);
}
