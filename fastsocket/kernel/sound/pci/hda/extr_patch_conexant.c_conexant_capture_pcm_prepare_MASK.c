
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t number; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int * adc_nids; int (* capture_prepare ) (struct hda_codec*) ;} ;


 int FUNC_0 (struct hda_codec*,int ,unsigned int,int ,unsigned int) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_2(struct hda_pcm_stream *VAR_0,
          struct hda_codec *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3,
          struct snd_pcm_substream *VAR_4)
{
 struct conexant_spec *VAR_5 = VAR_1->spec;
 if (VAR_5->capture_prepare)
  VAR_5->capture_prepare(VAR_1);
 FUNC_0(VAR_1, VAR_5->adc_nids[VAR_4->number],
       VAR_2, 0, VAR_3);
 return 0;
}
