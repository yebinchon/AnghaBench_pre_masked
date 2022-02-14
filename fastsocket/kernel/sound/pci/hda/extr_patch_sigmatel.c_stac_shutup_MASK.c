
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int eapd_mask; int gpio_data; int gpio_dir; int gpio_mask; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct sigmatel_spec *VAR_1 = VAR_0->spec;

 FUNC_0(VAR_0);

 if (VAR_1->eapd_mask)
  FUNC_1(VAR_0, VAR_1->gpio_mask,
    VAR_1->gpio_dir, VAR_1->gpio_data &
    ~VAR_1->eapd_mask);
}
