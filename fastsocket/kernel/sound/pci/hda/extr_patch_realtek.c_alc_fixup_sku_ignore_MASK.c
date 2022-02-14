
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int fixup; int sku_cfg; } ;
struct alc_spec {TYPE_1__ cdefine; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_2,
     const struct hda_fixup *VAR_3, int VAR_4)
{
 struct alc_spec *VAR_5 = VAR_2->spec;
 if (VAR_4 == VAR_1) {
  VAR_5->cdefine.fixup = 1;
  VAR_5->cdefine.sku_cfg = VAR_0;
 }
}
