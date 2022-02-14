
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_plugin_channel {int dummy; } ;
struct snd_pcm_plugin {struct snd_pcm_plugin_channel* buf_channels; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;



snd_pcm_sframes_t FUNC_0(struct snd_pcm_plugin *VAR_0,
           snd_pcm_uframes_t VAR_1,
           struct snd_pcm_plugin_channel **VAR_2)
{
 *VAR_2 = VAR_0->buf_channels;
 return VAR_1;
}
