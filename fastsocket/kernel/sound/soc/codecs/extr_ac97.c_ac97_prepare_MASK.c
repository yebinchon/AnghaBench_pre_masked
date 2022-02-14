
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {int ac97; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3,
   struct snd_soc_dai *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 struct snd_soc_pcm_runtime *VAR_6 = VAR_3->private_data;
 struct snd_soc_device *VAR_7 = VAR_6->socdev;
 struct snd_soc_codec *VAR_8 = VAR_7->card->codec;

 int VAR_9 = (VAR_3->stream == VAR_2) ?
    VAR_0 : VAR_1;
 return FUNC_0(VAR_8->ac97, VAR_9, VAR_5->rate);
}
