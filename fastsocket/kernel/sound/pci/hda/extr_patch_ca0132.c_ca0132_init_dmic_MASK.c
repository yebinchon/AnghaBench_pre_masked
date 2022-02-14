
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dmic_ctl; int * input_pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_3)
{
 struct ca0132_spec *VAR_4 = VAR_3->spec;
 u8 VAR_5;
 VAR_5 = 0x01;
 FUNC_0(VAR_3, VAR_4->input_pins[0], 0,
       VAR_1, VAR_5);







 VAR_5 = 0x83;
 FUNC_0(VAR_3, VAR_4->input_pins[0], 0,
       VAR_2, VAR_5);
 VAR_5 = 0x23;

 VAR_4->dmic_ctl = VAR_5;
 FUNC_0(VAR_3, VAR_4->input_pins[0], 0,
       VAR_0, VAR_5);
}
