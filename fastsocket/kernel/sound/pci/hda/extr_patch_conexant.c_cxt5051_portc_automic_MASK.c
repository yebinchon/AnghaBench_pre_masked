
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int auto_mic; int cur_adc_idx; scalar_t__* adc_nids; scalar_t__ cur_adc; int cur_adc_format; int cur_adc_stream_tag; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,scalar_t__,int) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,int ,int ,int ) ;
 unsigned int FUNC_2 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1)
{
 struct conexant_spec *VAR_2 = VAR_1->spec;
 unsigned int VAR_3;
 hda_nid_t VAR_4;

 if (!(VAR_2->auto_mic & VAR_0))
  return;
 VAR_3 = FUNC_2(VAR_1, 0x18);
 if (VAR_3)
  VAR_2->cur_adc_idx = 1;
 else
  VAR_2->cur_adc_idx = 0;
 VAR_4 = VAR_2->adc_nids[VAR_2->cur_adc_idx];
 if (VAR_2->cur_adc && VAR_2->cur_adc != VAR_4) {

  FUNC_0(VAR_1, VAR_2->cur_adc, 1);
  VAR_2->cur_adc = VAR_4;
  FUNC_1(VAR_1, VAR_4,
        VAR_2->cur_adc_stream_tag, 0,
        VAR_2->cur_adc_format);
 }
}
