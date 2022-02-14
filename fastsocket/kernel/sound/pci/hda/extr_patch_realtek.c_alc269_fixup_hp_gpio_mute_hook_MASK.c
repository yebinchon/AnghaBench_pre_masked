
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {unsigned int gpio_led; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, int VAR_2)
{
 struct hda_codec *VAR_3 = VAR_1;
 struct alc_spec *VAR_4 = VAR_3->spec;
 unsigned int VAR_5 = VAR_4->gpio_led;

 if (VAR_2)
  VAR_4->gpio_led &= ~0x08;
 else
  VAR_4->gpio_led |= 0x08;
 if (VAR_4->gpio_led != VAR_5)
  FUNC_0(VAR_3, 0x01, 0, VAR_0,
        VAR_4->gpio_led);
}
