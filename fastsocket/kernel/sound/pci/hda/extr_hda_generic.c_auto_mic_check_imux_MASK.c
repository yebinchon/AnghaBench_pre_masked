
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_input_mux {int num_items; } ;
struct hda_gen_spec {int am_num_entries; TYPE_1__* am_entry; int imux_pins; struct hda_input_mux input_mux; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
struct TYPE_2__ {scalar_t__ idx; int pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_2->spec;
 const struct hda_input_mux *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_3->input_mux;
 for (VAR_5 = 0; VAR_5 < VAR_3->am_num_entries; VAR_5++) {
  VAR_3->am_entry[VAR_5].idx =
   FUNC_0(VAR_3->am_entry[VAR_5].pin,
          VAR_3->imux_pins, VAR_4->num_items);
  if (VAR_3->am_entry[VAR_5].idx < 0)
   return 0;
 }


 for (VAR_5 = 1; VAR_5 < VAR_3->am_num_entries; VAR_5++)
  FUNC_1(VAR_2,
          VAR_3->am_entry[VAR_5].pin,
          VAR_0,
          VAR_1);
 return 1;
}
