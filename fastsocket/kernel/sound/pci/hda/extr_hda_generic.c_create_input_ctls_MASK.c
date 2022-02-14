
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct hda_gen_spec {scalar_t__ mixer_nid; scalar_t__ hp_mic_pin; char** input_labels; scalar_t__ add_stereo_mix_input; scalar_t__ add_jack_modes; int * input_label_idxs; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_2__ {scalar_t__ pin; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct hda_codec*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct hda_codec*,int,scalar_t__,char*,int ,scalar_t__) ;
 int FUNC_6 (struct hda_codec*,scalar_t__,int,int,char*,scalar_t__) ;
 int FUNC_7 (struct hda_codec*,scalar_t__,unsigned int,int) ;
 unsigned int FUNC_8 (struct hda_codec*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct hda_codec *VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_3->spec;
 const struct auto_pin_cfg *VAR_5 = &VAR_4->autocfg;
 hda_nid_t VAR_6 = VAR_4->mixer_nid;
 int VAR_7;
 int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7 < 0)
  return 0;

 VAR_9 = FUNC_2(VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_inputs; VAR_8++) {
  hda_nid_t VAR_11;

  VAR_11 = VAR_5->inputs[VAR_8].pin;
  if (!FUNC_3(VAR_3, VAR_11))
   continue;

  VAR_10 = VAR_2;
  if (VAR_5->inputs[VAR_8].type == VAR_0)
   VAR_10 |= FUNC_8(VAR_3, VAR_11);
  if (VAR_11 != VAR_4->hp_mic_pin)
   FUNC_7(VAR_3, VAR_11, VAR_10, 0);

  if (VAR_6) {
   if (FUNC_4(VAR_3, VAR_11, VAR_6)) {
    VAR_9 = FUNC_5(VAR_3, VAR_8, VAR_11,
             VAR_4->input_labels[VAR_8],
             VAR_4->input_label_idxs[VAR_8],
             VAR_6);
    if (VAR_9 < 0)
     return VAR_9;
   }
  }

  VAR_9 = FUNC_6(VAR_3, VAR_11, VAR_8, VAR_7,
        VAR_4->input_labels[VAR_8], -VAR_6);
  if (VAR_9 < 0)
   return VAR_9;

  if (VAR_4->add_jack_modes) {
   VAR_9 = FUNC_0(VAR_3, VAR_11);
   if (VAR_9 < 0)
    return VAR_9;
  }
 }

 if (VAR_6 && VAR_4->add_stereo_mix_input) {
  VAR_9 = FUNC_6(VAR_3, VAR_6, VAR_1, VAR_7,
        "Stereo Mix", 0);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return 0;
}
