
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wm8988_priv {int sysclk; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {int dev; struct wm8988_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {int sr; int usb; } ;
struct TYPE_3__ {struct snd_soc_codec* codec; } ;






 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_soc_codec*,int ) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3,
    struct snd_pcm_hw_params *VAR_4,
    struct snd_soc_dai *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_3->private_data;
 struct snd_soc_device *VAR_7 = VAR_6->socdev;
 struct snd_soc_codec *VAR_8 = VAR_7->card->codec;
 struct wm8988_priv *VAR_9 = VAR_8->private_data;
 u16 VAR_10 = FUNC_4(VAR_8, VAR_0) & 0x1f3;
 u16 VAR_11 = FUNC_4(VAR_8, VAR_1) & 0x180;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_9->sysclk, FUNC_3(VAR_4));
 if (VAR_12 < 0) {
  VAR_12 = FUNC_1(VAR_9->sysclk / 2, FUNC_3(VAR_4));
  VAR_11 |= 0x40;
 }
 if (VAR_12 < 0) {
  FUNC_0(VAR_8->dev,
   "Unable to configure sample rate %dHz with %dHz MCLK\n",
   FUNC_3(VAR_4), VAR_9->sysclk);
  return VAR_12;
 }


 switch (FUNC_2(VAR_4)) {
 case 131:
  break;
 case 130:
  VAR_10 |= 0x0004;
  break;
 case 129:
  VAR_10 |= 0x0008;
  break;
 case 128:
  VAR_10 |= 0x000c;
  break;
 }


 FUNC_5(VAR_8, VAR_0, VAR_10);
 if (VAR_12 >= 0)
  FUNC_5(VAR_8, VAR_1, VAR_11 |
   (VAR_2[VAR_12].sr << 1) | VAR_2[VAR_12].usb);

 return 0;
}
