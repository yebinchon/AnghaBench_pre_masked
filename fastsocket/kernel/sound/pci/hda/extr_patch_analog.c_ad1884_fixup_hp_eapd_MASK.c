
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hda_fixup {int dummy; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_5__ {int * speaker_pins; int * line_out_pins; int line_out_type; } ;
struct TYPE_4__ {int hook; } ;
struct TYPE_6__ {TYPE_2__ autocfg; TYPE_1__ vmaster_mute; } ;
struct ad198x_spec {TYPE_3__ gen; int eapd_nid; } ;


 int VAR_0 ;


 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_2,
     const struct hda_fixup *VAR_3, int VAR_4)
{
 struct ad198x_spec *VAR_5 = VAR_2->spec;

 switch (VAR_4) {
 case 129:
  VAR_5->gen.vmaster_mute.hook = VAR_1;
  break;
 case 128:
  if (VAR_5->gen.autocfg.line_out_type == VAR_0)
   VAR_5->eapd_nid = VAR_5->gen.autocfg.line_out_pins[0];
  else
   VAR_5->eapd_nid = VAR_5->gen.autocfg.speaker_pins[0];
  break;
 }
}
