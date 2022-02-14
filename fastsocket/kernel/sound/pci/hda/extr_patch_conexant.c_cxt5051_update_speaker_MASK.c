
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {scalar_t__ ideapad; scalar_t__ cur_eapd; scalar_t__ hp_present; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4;

 VAR_4 = (VAR_3->hp_present && VAR_3->cur_eapd) ? VAR_0 : 0;
 FUNC_0(VAR_2, 0x16, VAR_4);

 VAR_4 = (!VAR_3->hp_present && VAR_3->cur_eapd) ? VAR_1 : 0;
 FUNC_0(VAR_2, 0x1a, VAR_4);

 if (VAR_3->ideapad)
  FUNC_0(VAR_2, 0x1b, VAR_4);
}
