
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t number; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int (* capture_cleanup ) (struct hda_codec*) ;int * adc_nids; } ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_2(struct hda_pcm_stream *VAR_0,
          struct hda_codec *VAR_1,
          struct snd_pcm_substream *VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_1->spec;
 FUNC_0(VAR_1, VAR_3->adc_nids[VAR_2->number]);
 if (VAR_3->capture_cleanup)
  VAR_3->capture_cleanup(VAR_1);
 return 0;
}
