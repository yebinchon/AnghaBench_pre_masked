
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {unsigned int port_d_mode; scalar_t__ cur_eapd; int hp_present; scalar_t__ thinkpad; scalar_t__ dell_automute; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct conexant_spec*) ;
 int FUNC_1 (struct conexant_spec*) ;
 int FUNC_2 (struct hda_codec*,int,unsigned int) ;
 int FUNC_3 (char*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4;

 FUNC_3("CXT5066: update speaker, hp_present=%d, cur_eapd=%d\n",
      VAR_3->hp_present, VAR_3->cur_eapd);


 VAR_4 = (FUNC_0(VAR_3) && VAR_3->cur_eapd) ? VAR_0 : 0;
 FUNC_2(VAR_2, 0x19, VAR_4);


 VAR_4 = VAR_3->cur_eapd ? VAR_3->port_d_mode : 0;
 if (VAR_3->dell_automute || VAR_3->thinkpad) {

  if (FUNC_0(VAR_3))
   VAR_4 = 0;
 } else {

  if (!FUNC_1(VAR_3))
   VAR_4 = 0;
 }
 FUNC_2(VAR_2, 0x1c, VAR_4);


 VAR_4 = (!VAR_3->hp_present && VAR_3->cur_eapd) ? VAR_1 : 0;
 FUNC_2(VAR_2, 0x1f, VAR_4);
}
