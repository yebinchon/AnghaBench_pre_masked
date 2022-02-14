
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct ak4535_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct ak4535_priv {int sysclk; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
       struct snd_pcm_hw_params *VAR_2,
       struct snd_soc_dai *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;
 struct snd_soc_device *VAR_5 = VAR_4->socdev;
 struct snd_soc_codec *VAR_6 = VAR_5->card->codec;
 struct ak4535_priv *VAR_7 = VAR_6->private_data;
 u8 VAR_8 = FUNC_0(VAR_6, VAR_0) & ~(0x3 << 5);
 int VAR_9 = FUNC_2(VAR_2), VAR_10 = 256;

 if (VAR_9)
  VAR_10 = VAR_7->sysclk / VAR_9;


 switch (VAR_10) {
 case 1024:
  VAR_8 |= (0x2 << 5);
  break;
 case 512:
  VAR_8 |= (0x1 << 5);
  break;
 case 256:
  break;
 }


 FUNC_1(VAR_6, VAR_0, VAR_8);
 return 0;
}
