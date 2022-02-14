
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct cs_spec* spec; } ;
struct auto_pin_cfg {int dig_outs; int * dig_out_pins; } ;
struct TYPE_2__ {struct auto_pin_cfg autocfg; } ;
struct cs_spec {int spdif_detect; TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3)
{
 struct cs_spec *VAR_4 = VAR_3->spec;
 struct auto_pin_cfg *VAR_5 = &VAR_4->gen.autocfg;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->dig_outs; VAR_6++) {
  hda_nid_t VAR_7 = VAR_5->dig_out_pins[VAR_6];
  if (FUNC_0(VAR_3, VAR_7) & VAR_0) {
   VAR_4->spdif_detect = 1;
   FUNC_1(VAR_3, VAR_7,
           VAR_1,
           VAR_2);
  }
 }
}
