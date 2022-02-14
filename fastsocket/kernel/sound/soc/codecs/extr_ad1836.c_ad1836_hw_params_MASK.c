
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4,
  struct snd_pcm_hw_params *VAR_5,
  struct snd_soc_dai *VAR_6)
{
 int VAR_7 = 0;

 struct snd_soc_pcm_runtime *VAR_8 = VAR_4->private_data;
 struct snd_soc_device *VAR_9 = VAR_8->socdev;
 struct snd_soc_codec *VAR_10 = VAR_9->card->codec;


 switch (FUNC_0(VAR_5)) {
 case 131:
  VAR_7 = 3;
  break;
 case 130:
  VAR_7 = 1;
  break;
 case 129:
 case 128:
  VAR_7 = 0;
  break;
 }

 FUNC_1(VAR_10, VAR_2,
  VAR_3, VAR_7);

 FUNC_1(VAR_10, VAR_0,
  VAR_1, VAR_7);

 return 0;
}
