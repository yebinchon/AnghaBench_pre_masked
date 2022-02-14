
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {int num_inputs; scalar_t__ line_out_type; scalar_t__ line_outs; scalar_t__ hp_outs; TYPE_1__* inputs; void** hp_pins; void** line_out_pins; } ;
struct hda_gen_spec {int hp_mic; int suppress_auto_mic; void* hp_mic_pin; scalar_t__ suppress_hp_mic_detect; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef void* hda_nid_t ;
struct TYPE_2__ {int is_headphone_mic; int type; void* pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (struct hda_codec*,void*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct hda_codec*,void*) ;
 int FUNC_3 (char*,void*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_5->spec;
 struct auto_pin_cfg *VAR_7 = &VAR_6->autocfg;
 unsigned int VAR_8;
 hda_nid_t VAR_9;

 if (!VAR_6->hp_mic) {
  if (VAR_6->suppress_hp_mic_detect)
   return 0;



  if (VAR_7->num_inputs > 1)
   return 0;
  else if (VAR_7->num_inputs == 1) {
   VAR_8 = FUNC_0(VAR_5, VAR_7->inputs[0].pin);
   if (FUNC_1(VAR_8) != VAR_4)
    return 0;
  }
 }

 VAR_6->hp_mic = 0;
 if (VAR_7->num_inputs >= VAR_1)
  return 0;

 VAR_9 = 0;
 if (VAR_7->line_out_type == VAR_2 && VAR_7->line_outs > 0)
  VAR_9 = VAR_7->line_out_pins[0];
 else if (VAR_7->hp_outs > 0)
  VAR_9 = VAR_7->hp_pins[0];
 if (!VAR_9)
  return 0;

 if (!(FUNC_2(VAR_5, VAR_9) & VAR_0))
  return 0;

 VAR_7->inputs[VAR_7->num_inputs].pin = VAR_9;
 VAR_7->inputs[VAR_7->num_inputs].type = VAR_3;
 VAR_7->inputs[VAR_7->num_inputs].is_headphone_mic = 1;
 VAR_7->num_inputs++;
 VAR_6->hp_mic = 1;
 VAR_6->hp_mic_pin = VAR_9;

 VAR_6->suppress_auto_mic = 1;
 FUNC_3("hda-codec: Enable shared I/O jack on NID 0x%x\n", VAR_9);
 return 0;
}
