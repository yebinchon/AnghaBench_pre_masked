
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
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5,
 struct snd_pcm_hw_params *VAR_6,
 struct snd_soc_dai *VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_5->private_data;
 struct snd_soc_device *VAR_9 = VAR_8->socdev;
 struct snd_soc_codec *VAR_10 = VAR_9->card->codec;
 u16 VAR_11 = FUNC_1(VAR_10, VAR_4);

 VAR_11 &= ~VAR_3;

 switch (FUNC_0(VAR_6)) {
 case 131:
  break;
 case 130:
  VAR_11 |= VAR_0;
  break;
 case 129:
  VAR_11 |= VAR_1;
  break;
 case 128:
  VAR_11 |= VAR_2;
  break;
 }

 FUNC_2(VAR_10, VAR_4, VAR_11);
 return 0;
}
