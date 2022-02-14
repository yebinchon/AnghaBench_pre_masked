
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
       struct snd_pcm_hw_params *VAR_6,
       struct snd_soc_dai *VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_5->private_data;
 struct snd_soc_device *VAR_9 = VAR_8->socdev;
 struct snd_soc_codec *VAR_10 = VAR_9->card->codec;
 int VAR_11 = 0;


 VAR_11 |= VAR_1;
 FUNC_1(VAR_10, FUNC_0(0), VAR_11);

 VAR_11 = 0;

 switch (FUNC_3(VAR_6)) {
 case 44100:
  VAR_11 |= VAR_3;
  break;
 case 48000:
  VAR_11 |= VAR_4;
  break;
 case 32000:
  VAR_11 |= VAR_2;
  break;
 default:
  FUNC_2(VAR_10->dev, "unsupported sampling rate\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_10, FUNC_0(3), VAR_11);
}
