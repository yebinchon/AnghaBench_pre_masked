
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; struct mixart_stream* private_data; } ;
struct mixart_stream {int buf_periods; scalar_t__ buf_period_frag; } ;
typedef int snd_pcm_uframes_t ;



__attribute__((used)) static snd_pcm_uframes_t FUNC_0(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct mixart_stream *VAR_2 = VAR_1->private_data;

 return (snd_pcm_uframes_t)((VAR_2->buf_periods * VAR_1->period_size) + VAR_2->buf_period_frag);
}
