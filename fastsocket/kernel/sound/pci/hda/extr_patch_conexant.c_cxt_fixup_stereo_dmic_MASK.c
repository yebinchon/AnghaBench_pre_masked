
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct TYPE_2__ {int inv_dmic_split; } ;
struct conexant_spec {TYPE_1__ gen; } ;



__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_0,
      const struct hda_fixup *VAR_1, int VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_0->spec;
 VAR_3->gen.inv_dmic_split = 1;
}
