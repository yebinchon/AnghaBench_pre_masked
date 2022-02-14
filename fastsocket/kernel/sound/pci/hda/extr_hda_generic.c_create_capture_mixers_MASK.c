
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int count; } ;
struct nid_path {int* ctls; } ;
struct hda_input_mux {int num_items; } ;
struct hda_gen_spec {int num_adc_nids; int multi_cap_vol; int * imux_pins; int auto_mic; scalar_t__ dyn_adc_switch; struct hda_input_mux input_mux; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*,int,int,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int,int,int,int) ;
 struct nid_path* FUNC_3 (struct hda_codec*,int,int) ;
 scalar_t__ FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*,struct nid_path*) ;
 int FUNC_6 (struct hda_codec*,int,int,int ) ;
 struct snd_kcontrol_new* FUNC_7 (struct hda_gen_spec*,char const*,int *) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_5->spec;
 struct hda_input_mux *VAR_7 = &VAR_6->input_mux;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_6->dyn_adc_switch)
  VAR_10 = 1;
 else
  VAR_10 = VAR_6->num_adc_nids;

 if (!VAR_6->auto_mic && VAR_7->num_items > 1) {
  struct snd_kcontrol_new *VAR_12;
  const char *VAR_13;
  VAR_13 = VAR_10 > 1 ? "Input Source" : "Capture Source";
  VAR_12 = FUNC_7(VAR_6, VAR_13, &VAR_4);
  if (!VAR_12)
   return -VAR_0;
  VAR_12->count = VAR_10;
 }

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  bool VAR_14 = 0;
  bool VAR_15 = VAR_6->multi_cap_vol;
  bool VAR_16 = 0;
  int VAR_17, VAR_18;

  VAR_17 = VAR_18 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_7->num_items; VAR_8++) {
   struct nid_path *VAR_19;
   VAR_19 = FUNC_3(VAR_5, VAR_9, VAR_8);
   if (!VAR_19)
    continue;
   FUNC_5(VAR_5, VAR_19);
   if (!VAR_17)
    VAR_17 = VAR_19->ctls[VAR_3];
   else if (VAR_17 != VAR_19->ctls[VAR_3]) {
    VAR_14 = 1;
    if (!FUNC_6(VAR_5, VAR_17,
        VAR_19->ctls[VAR_3], VAR_1))
     VAR_15 = 1;
   }
   if (!VAR_18)
    VAR_18 = VAR_19->ctls[VAR_2];
   else if (VAR_18 != VAR_19->ctls[VAR_2]) {
    VAR_14 = 1;
    if (!FUNC_6(VAR_5, VAR_18,
        VAR_19->ctls[VAR_2], VAR_1))
     VAR_15 = 1;
   }
   if (FUNC_4(VAR_5, VAR_6->imux_pins[VAR_8]))
    VAR_16 = 1;
  }

  if (!VAR_14)
   VAR_11 = FUNC_2(VAR_5, VAR_9, VAR_17, VAR_18,
       VAR_16);
  else if (!VAR_15)
   VAR_11 = FUNC_0(VAR_5, VAR_9, VAR_17, VAR_18);
  else
   VAR_11 = FUNC_1(VAR_5);
  if (VAR_11 < 0)
   return VAR_11;
 }

 return 0;
}
