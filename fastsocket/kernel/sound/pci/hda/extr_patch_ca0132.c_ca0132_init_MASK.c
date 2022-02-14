
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct auto_pin_cfg {int dig_in_pin; int * dig_out_pins; } ;
struct ca0132_spec {int num_outputs; int num_inputs; int num_init_verbs; int * init_verbs; int dig_in; int * adcs; int * input_pins; int dig_out; int * dacs; int * out_pins; int base_init_verbs; int curr_chip_addx; int dsp_state; struct auto_pin_cfg autocfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct hda_codec*) ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct hda_codec*,int ,int ) ;
 int FUNC_11 (struct hda_codec*,int ,int ) ;
 int FUNC_12 (struct hda_codec*) ;
 int FUNC_13 (struct hda_codec*) ;
 int FUNC_14 (struct hda_codec*) ;
 int FUNC_15 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_16(struct hda_codec *VAR_2)
{
 struct ca0132_spec *VAR_3 = VAR_2->spec;
 struct auto_pin_cfg *VAR_4 = &VAR_3->autocfg;
 int VAR_5;

 VAR_3->dsp_state = VAR_0;
 VAR_3->curr_chip_addx = VAR_1;

 FUNC_14(VAR_2);

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_15(VAR_2, VAR_3->base_init_verbs);
 FUNC_0(VAR_2);
 FUNC_6(VAR_2);
 FUNC_9(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_3->num_outputs; VAR_5++)
  FUNC_11(VAR_2, VAR_3->out_pins[VAR_5], VAR_3->dacs[0]);

 FUNC_11(VAR_2, VAR_4->dig_out_pins[0], VAR_3->dig_out);

 for (VAR_5 = 0; VAR_5 < VAR_3->num_inputs; VAR_5++)
  FUNC_10(VAR_2, VAR_3->input_pins[VAR_5], VAR_3->adcs[VAR_5]);

 FUNC_10(VAR_2, VAR_4->dig_in_pin, VAR_3->dig_in);

 for (VAR_5 = 0; VAR_5 < VAR_3->num_init_verbs; VAR_5++)
  FUNC_15(VAR_2, VAR_3->init_verbs[VAR_5]);

 FUNC_5(VAR_2);

 FUNC_8(VAR_2);
 FUNC_7(VAR_2);

 FUNC_12(VAR_2);

 FUNC_13(VAR_2);

 return 0;
}
