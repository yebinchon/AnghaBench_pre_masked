
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8753_priv {int pcmclk; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct wm8753_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
    struct snd_pcm_hw_params *VAR_3,
    struct snd_soc_dai *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_2->private_data;
 struct snd_soc_device *VAR_6 = VAR_5->socdev;
 struct snd_soc_codec *VAR_7 = VAR_6->card->codec;
 struct wm8753_priv *VAR_8 = VAR_7->private_data;
 u16 VAR_9 = FUNC_2(VAR_7, VAR_0) & 0x01f3;
 u16 VAR_10 = FUNC_2(VAR_7, VAR_1) & 0x017f;


 switch (FUNC_0(VAR_3)) {
 case 131:
  break;
 case 130:
  VAR_9 |= 0x0004;
  break;
 case 129:
  VAR_9 |= 0x0008;
  break;
 case 128:
  VAR_9 |= 0x000c;
  break;
 }


 if (FUNC_1(VAR_3) * 384 == VAR_8->pcmclk)
  VAR_10 |= 0x80;
 FUNC_3(VAR_7, VAR_1, VAR_10);

 FUNC_3(VAR_7, VAR_0, VAR_9);
 return 0;
}
