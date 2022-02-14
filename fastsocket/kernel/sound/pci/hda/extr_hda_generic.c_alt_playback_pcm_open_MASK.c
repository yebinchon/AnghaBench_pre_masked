
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_gen_spec {int active_streams; int pcm_mutex; int indep_hp_enabled; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_pcm_stream*,struct hda_codec*,struct snd_pcm_substream*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hda_pcm_stream *VAR_3,
     struct hda_codec *VAR_4,
     struct snd_pcm_substream *VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_4->spec;
 int VAR_7 = 0;

 FUNC_1(&VAR_6->pcm_mutex);
 if (!VAR_6->indep_hp_enabled)
  VAR_7 = -VAR_0;
 else
  VAR_6->active_streams |= 1 << VAR_2;
 FUNC_0(VAR_3, VAR_4, VAR_5,
          VAR_1);
 FUNC_2(&VAR_6->pcm_mutex);
 return VAR_7;
}
