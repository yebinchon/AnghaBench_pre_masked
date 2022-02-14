
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int gpio_led; } ;
struct hda_codec {int afg; struct sigmatel_spec* spec; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2)
{
 struct sigmatel_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4;

 if (VAR_3->gpio_led)
  return;

 VAR_4 = FUNC_0(VAR_2, VAR_2->afg, VAR_1);
 VAR_4 &= VAR_0;
 if (VAR_4 > 3)
  VAR_3->gpio_led = 0x08;
 else
  VAR_3->gpio_led = 0x01;
}
