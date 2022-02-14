
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int parse_flags; int current_headset_mode; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2,
    const struct hda_fixup *VAR_3, int VAR_4)
{
 struct alc_spec *VAR_5 = VAR_2->spec;

 switch (VAR_4) {
 case 129:
  VAR_5->parse_flags |= VAR_1 | VAR_0;
  break;
 case 128:
  FUNC_0(VAR_2);
  break;
 case 130:
  VAR_5->current_headset_mode = 0;
  FUNC_1(VAR_2);
  break;
 }
}
