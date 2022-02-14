
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_all_adcs; int * all_adcs; } ;
struct sigmatel_spec {unsigned int gpio_data; unsigned int eapd_mask; int active_adcs; TYPE_1__ gen; scalar_t__ powerdown_adcs; int power_map_bits; scalar_t__ num_pwrs; int gpio_dir; int gpio_mask; int eapd_switch; } ;
struct hda_codec {int afg; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,int ,unsigned int) ;
 int FUNC_3 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3)
{
 struct sigmatel_spec *VAR_4 = VAR_3->spec;
 unsigned int VAR_5;
 int VAR_6;


 FUNC_3(VAR_3);


 VAR_5 = VAR_4->gpio_data;



 if (!VAR_4->eapd_switch)
  VAR_5 |= VAR_4->eapd_mask;
 FUNC_2(VAR_3, VAR_4->gpio_mask, VAR_4->gpio_dir, VAR_5);

 FUNC_1(VAR_3);


 if (VAR_4->num_pwrs)
  FUNC_0(VAR_3, VAR_3->afg, 0,
        VAR_1,
        VAR_4->power_map_bits);


 if (VAR_4->powerdown_adcs) {
  for (VAR_6 = 0; VAR_6 < VAR_4->gen.num_all_adcs; VAR_6++) {
   if (VAR_4->active_adcs & (1 << VAR_6))
    continue;
   FUNC_0(VAR_3, VAR_4->gen.all_adcs[VAR_6], 0,
         VAR_2,
         VAR_0);
  }
 }

 return 0;
}
