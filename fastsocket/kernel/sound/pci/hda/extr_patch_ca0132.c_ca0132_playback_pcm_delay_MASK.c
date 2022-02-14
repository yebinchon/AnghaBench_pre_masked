
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int rate; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dsp_state; scalar_t__ cur_out_type; scalar_t__* effects_switch; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;

__attribute__((used)) static unsigned int FUNC_0(struct hda_pcm_stream *VAR_9,
   struct hda_codec *VAR_10,
   struct snd_pcm_substream *VAR_11)
{
 struct ca0132_spec *VAR_12 = VAR_10->spec;
 unsigned int VAR_13 = VAR_2;
 struct snd_pcm_runtime *VAR_14 = VAR_11->runtime;

 if (VAR_12->dsp_state != VAR_1)
  return 0;


 if (VAR_12->effects_switch[VAR_6 - VAR_5]) {
  if ((VAR_12->effects_switch[VAR_8 - VAR_5]) ||
      (VAR_12->effects_switch[VAR_0 - VAR_5]))
   VAR_13 += VAR_3;
 }


 if (VAR_12->cur_out_type == VAR_7)
  VAR_13 += VAR_4;

 return (VAR_13 * VAR_14->rate) / 1000;
}
