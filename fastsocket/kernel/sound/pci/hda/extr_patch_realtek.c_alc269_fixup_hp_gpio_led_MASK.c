
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_verb {int member_0; int member_2; int member_1; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_3__ {int hook; } ;
struct TYPE_4__ {int cap_sync_hook; TYPE_1__ vmaster_mute; } ;
struct alc_spec {scalar_t__ gpio_led; TYPE_2__ gen; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,struct hda_verb const*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_3,
    const struct hda_fixup *VAR_4, int VAR_5)
{
 struct alc_spec *VAR_6 = VAR_3->spec;
 static const struct hda_verb VAR_7[] = {
  { 0x01, 128, 0x18 },
  { 0x01, 129, 0x18 },
  {}
 };

 if (VAR_5 == VAR_0) {
  VAR_6->gen.vmaster_mute.hook = VAR_2;
  VAR_6->gen.cap_sync_hook = VAR_1;
  VAR_6->gpio_led = 0;
  FUNC_0(VAR_3, VAR_7);
 }
}
