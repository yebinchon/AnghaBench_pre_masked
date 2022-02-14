
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wm8731_priv {int sysclk; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct wm8731_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {int sr; int bosr; int usb; } ;
struct TYPE_3__ {struct snd_soc_codec* codec; } ;





 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_soc_codec*,int ) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
       struct snd_pcm_hw_params *VAR_4,
       struct snd_soc_dai *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_3->private_data;
 struct snd_soc_device *VAR_7 = VAR_6->socdev;
 struct snd_soc_codec *VAR_8 = VAR_7->card->codec;
 struct wm8731_priv *VAR_9 = VAR_8->private_data;
 u16 VAR_10 = FUNC_3(VAR_8, VAR_0) & 0xfff3;
 int VAR_11 = FUNC_0(VAR_9->sysclk, FUNC_2(VAR_4));
 u16 VAR_12 = (VAR_2[VAR_11].sr << 2) |
  (VAR_2[VAR_11].bosr << 1) | VAR_2[VAR_11].usb;

 FUNC_4(VAR_8, VAR_1, VAR_12);


 switch (FUNC_1(VAR_4)) {
 case 130:
  break;
 case 129:
  VAR_10 |= 0x0004;
  break;
 case 128:
  VAR_10 |= 0x0008;
  break;
 }

 FUNC_4(VAR_8, VAR_0, VAR_10);
 return 0;
}
