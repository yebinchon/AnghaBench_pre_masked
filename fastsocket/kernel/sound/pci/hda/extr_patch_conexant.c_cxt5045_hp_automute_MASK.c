
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int cur_eapd; scalar_t__ hp_present; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4;

 VAR_3->hp_present = FUNC_1(VAR_2, 0x11);

 VAR_4 = (VAR_3->hp_present || !VAR_3->cur_eapd) ? VAR_0 : 0;
 FUNC_0(VAR_2, 0x10, VAR_1, 0,
     VAR_0, VAR_4);
}
