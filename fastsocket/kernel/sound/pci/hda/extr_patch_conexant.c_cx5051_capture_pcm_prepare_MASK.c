
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {size_t cur_adc_idx; unsigned int cur_adc_stream_tag; unsigned int cur_adc_format; int cur_adc; int * adc_nids; } ;


 int FUNC_0 (struct hda_codec*,int ,unsigned int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hda_pcm_stream *VAR_0,
          struct hda_codec *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3,
          struct snd_pcm_substream *VAR_4)
{
 struct conexant_spec *VAR_5 = VAR_1->spec;
 VAR_5->cur_adc = VAR_5->adc_nids[VAR_5->cur_adc_idx];
 VAR_5->cur_adc_stream_tag = VAR_2;
 VAR_5->cur_adc_format = VAR_3;
 FUNC_0(VAR_1, VAR_5->cur_adc, VAR_2, 0, VAR_3);
 return 0;
}
