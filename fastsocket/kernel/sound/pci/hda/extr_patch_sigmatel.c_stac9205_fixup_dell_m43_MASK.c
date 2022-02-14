
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int gpio_dir; int eapd_mask; int gpio_mask; int gpio_mute; int gpio_data; } ;
struct hda_jack_tbl {int private_data; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {int afg; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ) ;
 struct hda_jack_tbl* FUNC_3 (struct hda_codec*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_5,
        const struct hda_fixup *VAR_6, int VAR_7)
{
 struct sigmatel_spec *VAR_8 = VAR_5->spec;
 struct hda_jack_tbl *VAR_9;

 if (VAR_7 == VAR_1) {
  FUNC_0(VAR_5, VAR_3);


  FUNC_1(VAR_5, VAR_5->afg, 0,
   VAR_0, 0x10);
  FUNC_2(VAR_5, VAR_5->afg,
          VAR_2,
          VAR_4);
  VAR_9 = FUNC_3(VAR_5, VAR_5->afg);
  if (VAR_9)
   VAR_9->private_data = 0x01;

  VAR_8->gpio_dir = 0x0b;
  VAR_8->eapd_mask = 0x01;
  VAR_8->gpio_mask = 0x1b;
  VAR_8->gpio_mute = 0x10;



  VAR_8->gpio_data = 0x01;
 }
}
