
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


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct hda_codec*,int) ;
 unsigned int FUNC_3 (struct hda_codec*,int) ;
 int FUNC_4 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_3,
      const struct hda_fixup *VAR_4, int VAR_5)
{
 struct alc_spec *VAR_6 = VAR_3->spec;
 static hda_nid_t VAR_7[2] = { 0x14, 0x15 };
 int VAR_8;

 if (VAR_5 != VAR_2)
  return;
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7); VAR_8++) {
  unsigned int VAR_9 = FUNC_3(VAR_3, VAR_7[VAR_8]);
  if (FUNC_1(VAR_9) != VAR_0)
   continue;
  VAR_9 = FUNC_2(VAR_3, VAR_7[VAR_8]);
  VAR_9 |= VAR_1;
  FUNC_4(VAR_3, VAR_7[VAR_8], VAR_9);
  VAR_6->gen.keep_vref_in_automute = 1;
  break;
 }
}
