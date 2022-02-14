
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int base_exit_verbs; int unsol_hp_work; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ca0132_spec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_0)
{
 struct ca0132_spec *VAR_1 = VAR_0->spec;

 FUNC_1(&VAR_1->unsol_hp_work);
 FUNC_4(VAR_0);
 FUNC_5(VAR_0, VAR_1->base_exit_verbs);
 FUNC_0(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0->spec);
}
