
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int number; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_gen_spec {int * adc_nids; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_pcm_stream*,struct hda_codec*,struct snd_pcm_substream*,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_pcm_stream *VAR_1,
       struct hda_codec *VAR_2,
       struct snd_pcm_substream *VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_2->spec;

 FUNC_1(VAR_2,
         VAR_4->adc_nids[VAR_3->number + 1]);
 FUNC_0(VAR_1, VAR_2, VAR_3,
         VAR_0);
 return 0;
}
