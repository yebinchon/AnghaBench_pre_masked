
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct twl4030_priv {scalar_t__ configured; struct snd_pcm_substream* master_substream; struct snd_pcm_substream* slave_substream; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct twl4030_priv* private_data; } ;
struct snd_pcm_substream {int stream; TYPE_2__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_4__ {int channels; } ;
struct TYPE_3__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (struct snd_soc_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0,
        struct snd_soc_dai *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct snd_soc_device *VAR_3 = VAR_2->socdev;
 struct snd_soc_codec *VAR_4 = VAR_3->card->codec;
 struct twl4030_priv *VAR_5 = VAR_4->private_data;

 if (VAR_5->master_substream == VAR_0)
  VAR_5->master_substream = VAR_5->slave_substream;

 VAR_5->slave_substream = ((void*)0);



 if (!VAR_5->master_substream)
  VAR_5->configured = 0;
  else if (!VAR_5->master_substream->runtime->channels)
  VAR_5->configured = 0;


 if (VAR_0->runtime->channels == 4)
  FUNC_0(VAR_4, VAR_0->stream, 0);
}
