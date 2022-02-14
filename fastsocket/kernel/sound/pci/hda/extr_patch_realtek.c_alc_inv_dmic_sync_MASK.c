
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {int num_adc_nids; scalar_t__* imux_pins; size_t* cur_mux; scalar_t__ dyn_adc_switch; } ;
struct alc_spec {scalar_t__ inv_dmic_pin; TYPE_1__ gen; scalar_t__ inv_dmic_muted; int inv_dmic_fixup; } ;


 int FUNC_0 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, bool VAR_1)
{
 struct alc_spec *VAR_2 = VAR_0->spec;
 int VAR_3, VAR_4;

 if (!VAR_2->inv_dmic_fixup)
  return;
 if (!VAR_2->inv_dmic_muted && !VAR_1)
  return;
 VAR_4 = VAR_2->gen.dyn_adc_switch ? 1 : VAR_2->gen.num_adc_nids;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  bool VAR_5 = 0;

  if (VAR_2->inv_dmic_muted &&
      VAR_2->gen.imux_pins[VAR_2->gen.cur_mux[VAR_3]] == VAR_2->inv_dmic_pin)
   VAR_5 = 1;
  if (!VAR_5 && !VAR_1)
   continue;
  FUNC_0(VAR_0, VAR_3);
 }
}
