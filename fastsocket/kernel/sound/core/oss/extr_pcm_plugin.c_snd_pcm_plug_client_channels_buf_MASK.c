
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin_format {int channels; int format; } ;
struct TYPE_2__ {char* addr; int first; int step; } ;
struct snd_pcm_plugin_channel {int frames; int enabled; int wanted; TYPE_1__ area; } ;
struct snd_pcm_plugin {scalar_t__ access; struct snd_pcm_plugin_channel* buf_channels; struct snd_pcm_plugin_format dst_format; struct snd_pcm_plugin_format src_format; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct snd_pcm_plugin* FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_pcm_plugin* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

snd_pcm_sframes_t FUNC_5(struct snd_pcm_substream *VAR_4,
      char *VAR_5,
      snd_pcm_uframes_t VAR_6,
      struct snd_pcm_plugin_channel **VAR_7)
{
 struct snd_pcm_plugin *VAR_8;
 struct snd_pcm_plugin_channel *VAR_9;
 struct snd_pcm_plugin_format *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14 = FUNC_4(VAR_4);

 if (FUNC_0(!VAR_5))
  return -VAR_0;
 if (VAR_14 == VAR_3) {
  VAR_8 = FUNC_2(VAR_4);
  VAR_10 = &VAR_8->src_format;
 } else {
  VAR_8 = FUNC_3(VAR_4);
  VAR_10 = &VAR_8->dst_format;
 }
 VAR_9 = VAR_8->buf_channels;
 *VAR_7 = VAR_9;
 if ((VAR_11 = FUNC_1(VAR_10->format)) < 0)
  return VAR_11;
 VAR_12 = VAR_10->channels;
 if (FUNC_0(VAR_8->access != VAR_1 &&
         VAR_10->channels > 1))
  return -VAR_0;
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++, VAR_9++) {
  VAR_9->frames = VAR_6;
  VAR_9->enabled = 1;
  VAR_9->wanted = (VAR_14 == VAR_2);
  VAR_9->area.addr = VAR_5;
  VAR_9->area.first = VAR_13 * VAR_11;
  VAR_9->area.step = VAR_12 * VAR_11;
 }
 return VAR_6;
}
