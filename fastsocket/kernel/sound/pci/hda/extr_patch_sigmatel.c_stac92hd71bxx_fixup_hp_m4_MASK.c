
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int gpio_mask; } ;
struct hda_jack_tbl {int private_data; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {int afg; struct sigmatel_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int,int) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ) ;
 struct hda_jack_tbl* FUNC_3 (struct hda_codec*,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_4,
          const struct hda_fixup *VAR_5, int VAR_6)
{
 struct sigmatel_spec *VAR_7 = VAR_4->spec;
 struct hda_jack_tbl *VAR_8;

 if (VAR_6 != VAR_1)
  return;


 FUNC_1(VAR_4, VAR_4->afg, 0,
      VAR_0, 0x02);
 FUNC_2(VAR_4, VAR_4->afg,
         VAR_2,
         VAR_3);
 VAR_8 = FUNC_3(VAR_4, VAR_4->afg);
 if (VAR_8)
  VAR_8->private_data = 0x02;

 VAR_7->gpio_mask |= 0x02;


 FUNC_0(VAR_4, 0x0e, 0x01813040);
}
