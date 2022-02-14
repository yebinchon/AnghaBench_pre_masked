
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int keep_vref_in_automute; } ;
struct alc_spec {TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2,
         const struct hda_fixup *VAR_3, int VAR_4)
{
 struct alc_spec *VAR_5 = VAR_2->spec;
 static hda_nid_t VAR_6[2] = { 0x18, 0x1a };
 int VAR_7;

 if (VAR_4 != VAR_1)
  return;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6); VAR_7++) {
  unsigned int VAR_8;
  VAR_8 = FUNC_1(VAR_2, VAR_6[VAR_7]);
  VAR_8 |= VAR_0;
  FUNC_2(VAR_2, VAR_6[VAR_7], VAR_8);
 }
 VAR_5->gen.keep_vref_in_automute = 1;
}
