
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct dmi_device {int name; } ;
struct TYPE_3__ {int hook; } ;
struct TYPE_4__ {int vmaster_mute_enum; TYPE_1__ vmaster_mute; } ;
struct alc_spec {int mute_led_polarity; int mute_led_nid; TYPE_2__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dmi_device* FUNC_0 (int ,int *,struct dmi_device const*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,char*,int*,int*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_3,
         const struct hda_fixup *VAR_4, int VAR_5)
{
 struct alc_spec *VAR_6 = VAR_3->spec;
 const struct dmi_device *VAR_7 = ((void*)0);

 if (VAR_5 != VAR_1)
  return;

 while ((VAR_7 = FUNC_0(VAR_0, ((void*)0), VAR_7))) {
  int VAR_8, VAR_9;
  if (FUNC_2(VAR_7->name, "HP_Mute_LED_%d_%x", &VAR_8, &VAR_9) != 2)
   continue;
  if (VAR_9 < 0x0a || VAR_9 >= 0x10)
   break;
  VAR_6->mute_led_polarity = VAR_8;
  VAR_6->mute_led_nid = VAR_9 - 0x0a + 0x18;
  VAR_6->gen.vmaster_mute.hook = VAR_2;
  VAR_6->gen.vmaster_mute_enum = 1;
  FUNC_1("Detected mute LED for %x:%d\n", VAR_6->mute_led_nid,
      VAR_6->mute_led_polarity);
  break;
 }
}
