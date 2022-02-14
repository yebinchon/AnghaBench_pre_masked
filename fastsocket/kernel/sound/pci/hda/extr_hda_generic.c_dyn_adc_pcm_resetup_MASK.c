
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {scalar_t__* adc_nids; size_t* dyn_adc_idx; scalar_t__ cur_adc; int cur_adc_format; int cur_adc_stream_tag; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int FUNC_0 (struct hda_codec*,scalar_t__,int) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_0, int VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 hda_nid_t VAR_3 = VAR_2->adc_nids[VAR_2->dyn_adc_idx[VAR_1]];

 if (VAR_2->cur_adc && VAR_2->cur_adc != VAR_3) {

  FUNC_0(VAR_0, VAR_2->cur_adc, 1);
  VAR_2->cur_adc = VAR_3;
  FUNC_1(VAR_0, VAR_3,
        VAR_2->cur_adc_stream_tag, 0,
        VAR_2->cur_adc_format);
  return 1;
 }
 return 0;
}
