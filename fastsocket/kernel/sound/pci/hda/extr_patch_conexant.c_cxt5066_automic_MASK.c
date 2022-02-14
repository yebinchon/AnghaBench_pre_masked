
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {scalar_t__ asus; scalar_t__ hp_laptop; scalar_t__ thinkpad; scalar_t__ ideapad; scalar_t__ dell_vostro; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_0)
{
 struct conexant_spec *VAR_1 = VAR_0->spec;

 if (VAR_1->dell_vostro)
  FUNC_4(VAR_0);
 else if (VAR_1->ideapad)
  FUNC_2(VAR_0);
 else if (VAR_1->thinkpad)
  FUNC_3(VAR_0);
 else if (VAR_1->hp_laptop)
  FUNC_1(VAR_0);
 else if (VAR_1->asus)
  FUNC_0(VAR_0);
}
