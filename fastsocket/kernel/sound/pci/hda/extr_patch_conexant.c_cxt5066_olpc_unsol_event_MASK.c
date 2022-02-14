
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int dc_enable; } ;




 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0, unsigned int VAR_1)
{
 struct conexant_spec *VAR_2 = VAR_0->spec;
 FUNC_2("CXT5066: unsol event %x (%x)\n", VAR_1, VAR_1 >> 26);
 switch (VAR_1 >> 26) {
 case 129:
  FUNC_0(VAR_0);
  break;
 case 128:

  if (!VAR_2->dc_enable)
   FUNC_1(VAR_0);
  break;
 }
}
