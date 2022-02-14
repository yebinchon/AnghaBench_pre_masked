
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* hp_pins; scalar_t__* speaker_pins; scalar_t__* line_out_pins; } ;
struct hda_gen_spec {int master_mute; int hp_jack_present; int line_jack_present; int speaker_muted; int line_out_muted; TYPE_1__ autocfg; int automute_lo; int automute_speaker; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct hda_codec*,int ,scalar_t__*,int) ;

void FUNC_2(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 int VAR_2;





 FUNC_1(VAR_0, FUNC_0(VAR_1->autocfg.hp_pins),
      VAR_1->autocfg.hp_pins, VAR_1->master_mute);

 if (!VAR_1->automute_speaker)
  VAR_2 = 0;
 else
  VAR_2 = VAR_1->hp_jack_present | VAR_1->line_jack_present;
 VAR_2 |= VAR_1->master_mute;
 VAR_1->speaker_muted = VAR_2;
 FUNC_1(VAR_0, FUNC_0(VAR_1->autocfg.speaker_pins),
      VAR_1->autocfg.speaker_pins, VAR_2);



 if (VAR_1->autocfg.line_out_pins[0] == VAR_1->autocfg.hp_pins[0] ||
     VAR_1->autocfg.line_out_pins[0] == VAR_1->autocfg.speaker_pins[0])
  return;
 if (!VAR_1->automute_lo)
  VAR_2 = 0;
 else
  VAR_2 = VAR_1->hp_jack_present;
 VAR_2 |= VAR_1->master_mute;
 VAR_1->line_out_muted = VAR_2;
 FUNC_1(VAR_0, FUNC_0(VAR_1->autocfg.line_out_pins),
      VAR_1->autocfg.line_out_pins, VAR_2);
}
