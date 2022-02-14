
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wm8523_priv {int sysclk; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {int dev; struct wm8523_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_5__ {int ratio; int value; } ;
struct TYPE_4__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_soc_codec*,int ) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_6,
       struct snd_pcm_hw_params *VAR_7,
       struct snd_soc_dai *VAR_8)
{
 struct snd_soc_pcm_runtime *VAR_9 = VAR_6->private_data;
 struct snd_soc_device *VAR_10 = VAR_9->socdev;
 struct snd_soc_codec *VAR_11 = VAR_10->card->codec;
 struct wm8523_priv *VAR_12 = VAR_11->private_data;
 int VAR_13;
 u16 VAR_14 = FUNC_4(VAR_11, VAR_1);
 u16 VAR_15 = FUNC_4(VAR_11, VAR_2);


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_5); VAR_13++) {
  if (VAR_12->sysclk / FUNC_3(VAR_7) ==
      VAR_5[VAR_13].ratio)
   break;
 }


 if (VAR_13 == FUNC_0(VAR_5)) {
  FUNC_1(VAR_11->dev, "MCLK/fs ratio %d unsupported\n",
   VAR_12->sysclk / FUNC_3(VAR_7));
  return -VAR_0;
 }

 VAR_15 &= ~VAR_3;
 VAR_15 |= VAR_5[VAR_13].value;

 VAR_14 &= ~VAR_4;
 switch (FUNC_2(VAR_7)) {
 case 131:
  break;
 case 130:
  VAR_14 |= 0x8;
  break;
 case 129:
  VAR_14 |= 0x10;
  break;
 case 128:
  VAR_14 |= 0x18;
  break;
 }

 FUNC_5(VAR_11, VAR_1, VAR_14);
 FUNC_5(VAR_11, VAR_2, VAR_15);

 return 0;
}
