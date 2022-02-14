
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int* dyn_adc_idx; int * adc_nids; scalar_t__ dyn_adc_switch; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;



__attribute__((used)) static hda_nid_t FUNC_0(struct hda_codec *VAR_0, int VAR_1, int VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_0->spec;
 if (VAR_3->dyn_adc_switch)
  VAR_1 = VAR_3->dyn_adc_idx[VAR_2];
 return VAR_3->adc_nids[VAR_1];
}
