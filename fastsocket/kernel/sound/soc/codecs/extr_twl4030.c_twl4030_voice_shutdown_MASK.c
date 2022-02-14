
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (struct snd_soc_codec*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_0,
    struct snd_soc_dai *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;
 struct snd_soc_device *VAR_3 = VAR_2->socdev;
 struct snd_soc_codec *VAR_4 = VAR_3->card->codec;


 FUNC_0(VAR_4, VAR_0->stream, 0);
}
