
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct hda_gen_spec {int am_num_entries; int auto_mic; int num_adc_nids; TYPE_2__* am_entry; int * cur_mux; int line_in_auto_switch; scalar_t__ suppress_auto_mic; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_4__ {unsigned int attr; int pin; int idx; } ;
struct TYPE_3__ {int type; int pin; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_3 ;
 int FUNC_1 (struct hda_codec*,int ) ;
 unsigned int FUNC_2 (struct hda_codec*,int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_4->spec;
 struct auto_pin_cfg *VAR_6 = &VAR_5->autocfg;
 unsigned int VAR_7;
 int VAR_8, VAR_9;

 if (VAR_5->suppress_auto_mic)
  return 0;

 VAR_7 = 0;
 VAR_9 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_6->num_inputs; VAR_8++) {
  hda_nid_t VAR_10 = VAR_6->inputs[VAR_8].pin;
  unsigned int VAR_11;
  VAR_11 = FUNC_2(VAR_4, VAR_10);
  VAR_11 = FUNC_3(VAR_11);
  if (VAR_7 & (1 << VAR_11))
   return 0;
  switch (VAR_11) {
  case 129:
   if (VAR_6->inputs[VAR_8].type != VAR_1)
    return 0;
   break;
  case 128:
   return 0;
  default:
   if (VAR_6->inputs[VAR_8].type > VAR_0)
    return 0;
   if (!VAR_5->line_in_auto_switch &&
       VAR_6->inputs[VAR_8].type != VAR_1)
    return 0;
   if (!FUNC_1(VAR_4, VAR_10))
    return 0;
   break;
  }
  if (VAR_9 >= VAR_2)
   return 0;
  VAR_7 |= (1 << VAR_11);
  VAR_5->am_entry[VAR_9].pin = VAR_10;
  VAR_5->am_entry[VAR_9].attr = VAR_11;
  VAR_9++;
 }

 if (VAR_9 < 2)
  return 0;

 VAR_5->am_num_entries = VAR_9;



 FUNC_5(VAR_5->am_entry, VAR_9, sizeof(VAR_5->am_entry[0]),
      VAR_3, ((void*)0));

 if (!FUNC_0(VAR_4))
  return 0;

 VAR_5->auto_mic = 1;
 VAR_5->num_adc_nids = 1;
 VAR_5->cur_mux[0] = VAR_5->am_entry[0].idx;
 FUNC_4("hda-codec: Enable auto-mic switch on NID 0x%x/0x%x/0x%x\n",
      VAR_5->am_entry[0].pin,
      VAR_5->am_entry[1].pin,
      VAR_5->am_entry[2].pin);

 return 0;
}
