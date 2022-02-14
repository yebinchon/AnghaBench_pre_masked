
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int rate; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dsp_state; scalar_t__* effects_switch; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static unsigned int FUNC_0(struct hda_pcm_stream *VAR_5,
   struct hda_codec *VAR_6,
   struct snd_pcm_substream *VAR_7)
{
 struct ca0132_spec *VAR_8 = VAR_6->spec;
 unsigned int VAR_9 = VAR_1;
 struct snd_pcm_runtime *VAR_10 = VAR_7->runtime;

 if (VAR_8->dsp_state != VAR_3)
  return 0;

 if (VAR_8->effects_switch[VAR_0 - VAR_4])
  VAR_9 += VAR_2;

 return (VAR_9 * VAR_10->rate) / 1000;
}
