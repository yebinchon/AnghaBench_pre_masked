
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sw_kctl; } ;
struct hda_gen_spec {TYPE_2__ vmaster_mute; scalar_t__ auto_mute_via_amp; int (* automute_hook ) (struct hda_codec*) ;} ;
struct hda_codec {TYPE_1__* bus; struct hda_gen_spec* spec; } ;
struct TYPE_3__ {int shutdown; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 if (VAR_1->automute_hook)
  VAR_1->automute_hook(VAR_0);
 else
  FUNC_1(VAR_0);


 if (VAR_1->auto_mute_via_amp && !VAR_0->bus->shutdown)
  FUNC_0(VAR_1->vmaster_mute.sw_kctl, 0);
}
