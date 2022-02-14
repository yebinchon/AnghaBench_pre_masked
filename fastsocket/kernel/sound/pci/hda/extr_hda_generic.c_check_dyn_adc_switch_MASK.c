
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_input_mux {int num_items; } ;
struct hda_gen_spec {int num_adc_nids; int* dyn_adc_idx; int dyn_adc_switch; scalar_t__ multi_cap_vol; scalar_t__ hp_mic; scalar_t__** input_paths; int * adc_nids; struct hda_input_mux input_mux; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 struct hda_input_mux *VAR_2 = &VAR_1->input_mux;
 unsigned int VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = 0;
 VAR_3 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1->num_adc_nids; VAR_5++) {
  for (VAR_4 = 0; VAR_4 < VAR_2->num_items; VAR_4++) {
   if (!VAR_1->input_paths[VAR_4][VAR_5])
    break;
  }
  if (VAR_4 >= VAR_2->num_items) {
   VAR_3 |= (1 << VAR_5);
   VAR_6++;
  }
 }

 if (!VAR_3) {

  for (VAR_4 = 0; VAR_4 < VAR_2->num_items; VAR_4++) {
   for (VAR_5 = 0; VAR_5 < VAR_1->num_adc_nids; VAR_5++) {
    if (VAR_1->input_paths[VAR_4][VAR_5]) {
     VAR_1->dyn_adc_idx[VAR_4] = VAR_5;
     break;
    }
   }
  }

  FUNC_1("hda-codec: enabling ADC switching\n");
  VAR_1->dyn_adc_switch = 1;
 } else if (VAR_6 != VAR_1->num_adc_nids) {

  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_1->num_adc_nids; VAR_5++) {
   if (!(VAR_3 & (1 << VAR_5)))
    continue;
   if (VAR_5 != VAR_6) {
    VAR_1->adc_nids[VAR_6] = VAR_1->adc_nids[VAR_5];
    for (VAR_4 = 0; VAR_4 < VAR_2->num_items; VAR_4++) {
     FUNC_0(VAR_0,
      VAR_1->input_paths[VAR_4][VAR_6]);
     VAR_1->input_paths[VAR_4][VAR_6] =
      VAR_1->input_paths[VAR_4][VAR_5];
    }
   }
   VAR_6++;
  }
  VAR_1->num_adc_nids = VAR_6;
 }

 if (VAR_2->num_items == 1 ||
     (VAR_2->num_items == 2 && VAR_1->hp_mic)) {
  FUNC_1("hda-codec: reducing to a single ADC\n");
  VAR_1->num_adc_nids = 1;
 }


 if (!VAR_1->dyn_adc_switch && VAR_1->multi_cap_vol)
  VAR_1->num_adc_nids = 1;

 return 0;
}
