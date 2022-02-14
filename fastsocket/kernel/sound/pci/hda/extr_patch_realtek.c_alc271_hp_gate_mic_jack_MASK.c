
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_4__ {int * hp_pins; } ;
struct TYPE_6__ {TYPE_1__ autocfg; TYPE_2__* am_entry; } ;
struct alc_spec {TYPE_3__ gen; } ;
struct TYPE_5__ {int pin; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_1,
        const struct hda_fixup *VAR_2,
        int VAR_3)
{
 struct alc_spec *VAR_4 = VAR_1->spec;

 if (VAR_3 == VAR_0) {
  if (FUNC_0(!VAR_4->gen.am_entry[1].pin ||
          !VAR_4->gen.autocfg.hp_pins[0]))
   return;
  FUNC_1(VAR_1, VAR_4->gen.am_entry[1].pin,
          VAR_4->gen.autocfg.hp_pins[0]);
 }
}
