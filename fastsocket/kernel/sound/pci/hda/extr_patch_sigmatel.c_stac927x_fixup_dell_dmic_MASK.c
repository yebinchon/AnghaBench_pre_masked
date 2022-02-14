
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int eapd_mask; int gpio_mask; int gpio_dir; int gpio_data; int volknob_init; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {int subsystem_id; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2,
         const struct hda_fixup *VAR_3, int VAR_4)
{
 struct sigmatel_spec *VAR_5 = VAR_2->spec;

 if (VAR_4 != VAR_0)
  return;

 if (VAR_2->subsystem_id != 0x1028022f) {

  VAR_5->eapd_mask = VAR_5->gpio_mask = 0x04;
  VAR_5->gpio_dir = VAR_5->gpio_data = 0x04;
 }

 FUNC_0(VAR_2, VAR_1);
 VAR_5->volknob_init = 1;
}
