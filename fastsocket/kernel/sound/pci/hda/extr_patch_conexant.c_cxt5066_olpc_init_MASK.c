
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int dc_enable; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_0)
{
 struct conexant_spec *VAR_1 = VAR_0->spec;
 FUNC_5("CXT5066: init\n");
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
 if (!VAR_1->dc_enable) {
  FUNC_4(VAR_0);
  FUNC_3(VAR_0);
 } else {
  FUNC_1(VAR_0);
 }
 return 0;
}
