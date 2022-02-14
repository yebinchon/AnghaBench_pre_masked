
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_gen_spec {int (* pcm_playback_hook ) (struct hda_pcm_stream*,struct hda_codec*,struct snd_pcm_substream*,int) ;} ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_pcm_stream*,struct hda_codec*,struct snd_pcm_substream*,int) ;

__attribute__((used)) static void FUNC_1(struct hda_pcm_stream *VAR_0,
       struct hda_codec *VAR_1,
       struct snd_pcm_substream *VAR_2,
       int VAR_3)
{
 struct hda_gen_spec *VAR_4 = VAR_1->spec;
 if (VAR_4->pcm_playback_hook)
  VAR_4->pcm_playback_hook(VAR_0, VAR_1, VAR_2, VAR_3);
}
