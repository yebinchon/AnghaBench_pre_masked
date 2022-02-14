
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int hp_present; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct conexant_spec *VAR_1 = VAR_0->spec;

 VAR_1->hp_present = FUNC_1(VAR_0, 0x16);
 FUNC_0(VAR_0);
}
