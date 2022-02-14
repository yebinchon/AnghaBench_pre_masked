
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int gpio_led; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_1,
           const struct hda_fixup *VAR_2, int VAR_3)
{
 struct sigmatel_spec *VAR_4 = VAR_1->spec;

 if (VAR_3 != VAR_0)
  return;
 VAR_4->gpio_led = 0x01;
}
