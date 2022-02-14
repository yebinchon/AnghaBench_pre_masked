
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uda134x_priv {struct snd_pcm_substream* slave_substream; struct snd_pcm_substream* master_substream; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct uda134x_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;



__attribute__((used)) static void FUNC_0(struct snd_pcm_substream *VAR_0,
 struct snd_soc_dai *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct snd_soc_device *VAR_3 = VAR_2->socdev;
 struct snd_soc_codec *VAR_4 = VAR_3->card->codec;
 struct uda134x_priv *VAR_5 = VAR_4->private_data;

 if (VAR_5->master_substream == VAR_0)
  VAR_5->master_substream = VAR_5->slave_substream;

 VAR_5->slave_substream = ((void*)0);
}
