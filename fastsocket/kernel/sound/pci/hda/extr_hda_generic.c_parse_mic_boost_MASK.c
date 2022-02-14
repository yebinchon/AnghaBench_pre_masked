
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nid_path {unsigned int* ctls; } ;
struct hda_input_mux {int num_items; TYPE_1__* items; } ;
struct auto_pin_cfg {TYPE_2__* inputs; } ;
struct hda_gen_spec {char** input_labels; int * input_label_idxs; int num_adc_nids; struct hda_input_mux input_mux; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int boost_label ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct hda_gen_spec*,int ,char*,int ,unsigned int) ;
 struct nid_path* FUNC_1 (struct hda_codec*,int ,int) ;
 unsigned int FUNC_2 (struct hda_codec*,struct nid_path*) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_4->spec;
 struct auto_pin_cfg *VAR_6 = &VAR_5->autocfg;
 struct hda_input_mux *VAR_7 = &VAR_5->input_mux;
 int VAR_8;

 if (!VAR_5->num_adc_nids)
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_7->num_items; VAR_8++) {
  struct nid_path *VAR_9;
  unsigned int VAR_10;
  int VAR_11;
  char VAR_12[44];

  VAR_11 = VAR_7->items[VAR_8].index;
  if (VAR_11 >= VAR_7->num_items)
   continue;


  if (VAR_6->inputs[VAR_11].type > VAR_0)
   continue;

  VAR_9 = FUNC_1(VAR_4, 0, VAR_8);
  if (!VAR_9)
   continue;

  VAR_10 = FUNC_2(VAR_4, VAR_9);
  if (!VAR_10)
   continue;


  FUNC_3(VAR_12, sizeof(VAR_12),
    "%s Boost Volume", VAR_5->input_labels[VAR_11]);
  if (!FUNC_0(VAR_5, VAR_2, VAR_12,
     VAR_5->input_label_idxs[VAR_11], VAR_10))
   return -VAR_1;

  VAR_9->ctls[VAR_3] = VAR_10;
 }
 return 0;
}
