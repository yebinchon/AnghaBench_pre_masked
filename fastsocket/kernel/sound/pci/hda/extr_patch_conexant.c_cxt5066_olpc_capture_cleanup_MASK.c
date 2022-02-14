
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_verb {int member_0; int member_2; int member_1; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {scalar_t__ recording; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct hda_verb const*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1)
{
 struct conexant_spec *VAR_2 = VAR_1->spec;
 const struct hda_verb VAR_3[] = {

  {0x1a, VAR_0, 0},


  {0x1b, VAR_0, 0},


  {0x1e, VAR_0, 0},
  {},
 };

 FUNC_0(VAR_1, VAR_3);
 VAR_2->recording = 0;
}
