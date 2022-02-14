
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_input_mux {int num_items; TYPE_1__* items; } ;
struct TYPE_4__ {int num_inputs; } ;
struct hda_gen_spec {int * input_label_idxs; int * input_labels; int * imux_pins; TYPE_2__ autocfg; struct hda_input_mux input_mux; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
struct TYPE_3__ {int index; } ;


 int FUNC_0 (struct hda_codec*,int ,int ,int,int ,int) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 struct hda_input_mux *VAR_2 = &VAR_1->input_mux;
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_items; VAR_3++) {
  bool VAR_6;
  int VAR_7;

  VAR_7 = VAR_2->items[VAR_3].index;
  if (VAR_7 >= VAR_1->autocfg.num_inputs)
   continue;
  VAR_6 = FUNC_2(VAR_0, VAR_1->imux_pins[VAR_3]);

  for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
   VAR_4 = FUNC_0(VAR_0,
       VAR_1->input_labels[VAR_7],
       VAR_1->input_label_idxs[VAR_7],
       VAR_5,
       FUNC_1(VAR_0, VAR_3, VAR_5),
       VAR_6);
   if (VAR_4 < 0)
    return VAR_4;
  }
 }
 return 0;
}
