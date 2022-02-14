
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int keep_vref_in_automute; } ;
struct alc_spec {TYPE_1__ gen; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_4,
   const struct hda_fixup *VAR_5, int VAR_6)
{
 struct alc_spec *VAR_7 = VAR_4->spec;
 unsigned int VAR_8;

 if (VAR_6 != VAR_3)
  return;
 VAR_8 = FUNC_0(VAR_4, 0x0f);
 if (!(VAR_8 & (VAR_0 | VAR_1)))
  VAR_8 |= VAR_0;
 VAR_8 |= VAR_2;
 FUNC_1(VAR_4, 0x0f, VAR_8);
 VAR_7->gen.keep_vref_in_automute = 1;
}
