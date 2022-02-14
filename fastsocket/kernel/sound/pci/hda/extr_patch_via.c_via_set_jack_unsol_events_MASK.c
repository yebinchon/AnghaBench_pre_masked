
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {int line_outs; int num_inputs; scalar_t__* line_out_pins; scalar_t__* speaker_pins; } ;
struct TYPE_2__ {int line_automute_hook; int hp_automute_hook; struct auto_pin_cfg autocfg; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {struct via_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,int ,int ) ;
 int FUNC_2 (struct hda_codec*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_4)
{
 struct via_spec *VAR_5 = VAR_4->spec;
 struct auto_pin_cfg *VAR_6 = &VAR_5->gen.autocfg;
 hda_nid_t VAR_7;
 int VAR_8;

 VAR_5->gen.hp_automute_hook = VAR_1;
 if (VAR_6->speaker_pins[0])
  VAR_5->gen.line_automute_hook = VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_6->line_outs; VAR_8++) {
  VAR_7 = VAR_6->line_out_pins[VAR_8];
  if (VAR_7 && !FUNC_2(VAR_4, VAR_7) &&
      FUNC_0(VAR_4, VAR_7))
   FUNC_1(VAR_4, VAR_7,
           VAR_0,
           VAR_2);
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->num_inputs; VAR_8++) {
  VAR_7 = VAR_6->line_out_pins[VAR_8];
  if (VAR_7 && !FUNC_2(VAR_4, VAR_7) &&
      FUNC_0(VAR_4, VAR_7))
   FUNC_1(VAR_4, VAR_7,
           VAR_0,
           VAR_2);
 }
}
