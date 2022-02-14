
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_gen_spec {int active_streams; int pcm_mutex; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_pcm_stream*,struct hda_codec*,struct snd_pcm_substream*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hda_pcm_stream *VAR_2,
      struct hda_codec *VAR_3,
      struct snd_pcm_substream *VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_3->spec;
 FUNC_1(&VAR_5->pcm_mutex);
 VAR_5->active_streams &= ~(1 << VAR_1);
 FUNC_0(VAR_2, VAR_3, VAR_4,
          VAR_0);
 FUNC_2(&VAR_5->pcm_mutex);
 return 0;
}
