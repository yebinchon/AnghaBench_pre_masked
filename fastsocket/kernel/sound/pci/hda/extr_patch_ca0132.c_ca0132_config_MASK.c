
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct TYPE_2__ {int* dac_nids; int num_dacs; int max_channels; int dig_out_nid; } ;
struct auto_pin_cfg {int* dig_out_pins; int dig_outs; int dig_in_pin; void* dig_in_type; void** dig_out_type; } ;
struct ca0132_spec {int* dacs; int num_outputs; int* out_pins; int shared_out_nid; int num_inputs; int* adcs; int shared_mic_nid; int* input_pins; int dig_out; int dig_in; TYPE_1__ multiout; struct auto_pin_cfg autocfg; } ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_1)
{
 struct ca0132_spec *VAR_2 = VAR_1->spec;
 struct auto_pin_cfg *VAR_3 = &VAR_2->autocfg;

 VAR_2->dacs[0] = 0x2;
 VAR_2->dacs[1] = 0x3;
 VAR_2->dacs[2] = 0x4;

 VAR_2->multiout.dac_nids = VAR_2->dacs;
 VAR_2->multiout.num_dacs = 3;
 VAR_2->multiout.max_channels = 2;

 VAR_2->num_outputs = 2;
 VAR_2->out_pins[0] = 0x0b;
 VAR_2->out_pins[1] = 0x10;
 VAR_2->shared_out_nid = 0x2;

 VAR_2->num_inputs = 3;
 VAR_2->adcs[0] = 0x7;
 VAR_2->adcs[1] = 0x8;
 VAR_2->adcs[2] = 0xa;
 VAR_2->shared_mic_nid = 0x7;

 VAR_2->input_pins[0] = 0x12;
 VAR_2->input_pins[1] = 0x11;
 VAR_2->input_pins[2] = 0x13;


 VAR_2->dig_out = 0x05;
 VAR_2->multiout.dig_out_nid = VAR_2->dig_out;
 VAR_3->dig_out_pins[0] = 0x0c;
 VAR_3->dig_outs = 1;
 VAR_3->dig_out_type[0] = VAR_0;
 VAR_2->dig_in = 0x09;
 VAR_3->dig_in_pin = 0x0e;
 VAR_3->dig_in_type = VAR_0;
}
