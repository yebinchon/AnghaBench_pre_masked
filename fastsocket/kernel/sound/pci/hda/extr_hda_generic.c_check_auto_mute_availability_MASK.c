
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auto_pin_cfg {scalar_t__ line_out_type; int speaker_outs; int line_outs; int hp_outs; scalar_t__* line_out_pins; scalar_t__* hp_pins; scalar_t__* speaker_pins; } ;
struct hda_gen_spec {int detect_hp; int detect_lo; int automute_lo_possible; int automute_speaker_possible; int automute_lo; int automute_speaker; scalar_t__ suppress_auto_mute; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,int ,int ) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_7)
{
 struct hda_gen_spec *VAR_8 = VAR_7->spec;
 struct auto_pin_cfg *VAR_9 = &VAR_8->autocfg;
 int VAR_10 = 0;
 int VAR_11, VAR_12;

 if (VAR_8->suppress_auto_mute)
  return 0;

 if (VAR_9->hp_pins[0])
  VAR_10++;
 if (VAR_9->line_out_pins[0])
  VAR_10++;
 if (VAR_9->speaker_pins[0])
  VAR_10++;
 if (VAR_10 < 2)
  return 0;

 if (!VAR_9->speaker_pins[0] &&
     VAR_9->line_out_type == VAR_2) {
  FUNC_2(VAR_9->speaker_pins, VAR_9->line_out_pins,
         sizeof(VAR_9->speaker_pins));
  VAR_9->speaker_outs = VAR_9->line_outs;
 }

 if (!VAR_9->hp_pins[0] &&
     VAR_9->line_out_type == VAR_0) {
  FUNC_2(VAR_9->hp_pins, VAR_9->line_out_pins,
         sizeof(VAR_9->hp_pins));
  VAR_9->hp_outs = VAR_9->line_outs;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9->hp_outs; VAR_11++) {
  hda_nid_t VAR_13 = VAR_9->hp_pins[VAR_11];
  if (!FUNC_1(VAR_7, VAR_13))
   continue;
  FUNC_4("hda-codec: Enable HP auto-muting on NID 0x%x\n",
       VAR_13);
  FUNC_3(VAR_7, VAR_13, VAR_4,
          VAR_5);
  VAR_8->detect_hp = 1;
 }

 if (VAR_9->line_out_type == VAR_1 && VAR_9->line_outs) {
  if (VAR_9->speaker_outs)
   for (VAR_11 = 0; VAR_11 < VAR_9->line_outs; VAR_11++) {
    hda_nid_t VAR_14 = VAR_9->line_out_pins[VAR_11];
    if (!FUNC_1(VAR_7, VAR_14))
     continue;
    FUNC_4("hda-codec: Enable Line-Out auto-muting on NID 0x%x\n", VAR_14);
    FUNC_3(VAR_7, VAR_14,
            VAR_3,
            VAR_6);
    VAR_8->detect_lo = 1;
   }
  VAR_8->automute_lo_possible = VAR_8->detect_hp;
 }

 VAR_8->automute_speaker_possible = VAR_9->speaker_outs &&
  (VAR_8->detect_hp || VAR_8->detect_lo);

 VAR_8->automute_lo = VAR_8->automute_lo_possible;
 VAR_8->automute_speaker = VAR_8->automute_speaker_possible;

 if (VAR_8->automute_speaker_possible || VAR_8->automute_lo_possible) {

  VAR_12 = FUNC_0(VAR_7);
  if (VAR_12 < 0)
   return VAR_12;
 }
 return 0;
}
