
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_soc_codec*,int) ;
 int FUNC_1 (struct snd_soc_codec*,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4,
   struct snd_soc_dai *VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct snd_soc_pcm_runtime *VAR_7 = VAR_4->private_data;
 struct snd_soc_device *VAR_8 = VAR_7->socdev;
 struct snd_soc_codec *VAR_9 = VAR_8->card->codec;
 int VAR_10;
 u16 VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_0);
 FUNC_1(VAR_9, VAR_0, VAR_11 | 0x1);

 if (VAR_4->stream == VAR_3)
  VAR_10 = VAR_1;
 else
  VAR_10 = VAR_2;

 return FUNC_1(VAR_9, VAR_10, VAR_6->rate);
}
