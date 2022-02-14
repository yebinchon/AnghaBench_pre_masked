
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8903_priv {struct snd_pcm_substream* slave_substream; struct snd_pcm_substream* master_substream; int capture_active; int playback_active; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct wm8903_priv* private_data; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct snd_pcm_substream *VAR_1,
       struct snd_soc_dai *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_device *VAR_4 = VAR_3->socdev;
 struct snd_soc_codec *VAR_5 = VAR_4->card->codec;
 struct wm8903_priv *VAR_6 = VAR_5->private_data;

 if (VAR_1->stream == VAR_0)
  VAR_6->playback_active--;
 else
  VAR_6->capture_active--;

 if (VAR_6->master_substream == VAR_1)
  VAR_6->master_substream = VAR_6->slave_substream;

 VAR_6->slave_substream = ((void*)0);
}
